<?php

/**
 * @file
 * Default theme implementation for entities.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
// die('<pre>' . print_r($rows, 1) . '</pre>');
//debug_template_start(__FILE__, $theme_hook_suggestions);
?>

<?php if (count($rows) > 0 && $rows['0']['field_top_links_link_title'] != ''): ?>
  <?php foreach ($rows as $key => $row): ?>
  <li class="related-links--item">
    <a href="<?php print $row['field_top_links_link_url']; ?>"><?php print $row['field_top_links_link_title']; ?></a>
  </li>
  <?php endforeach ?>
<?php endif ?>
