<?php

/*
  debug_object($view | $nodes | get_defined_vars());

  WARNING: this one can be huge
  debug_object($GLOBALS);

  debug_print_backtrace();
*/

/**
 * USAGE: debug_template_start(__FILE__, $theme_hook_suggestions);
 */
function debug_template_start($file, $tpls) {
  debug_template_marker($file, 'start', $tpls);
}

/**
 * USAGE: debug_template_end(__FILE__);
 */
function debug_template_end($file) {
  debug_template_marker($file, 'end');
}

/**
 *
 */
function debug_template_marker($file, $mark, $extra = '') {
  if (is_array($extra) AND count($extra) > 0) {
    $extra = '; theme_hook_suggestions: ' . join(', ', $extra);
  }

  print "\n<!--[if !IE]>tpl $mark: " . debug_template_file_clean($file) . "$extra<![endif]-->\n";
}

/**
 *
 */
function debug_template_file_clean($file) {
  return str_replace('--', '\-\-', str_replace($_SERVER['DOCUMENT_ROOT'], '', $file));
}



/**
 *
 */
function debug_object($object, $message = null) {
  if (!$message) {
    $message = '';
  }

  print"<textarea>$message";print_r($object);print"</textarea>";
}

/**
 * Prints a debug_backtrace() array in a pretty HTML way...
 * @param optional array $trace The array. If null, a current backtrace is used.
 * @param optional boolean $return If true will return the HTML instead of printing it.
 * @access public
 * @return void
 */
function debug_html_backtrace($trace = null, $return = false) {
  if (is_array($trace)) {
    $traceArray = $trace;
  } else {
    $traceArray = debug_backtrace();
  }

  if ($return) ob_start();

  $rows_arr = array();

  if (is_array($traceArray)) {
    foreach ($traceArray as $i => $trace) {
      /* each $traceArray element represents a step in the call hiearchy. Print them from bottom up. */
      if (isset($trace['file'])) {
        $filePath = $trace['file'];
        $file = basename($trace['file']);
      } else {
        $filePath = '';
        $file = '';
      }

      if (isset($trace['line'])) {
        $line = $trace['line'];
      } else {
        $line = '';
      }

      $function = $trace['function'];
      $class = isset($trace['class'])?$trace['class']:'';
      $type = isset($trace['type'])?$trace['type']:'';

      if (isset($trace['args'])) {
        $args = debug_render_arguments($trace['args'], false, false);
      } else {
        $args = '';
      }

      $cleanFilePath = htmlentities($filePath);
      $cleanFile = htmlentities($file);
      $location = '';

      if ($class || $type || $function || $args) {
        $location = htmlentities("$class$type$function($args);");
      }

      $rows_arr[] = <<<HTML
    <tr>
      <td>$i</td>
      <td title="$cleanFilePath">$cleanFile</td>
      <td>$line</td>
      <td style='font-family: monospace; white-space: nowrap;'>$location</td>
    </tr>
HTML;
    }
  }

  $rows = implode("\n", $rows_arr);

  print <<<HTML
  <table border='1'>";
    <thead>
      <tr>
        <th>#</th>
        <th>File</th>
        <th>Line</th>
        <th>Call</th>
      </tr>
    </thead>
    <tbody>
$rows
    </tbody>
  </table>
HTML;

  if ($return) {
    return ob_get_clean();
  }
}

/**
 * Renders many arguments.
 * Renders many arguments by printing their types and values and comma delimiting them.
 * In 'detailed' mode, includes some additional information (i.e., for arrays,
   * prints all elements of the array; for objects, prints the object structure).
 * @param array $arguments The arguments to render.
 * @param boolean $isDetailed If TRUE, will print additional details.
 * @param boolean $shouldPrint If TRUE, will print on screen; If FALSE, will not
 * @param integer $trim If >0, will trim the argument to to the given length
 * print, but just return the result as a string.
 * @return string The output of the method. This will be output to the browser
 * if $shouldPrint is set to TRUE. Returns FALSE, if something goes wrong.
 * @access public
 **/
function debug_render_arguments($arguments, $isDetailed = false, $shouldPrint = false, $trim = 0) {
  // see if $arguments is an array and make sure $arguments is not empty
  if (!is_array($arguments) OR count($arguments) == 0) {
    return false;
  }

  // render each element of $arguments
  $resultArray = array();

  foreach (array_keys($arguments) as $i => $key) {
    $resultArray[] = debug_render_argument($arguments[$key],$isDetailed,false, $trim);
  }

  $glue = ($isDetailed) ? ",\n" : ", ";
  $result = implode($glue, $resultArray);

  // print if necessary
  if ($shouldPrint) {
    echo $result;
  }

  return $result;
}

/**
 * Renders one argument.
 * Renders one argument by printing its type and value. In 'detailed' mode,
 * includes some additional information (i.e., for arrays, prints all elements
 * of the array; for objects, prints the object structure).
 * @param mixed $argument The argument to render.
 * @param boolean $isDetailed If TRUE, will print additional details.
 * @param boolean $shouldPrint If TRUE, will print on screen; If FALSE, will not
 * print, but just return the result as a string.
 * @param integer $trim If >0, will trim the argument to to the given length
 * @return string The output of the method. This will be output to the browser
 * if $shouldPrint is set to TRUE.
 * @access public
 **/
function debug_render_argument($argument, $isDetailed = false, $shouldPrint = false, $trim = 0) {
  $result = "Unknown";

  // NULL type
  if (is_null($argument)) {
    $result = "NULL";
  // Boolean type
  } else if (is_bool($argument)) {
    $result = "Boolean: " . ($argument ? "true" : "false");
  // String type
  } else if (is_string($argument)) {
    if ($trim > 0 && strlen($argument) > $trim) {
      $result = "String: \"".substr($argument, 0, $trim)."\"...(trimmed)";
    } else {
      $result = "String: \"$argument\"";
    }

    if ($isDetailed) {
      $result .= " (length = ".strlen($argument).")";
    }
  // Integer type
  } else if (is_integer($argument)) {
    $result = "Integer: $argument";
  // Float type
  } else if (is_float($argument)) {
    $result = "Float: $argument";
  // Array type
  } else if (is_array($argument)) {
    $result = "Array: " . count($argument) . " elements";

    if ($isDetailed && count($argument) > 0) {
      $result .= " {\n";

      foreach ($argument as $key => $elt) {
        $result .= "    [".$key."] => ";
        $result .= ArgumentRenderer::debug_render_argument($elt,false,false, $trim);
        $result .= "\n";
      }

      $result .= "}";
    }
  // Resource type
  } else if (is_resource($argument)) {
    $result = "Resource: ".get_resource_type($argument);
  // Object type
  } elseif (is_object($argument)) {
    $result = "Object: " . get_class($argument);

    if ($isDetailed) {
      $memberVars = get_object_vars($argument);

      if (count($memberVars) > 0) {
        $result .= "\nMember variables: {\n";

        foreach (get_object_vars($argument) as $key => $elt) {
          $result .= "    [".$key."] => ";
          $result .= ArgumentRenderer::debug_render_argument($elt,false,false, $trim);
          $result .= "\n";
        }

        $result .= "}";
      }
    }
  }

  // print if necessary
  if ($shouldPrint) {
    echo $result;
  }

  return $result;
}

/**
 *
 */
function debug_parse_backtrace($raw) {
  $output = array();

  foreach($raw as $entry) {
    $output[] = "\nFile: ".$entry['file']." (Line: ".$entry['line'].")";
    $output[] = "Function: ".$entry['function'];
    $output[] = "Args: ".implode(", ", $entry['args']);
  }

  return implode("\n", $output);
}
