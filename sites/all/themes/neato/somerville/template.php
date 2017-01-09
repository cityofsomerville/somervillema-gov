<?php

// subdomain and top level domains that are considered debug candidates
somerville_debug_env(array('test', 'dev'), array('ifdev', 'fulcrum'));

/**
 * setup template debug functions if apropriate.
 */
function somerville_debug_env($sub_arr, $tld_arr) {
  if ($_SERVER and array_key_exists('SERVER_NAME', $_SERVER) and !array_key_exists('env_debug', $GLOBALS)) {
    $host_parts = explode('.', $_SERVER['SERVER_NAME']);

    // bring in the debug functions if apropriate, otherwise just make dummy stubs
    if ($GLOBALS['env_debug'] = (in_array($host_parts[0], $sub_arr) or in_array($host_parts[count($host_parts) - 1], $tld_arr))) {
      require_once dirname(__FILE__).'/debug.php';
    } else {
      function debug_template_start($file, $tpls = '') {}
      function debug_template_end($file) {}
    }
  }
}

/**
 * Implements template_preprocess_html().
 */
function somerville_preprocess_html(&$variables) {
  //drupal_add_js(drupal_get_path('theme', 'somerville') . '/js/lib/require.js', array('every_page' => TRUE, 'external' => TRUE));

  // Add TypeKit JS
  drupal_add_js('//use.typekit.net/kfw4cim.js', 'external');
  drupal_add_js('try{Typekit.load();}catch(e){}', 'inline');
  drupal_add_js('//cdnjs.cloudflare.com/ajax/libs/select2/4.0.0/js/select2.min.js', array('every_page' => true, 'external' => true));
  drupal_add_css('//cdnjs.cloudflare.com/ajax/libs/select2/4.0.0/css/select2.min.css');
  drupal_add_js(drupal_get_path('theme', 'somerville').'/js/lib/angular.js');
  drupal_add_js(drupal_get_path('theme', 'somerville').'/js/lib/angular-aria.js');
  drupal_add_js(drupal_get_path('theme', 'somerville').'/js/vendor-generated.js');
  drupal_add_js(drupal_get_path('theme', 'somerville').'/js/angular/cosComponentApp.js');
  drupal_add_js(drupal_get_path('theme', 'somerville').'/js/files/sidebar.js');

  if(drupal_is_front_page()) {
    drupal_add_js('https://maps.googleapis.com/maps/api/js', 'external');
  }

  drupal_add_js("
    function googleTranslateElementInit() {
      new google.translate.TranslateElement({pageLanguage: 'en', layout: google.translate.TranslateElement.InlineLayout.SIMPLE}, 'google_translate_element');
      changeLanguageText();
    }
    function changeLanguageText() {
      var el = jQuery('.goog-te-menu-value span:first-child');
      if (el.text() == 'Select Language') {
        jQuery(el).html('Translate');
        jQuery('#google_translate_element').fadeIn('slow');
      } else {
        setTimeout(changeLanguageText, 10);
      }
    }", array('every_page' => true, 'type' => 'inline', 'scope' => 'footer', 'weight' => 5));

  drupal_add_js('//translate.google.com/translate_a/element.js?cb=googleTranslateElementInit', array(
    'every_page' => true,
    'external' => true,
    'scope' => 'footer',
    'weight' => 5,
    'preprocess' => false,
  ));

  if (isset($variables['element']['#attributes']['src'])
      && $variables['element']['#attributes']['src'] == '/'.drupal_get_path('theme', 'somerville').'/js/lib/require.js') {
          $variables['element']['#attributes']['data-main'] = '/'.drupal_get_path('theme', 'somerville').'/js/main.js';
  }
  $variables['body_top'] = block_get_blocks_by_region('body_top');
}

/**
 * Implements template_preprocess_page.
 */
function somerville_preprocess_page(&$variables) {
  //dpm(get_defined_vars());
    // Get the entire main menu tree
  $main_menu_tree = menu_tree_all_data('main-menu');

  // Add the rendered output to the $main_menu_expanded variable
  $variables['main_menu_expanded'] = menu_tree_output($main_menu_tree);

  //some logic to set the main column width
  $variables['main_width'] = '100';
  if(is_array($variables['page']['sidebar_left_25']) && count($variables['page']['sidebar_left_25']) > 0
    || is_array($variables['page']['sidebar_25']) && count($variables['page']['sidebar_25']) > 0) {
    $variables['main_width'] = '75';
  } elseif(is_array($variables['page']['sidebar_left_25']) && count($variables['page']['sidebar_left_25']) > 0
    && is_array($variables['page']['sidebar_25']) && count($variables['page']['sidebar_25']) > 0) {
    $variables['main_width'] = '50';
  }

  $text_zoom_block = block_load('somv_text_zoom', 'somv_text_zoom');
  $variables['header_text_zoom'] = _block_get_renderable_array(_block_render_blocks(array($text_zoom_block)));

  $footer_enews_block = block_load('somv_enews_signup', 'somv_enews_signup_footer');
  $variables['footer_enews_form'] = _block_get_renderable_array(_block_render_blocks(array($footer_enews_block)));
  $search_form = drupal_get_form('search_block_form');
  $search_form_box = drupal_render($search_form);
  $variables['search_box'] = $search_form_box;
}

function _somerville_get_event_doc_count($nid) {
  $query = "SELECT node_field_data_field_event_doc_event.nid AS node_field_data_field_event_doc_event_nid, node.nid AS nid, field_collection_item_field_data_field_event_doc_coll.item_id AS field_collection_item_field_data_field_event_doc_coll_item_i, 'field_collection_item' AS field_data_field_event_doc_coll_doc_field_collection_item_en
FROM {node} node
LEFT JOIN {field_data_field_event_doc_event} field_data_field_event_doc_event ON node.nid = field_data_field_event_doc_event.entity_id AND field_data_field_event_doc_event.entity_type = 'node'
LEFT JOIN {node} node_field_data_field_event_doc_event ON field_data_field_event_doc_event.field_event_doc_event_target_id = node_field_data_field_event_doc_event.nid
LEFT JOIN {field_data_field_event_doc_coll} field_data_field_event_doc_coll ON node.nid = field_data_field_event_doc_coll.entity_id AND field_data_field_event_doc_coll.entity_type = 'node'
LEFT JOIN {field_collection_item} field_collection_item_field_data_field_event_doc_coll ON field_data_field_event_doc_coll.field_event_doc_coll_value = field_collection_item_field_data_field_event_doc_coll.item_id
WHERE (( (node.status = '1') AND (node.type IN  ('event_doc')) AND (node_field_data_field_event_doc_event.nid = :nid) ))
LIMIT 1 OFFSET 0";

  $result = db_query($query, array(':nid' => $nid));

  if ($result) {
    return $result->fetchAssoc();
  }
  else {
    return false;
  }
}

/**
 * Implements template_preprocess_node.
 */
function somerville_preprocess_node(&$variables) {
  if ($variables['node']->type == 'event') {
    $variables['event_documents_link'] = '';
    if (_somerville_get_event_doc_count($variables['node']->nid)) {
      $variables['event_documents_link'] = <<<EOHTML
<a class="cta-primary" href="/event-documents?title=&nid={$variables['node']->nid}">View Minutes &amp; Agendas</a>
EOHTML;
    }
  }
  $regions = system_region_list($GLOBALS['theme']);

  // Add node-level custom theme files
  // e.g. url == /foo/bar/baz then theme file is node--foo--bar--baz.tpl.php
  $url = str_replace('-', '', $variables['node_url']);
  $urlParts = explode('/', $url);
  unset($urlParts[0]);

  if($urlParts[1] !== false) {
  $out = array();
  $sug = 'node';

  foreach($urlParts as $val) {
    $sug .= '__'.$val;
    $out[] = $sug;
  }
  $variables['theme_hook_suggestions'] = array_merge($variables['theme_hook_suggestions'], $out);
  }

  // Get a list of all the regions for this theme
  foreach ($regions as $region_key => $region_name) {
    // Get the content for each region and add it to the $region variable
    if ($blocks = block_get_blocks_by_region($region_key)) {
      $variables['region'][$region_key] = $blocks;
    } elseif ($plugin = context_get_plugin('reaction', 'block')) {
      $blocks = $plugin->block_get_blocks_by_region($region_key);
      $variables['region'][$region_key] = $blocks;
    } else {
      $variables['region'][$region_key] = array();
    }
    drupal_static_reset('context_reaction_block_list');
  }

  $variables['attribution'] = '';
  if (isset($variables['node']->field_header_image['und'][0]['field_attribution']['und'][0]['value'])) {
    $variables['attribution'] = $variables['node']->field_header_image['und'][0]['field_attribution']['und'][0]['value'];
  }
}

function somerville_preprocess_field(&$vars, $hook) {
  if ($vars['element']['#field_name'] == 'field_tabbed_content') {
    $vars['theme_hook_suggestions'][] = 'field__tabbed_content_tabs';

    $field_array = array('field_tabbed_tab_title',
      'field_tabbed_tab_icon',
      'field_tabbed_tab_content',
      'field_tabbed_tab_image', );
    rows_from_field_collection($vars, 'field_tabbed_content', $field_array);
  }
  if ($vars['element']['#field_name'] == 'field_sidebar_links') {
    $vars['theme_hook_suggestions'][] = 'field__sidebar_links';
    $field_array = array('field_sidebar_link_title', 'field_sidebar_link_url', 'field_sidebar_link_target');
    rows_from_field_collection($vars, 'field_sidebar_links', $field_array);
  }
  if ($vars['element']['#field_name'] == 'field_top_links_link_collection') {
    $vars['theme_hook_suggestions'][] = 'field__top_links';
    $field_array = array('field_top_links_link_title', 'field_top_links_link_url');
    rows_from_field_collection($vars, 'field_top_links', $field_array);
  }
  if ($vars['element']['#field_name'] == 'field_contact_information') {
    $vars['theme_hook_suggestions'][] = 'field__contact_information';
    $field_array = array(
      'field_contact_collection_name',
      'field_contact_collection_title',
      'field_contact_collection_hours',
      'field_contact_collection_phone',
      'field_contact_collection_ext',
      'field_contact_collection_fax',
      'field_contact_collection_email',
      'field_contact_collection_address',
      'field_contact_collection_fb_url',
      'field_contact_collection_twitter',
    );
    rows_from_field_collection($vars, 'field_contact_information', $field_array);
  }
}

/**
 * Creates a simple text rows array from a field collections, to be used in a
 * field_preprocess function.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $field_name
 *   The name of the field being altered.
 * @param $field_array
 *   Array of fields to be turned into rows in the field collection.
 */
function rows_from_field_collection(&$vars, $field_name, $field_array) {
  $vars['rows'] = array();
  foreach ($vars['element']['#items'] as $key => $item) {
    $entity_id = $item['value'];
    $entity = field_collection_item_load($entity_id);
    if ($field_name == 'field_tabbed_content'
      && empty($entity->field_tabbed_tab_title)
      && empty($entity->field_tabbed_tab_content)) {
      return false;
    }
    $wrapper = entity_metadata_wrapper('field_collection_item', $entity);
    $row = array();
    foreach($field_array as $field) {
      $row[$field] = $wrapper->$field->value();
    }
    $vars['rows'][] = $row;
  }
}

/**
 * Implements hook_html_head_alter().
 */
function somerville_html_head_alter(&$head_elements) {
}

/**
 * Implements hook_preprocess_html_tag().
 */
// function somerville_process_html_tag(&$vars) {
//   if (isset($vars['element']['#attributes']['src'])
//       && $vars['element']['#attributes']['src'] == '/' . drupal_get_path('theme', 'somerville') . '/js/lib/require.js') {
//           $vars['element']['#attributes']['data-main'] = '/' . drupal_get_path('theme', 'somerville') . '/js/main';
//   }
// }

function somerville_preprocess_menu_tree(&$variables) {
  $tree = new DOMDocument();
  @$tree->loadHTML($variables['tree']);
  $links = $tree->getElementsByTagname('li');
  $parent = '';

  foreach ($links as $link) {
    $parent = $link->getAttribute('data-menu-parent');
    break;
  }

  $variables['menu_parent'] = $parent;
}

/**
 * Implements theme_menu_link().
 */
function somerville_menu_link__main_menu(&$variables) {
  $element = $variables['element'];
  $sub_menu = '';
  $li_css = 'global-nav__main-items';

  // Set menu-parent data attribute for JS
  $element['#attributes']['data-menu-parent'] = $element['#original_link']['menu_name'].'-'.$element['#original_link']['depth'];

  // Check if link is or has a sub-nav and set appropriate css classes
  if ($element['#below']) {
    $li_css = $li_css.' has-sub-nav';
    $element['#localized_options']['attributes']['class'][] = 'global-nav__main-items-link';
  } elseif ($element['#title'] == 'Home' || $element['#title'] == 'Calendar' || $element['#title'] == 'Close') {
    $element['#localized_options']['attributes']['class'][] = 'global-nav__main-items-link';
  } elseif (strpos(url($element['#href']), 'nolink')) {
    $li_css = 'global-nav__sub-nav-items section-heading';
  } else {
    $li_css = 'global-nav__sub-nav-items';
    $element['#localized_options']['attributes']['class'][] = 'global-nav__sub-nav-link';
  }

  // Build l() link
  if ($element['#title'] == 'Home') {
    $output = '<a href="/" class="global-nav__home-link"><i class="global-nav__home fa fa-home"></i><h4 class="global-nav__main-items-title">'.t('Home').'</h4></a>';
  } elseif ($element['#title'] == 'Close') {
    $output = '<span class="global-nav__close js-sidebar-nav-close"></span>';
  } else {
    $sub_menu = drupal_render($element['#below']);
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  }
  // Allow for section headers
  if (strpos(url($element['#href']), 'nolink')) {
    $output = '<a href="#n" class="global-nav__sub-nav-heading">'.$element['#title'].'</a>';
  }
  // Build li item
  return '<li class="'.$li_css.'"'.drupal_attributes($element['#attributes']).'>'.$output.$sub_menu."</li>\n";
}

/**
 * Implements theme_menu_link().
 */
function somerville_menu_link__menu_footer_top(&$variables) {
  $element = $variables['element'];

  $element['#attributes']['data-menu-parent'] = $element['#original_link']['menu_name'].'-'.$element['#original_link']['depth'];
  // Build footer_top menu li's
  // Set l() css attribute
  $element['#localized_options']['#attributes']['#css'] = 'footer-nav__link';
  // Build l() link
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // Build li item
  return '<li class="footer-nav__item"'.drupal_attributes($element['#attributes']).'>'.$output."</li>\n";
}

function somerville_menu_tree__main_menu($variables) {
  $ul_css = 'global-nav__item-list';
  $back_li = '';
  // If sub-nav
  if ($variables['menu_parent'] != 'main-menu-1') {
    $ul_css = 'global-nav__sub-nav';
    $back_li .= '<li class="global-nav__sub-nav-items">';
    $back_li .= '<span class="global-nav__back js-sidebar-nav-back">Back</span>';
    $back_li .= '</li>';
  }

  return '<ul class="'.$ul_css.' menu '.$variables['menu_parent'].'">'.$back_li.$variables['tree'].'</ul>';
}

function somerville_menu_tree__menu_footer_top($variables) {
  return '<ul class="footer-nav menu '.$variables['menu_parent'].'">'.$variables['tree'].'</ul>';
}

/* Put Breadcrumbs in a div > span structure */
function somerville_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $class = 'breadcrumbs__item';
  $crumbs = '';

  if (!empty($breadcrumb)) {
    $crumbs .= '<div class="breadcrumbs breadcrumbs--header component">';
    $crumbs .= '<div class="breadcrumbs__items">';

    foreach($breadcrumb as $key => $value) {
      if ($key == 0) {
        $class .= ' breadcrumbs__home';
      }
      $crumbs .= '<span class="'.$class.'">'.$value.'</span>';
    }

    // Close .breadcrumbs__item
    $crumbs .= '</div>';
    // Close .breadcrumbs--header
    $crumbs .= '</div>';
  }

  return $crumbs;
}

/**
 * Utility function for finding the correct date suffix.
 *
 * @param int $number an integer version of the date
 */
function ordinal($number) {
    $ends = array('th', 'st', 'nd', 'rd', 'th', 'th', 'th', 'th', 'th', 'th');
    if ((($number % 100) >= 11) && (($number % 100) <= 13))
        return $number.'th';
    else
        return $number.$ends[$number % 10];
}

/**
 * Helper function for converting back and forth from '+1' to 'First'.
 */
function somerville_order_translated() {
  return array(
    '+1' => t('First', array(), array('context' => 'date_order')),
    '+2' => t('Second', array(), array('context' => 'date_order')),
    '+3' => t('Third', array(), array('context' => 'date_order')),
    '+4' => t('Fourth', array(), array('context' => 'date_order')),
    '+5' => t('Fifth', array(), array('context' => 'date_order')),
    '-1' => t('Last', array(), array('context' => 'date_order_reverse')),
    '-2' => t('Next to last', array(), array('context' => 'date_order_reverse')),
    '-3' => t('Third from last', array(), array('context' => 'date_order_reverse')),
    '-4' => t('Fourth from last', array(), array('context' => 'date_order_reverse')),
    '-5' => t('Fifth from last', array(), array('context' => 'date_order_reverse')),
  );
}

/**
 * Helper function for BYDAY options.
 */
function somerville_dow_count_options() {
  return array('' => t('Every', array(), array('context' => 'date_order'))) + somerville_order_translated();
}

/**
 * Helper function for FREQ options.
 *
 * Translated and untranslated arrays of the iCal day of week names.
 * We need the untranslated values for date_modify(), translated
 * values when displayed to user.
 */
function somerville_dow_day_options($translated = true) {
  return array(
    'SU' => $translated ? t('Sunday', array(), array('context' => 'day_name')) : 'Sunday',
    'MO' => $translated ? t('Monday', array(), array('context' => 'day_name')) : 'Monday',
    'TU' => $translated ? t('Tuesday', array(), array('context' => 'day_name')) : 'Tuesday',
    'WE' => $translated ? t('Wednesday', array(), array('context' => 'day_name')) : 'Wednesday',
    'TH' => $translated ? t('Thursday', array(), array('context' => 'day_name')) : 'Thursday',
    'FR' => $translated ? t('Friday', array(), array('context' => 'day_name')) : 'Friday',
    'SA' => $translated ? t('Saturday', array(), array('context' => 'day_name')) : 'Saturday',
  );
}

/**
 * Implements theme_date_repeat_display().
 */
function somerville_date_repeat_display(&$vars) {
  //dpm($vars['item']);
  if (isset($vars['item']['rrule'])) {

    // Let's pull out the rrule properties. For example, take this:
    //   RRULE:FREQ=DAILY;INTERVAL=1;UNTIL=20130501T035959Z;WKST=SU
    // and turn it into:
    //   array(
    //     'FREQ' => 'DAILY',
    //     'INTERVAL' => '1' ,
    //     'UNTIL' => '20130501T035959Z',
    //     'WKST' => 'SU'
    //   );
    $ordinal = '';
    $day_str = '';
    $rrule = array();
    $rules = explode(';', str_replace('RRULE:', '', $vars['item']['rrule']));
    foreach($rules as $rule) {
      $parts = explode('=', $rule);
      $key = $parts[0];
      $value = $parts[1];
      $rrule[$key] = $value;
    }

    // Collect an array of translated counts keyed by a 2 character string e.g. '+1' => 'First'
    $counts = somerville_dow_count_options();
    // Collect an array of translated days keyed by first 2 characters e.g. 'MO' => 'Monday'
    $days = somerville_dow_day_options();
    $rr_interval = isset($rrule['INTERVAL']) ? intval($rrule['INTERVAL']) : 0;
    $rr_count = isset($rrule['COUNT']) ? intval($rrule['COUNT']) : 0;

    // Non-consecutive interval repeats e.g. "every other", "every 5th", etc
    if ($rr_interval == 2) {
      $ordinal = 'other ';
    }
    if ($rr_interval > 2) {
      $ordinal = ordinal($rr_interval).' ';
    }

    // Set human readable weekday strings
    if (isset($rrule['BYDAY']) && $rrule['FREQ'] != 'MONTHLY') {
      // Multi-day repeats e.g. "Monday/Wednesday/Friday"
      $byday_parts = explode(',', $rrule['BYDAY']);
      foreach ($byday_parts as $key => $day) {
        $day_str_pre = '/';
        if ($key > 0) {
          $day_str .= $day_str_pre.$days[$day];
        } else {
          $day_str .= $days[$day];
        }
      }
    }

    // Change the 'Repeats every day until [date] .' display to our liking.
    if ($rrule['FREQ'] == 'DAILY') {
      if (!isset($rrule['BYDAY'])) {
        $day_str = 'day';
      } elseif (count($byday_parts) == 5) {
        $day_str = 'weekday';
      }
    }

    if ($rrule['FREQ'] == 'WEEKLY') {
      if ($rr_count > 1) {
        if (!isset($rrule['BYDAY'])) {
          $day_str = date('l', strtotime($vars['item']['value']));
        }
      } else {
        // Wierd edge case. Not really a repeating event even though "Repeat" was selected
        $day_str = $vars['item']['value'];

        return '<span>'.t('on ').'</span>';
      }
    }

    $output = t('Occurs every !ordinal!date, effective', array('!ordinal' => $ordinal, '!date' => $day_str));

    if ($rrule['FREQ'] == 'MONTHLY' && $rr_count > 1) {
      if (isset($rrule['BYMONTHDAY'])) {
        $bymonthday = ordinal(intval($rrule['BYMONTHDAY']));
        $output = t('Occurs monthly on the !day, effective ', array('!day' => $bymonthday));
      }
      if (isset($rrule['BYDAY'])) {
        $results = array();
        $byday = $rrule['BYDAY'];
        // Get the numeric part of the BYDAY option, i.e. +3 from +3MO.
        $day = substr($byday, -2);
        $count = str_replace($day, '', $byday);
        // See if there is a 'pretty' option for this count, i.e. +1 => First.
        if (!empty($count)) {
          $order = array_key_exists($count, $counts) ? strtolower($counts[$count]) : $count;
          $output = t('Occurs monthly on the !date_order !day_of_week, effective ', array('!date_order' => $order, '!day_of_week' => $days[$day]));
        }
      }
    }

    return '<span>'.$output.' </span>';
  }

  // If we made it this far, then we assume that we didn't want to theme this
  // repeat rule in a custom way, so let's just render it normally.
  return theme_date_repeat_display($vars);
}

function somerville_preprocess_views_view(&$variables, $hook) {
  // provide a function for every view name
  $function = __FUNCTION__.'_'.$variables['view']->name;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
  //add a class indicating the view has exposed filters
  if(isset($variables['exposed'])) {
    $variables['classes_array'][] = 'view-has-exposed-filters';
  }
}

function somerville_preprocess_views_view_fields(&$variables) {
  // $view = $variables['view'];
  // if ($view->name == 'departments_listing_ul') {
  //   // Loop through the fields for this view.
  //   $previous_inline = FALSE;
  //   $variables['fields'] = array(); // ensure it's at least an empty array.
  //   foreach ($view->field as $id => $field) {
  //     // render this even if set to exclude so it can be used elsewhere.
  //     $field_output = $view->style_plugin->get_field($view->row_index, $id);
  //     $empty = $field->is_value_empty($field_output, $field->options['empty_zero']);
  //     if (empty($field->options['exclude']) && (!$empty || (empty($field->options['hide_empty']) && empty($variables['options']['hide_empty'])))) {
  //       $object = new stdClass();
  //       $object->handler = &$view->field[$id];
  //       $object->inline = !empty($variables['options']['inline'][$id]);

  //       $object->element_type = $object->handler->element_type(TRUE, !$variables['options']['default_field_elements'], $object->inline);
  //       if ($object->element_type) {
  //         $class = '';
  //         if ($object->handler->options['element_default_classes']) {
  //           $class = 'field-content';
  //         }

  //         if ($classes = $object->handler->element_classes($view->row_index)) {
  //           if ($class) {
  //             $class .= ' ';
  //           }
  //           $class .= $classes;
  //         }

  //         $pre = '<' . $object->element_type;
  //         if ($class) {
  //           $pre .= ' class="foobar ' . $class . '"';
  //         }
  //         $field_output = $pre . '>' . $field_output . '</' . $object->element_type . '>';
  //       }

  //       // Protect ourself somewhat for backward compatibility. This will prevent
  //       // old templates from producing invalid HTML when no element type is selected.
  //       if (empty($object->element_type)) {
  //         $object->element_type = 'span';
  //       }

  //       $object->content = $field_output;
  //       if (isset($view->field[$id]->field_alias) && isset($variables['row']->{$view->field[$id]->field_alias})) {
  //         $object->raw = $variables['row']->{$view->field[$id]->field_alias};
  //       }
  //       else {
  //         $object->raw = NULL; // make sure it exists to reduce NOTICE
  //       }

  //       if (!empty($variables['options']['separator']) && $previous_inline && $object->inline && $object->content) {
  //         $object->separator = filter_xss_admin($variables['options']['separator']);
  //       }

  //       $object->class = drupal_clean_css_identifier($id);

  //       $previous_inline = $object->inline;
  //       $object->inline_html = $object->handler->element_wrapper_type(TRUE, TRUE);
  //       if ($object->inline_html === '' && $variables['options']['default_field_elements']) {
  //         $object->inline_html = $object->inline ? 'span' : 'div';
  //       }

  //       // Set up the wrapper HTML.
  //       $object->wrapper_prefix = '';
  //       $object->wrapper_suffix = '';

  //       if ($object->inline_html) {
  //         $class = '';
  //         if ($object->handler->options['element_default_classes']) {
  //           $class = "views-field views-field-" . $object->class;
  //         }

  //         if ($classes = $object->handler->element_wrapper_classes($view->row_index)) {
  //           if ($class) {
  //             $class .= ' ';
  //           }
  //           $class .= $classes;
  //         }

  //         $object->wrapper_prefix = '<' . $object->inline_html;
  //         if ($class) {
  //           $object->wrapper_prefix .= ' class="' . $class . '"';
  //         }
  //         $object->wrapper_prefix .= '>';
  //         $object->wrapper_suffix = '</' . $object->inline_html . '>';
  //       }

  //       // Set up the label for the value and the HTML to make it easier
  //       // on the template.
  //       $object->label = check_plain($view->field[$id]->label());
  //       $object->label_html = '';
  //       if ($object->label) {
  //         $object->label_html .= $object->label;
  //         if ($object->handler->options['element_label_colon']) {
  //           $object->label_html .= ': ';
  //         }

  //         $object->element_label_type = $object->handler->element_label_type(TRUE, !$variables['options']['default_field_elements']);
  //         if ($object->element_label_type) {
  //           $class = '';
  //           if ($object->handler->options['element_default_classes']) {
  //             $class = 'views-label views-label-' . $object->class;
  //           }

  //           $element_label_class = $object->handler->element_label_classes($view->row_index);
  //           if ($element_label_class) {
  //             if ($class) {
  //               $class .= ' ';
  //             }

  //             $class .= $element_label_class;
  //           }

  //           $pre = '<' . $object->element_label_type;
  //           if ($class) {
  //             $pre .= ' class="' . $class . '"';
  //           }
  //           $pre .= '>';

  //           $object->label_html = $pre . $object->label_html . '</' . $object->element_label_type . '>';
  //         }
  //       }

  //       $variables['fields'][$id] = $object;
  //     }
  //   }
  // }
  // we need to build out a custom google maps url based on the long & lat of the address
  // then add it to the view's variables
  if ($variables['view']->name == 'city_hall_contact') {
    if (isset($variables['view']->result) && isset($variables['view']->result['0']->field_field_building_location)) {
      $loc = $variables['view']->result['0']->field_field_building_location['0']['raw'];
      $variables['map_link'] = 'http://maps.google.com/maps?&z=15&mrt=yp&t=m&q=';
      $variables['map_link'] .= $loc['latitude'].'+'.$loc['longitude'];
    }
  }
}

function somerville_preprocess_views_view_calendar(&$variables, $hook) {

  if($variables['view']->current_display == 'page_3' || $variables['view']->current_display == 'page_2') {

    // the subhead to display date and categories selected
    $date = strtotime('today');
    if($variables['view']->current_display == 'page_3' && isset($variables['view']->args[0])) {
      $date = strtotime($variables['view']->args[0]);
    }
    $date = date('F j\, Y', $date);

    $cat = 'All';
    if(is_numeric($variables['view']->exposed_raw_input['field_event_department_target_id'])) {
      $nid = $variables['view']->exposed_raw_input['field_event_department_target_id'];
      $term = node_load($nid);
      $cat = $term->title;
    }

    $subhead = '<h3 class="ng-binding">'.$cat.' Upcoming Events, Starting on '.$date.'</h3>';
    $variables['subhead'] = $subhead;

  }

}

function somerville_preprocess_calendar_datebox(&$variables) {
  //add an active class on the date picker active day
  $url = $variables['url']; // The (absolute) URL of the item.
  $current = url(request_path(), array('absolute' => true)); // The absolute URL of the page being viewed.
  if ($url == $current) {
    $classes = explode(' ', $variables['class']); // Extract the current classes as a list.
    $classes[] = 'active'; // Add 'active' to the class list.
    $variables['class'] = implode(' ', $classes); // Concatenate and attach the updated class list.
  }

}

function somerville_preprocess_views_view_unformatted(&$variables) {

  // Insert newsletter signup block
  if($variables['view']->name == 'calendar' && ($variables['view']->current_display == 'page_3' || $variables['view']->current_display == 'page_2')) {
    $newsletter_block = module_invoke('block', 'block_view', '3');
    $newsletter_block = array('' => $newsletter_block['content']);

    $result_start = array_slice($variables['rows'], 0, 5);
    $result_end = array_slice($variables['rows'], 5);

    $variables['rows'] = array_merge($result_start, $newsletter_block, $result_end);
  }

}

function somerville_preprocess_block(&$variables) {

  // contextually set the heading level of block titles
  $variables['h'] = 'h2'; // default
  if(strpos($variables['elements']['#block']->region, 'sidebar') !== false) {
    $variables['h'] = 'h4';
  }

  $variables['title_attributes_array']['class'] = 'block-title';

  //add some classes and an ID to blocks for themeing.
  $variables['attributes_array']['id'] = $variables['block_html_id'];
  $variables['classes_array'][] = $variables['block_html_id'];
  $variables['classes_array'][] = 'block-region-'.$variables['elements']['#block']->region;
  if(property_exists($variables['elements']['#block'], 'context')) {
    $variables['classes_array'][] = 'block-context-'.$variables['elements']['#block']->context;
  }

  //add some markup to the exposed filter blocks for themeing
    if(strpos($variables['elements']['#block']->delta, '-exp') !== false) {
    $variables['block']->subject = '<span class="heading-decorated__inner">'.$variables['block']->subject.'</span>';
  }

}
