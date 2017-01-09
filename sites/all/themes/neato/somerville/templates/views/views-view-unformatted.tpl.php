<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

//debug_template_start(__FILE__, $theme_hook_suggestions);
?>

<?php foreach ($rows as $id => $row): ?>
  <article<?php if (array_key_exists($id, $classes_array)) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </article>
<?php endforeach; ?>
<?php //debug_template_end(__FILE__); ?>
