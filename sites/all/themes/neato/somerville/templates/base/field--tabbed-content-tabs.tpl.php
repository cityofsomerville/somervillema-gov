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
<?php if (!empty($rows)): ?>
<section>
  <ul class="tabbed-content__tabs">
    <?php foreach ($rows as $key => $row): ?>
    <li class="tabbed-content__tab" ng-class="{active:tab.isSelected(<?php print $key; ?>)}" ng-click="tab.selectTab(<?php print $key; ?>)" tabindex="<?php print $key + 1; ?>">
      <?php if (isset($row['field_tabbed_tab_image'])): ?>
        <style type="text/css">
          .tab-image-<?php print $key; ?> {
            background-image: url("<?php print file_create_url($row['field_tabbed_tab_image']['uri']); ?>");
          }
        </style>
        <div class="tabbed-content__tab-image tab-image-<?php print $key; ?>"></div>
      <?php else: ?>
        <svg class="tabbed-content__tab-icon"><use xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print $row['field_tabbed_tab_icon']; ?>"></use></svg>
      <?php endif ?>
      <h3><?php print $row['field_tabbed_tab_title'] ?></h3>
    </li>
    <?php endforeach ?>
  </ul>
</section>

<section class="tabbed-content__panels">
<?php foreach ($rows as $key => $row): ?>
  <div class="tabbed-content__panel js-accordion-module" ng-show="tab.isSelected(<?php print $key; ?>)">
    <?php if (isset($row['field_tabbed_tab_image'])): ?>
      <style type="text/css">
        .tab-image-<?php print $key; ?> {
          background-image: url("<?php print file_create_url($row['field_tabbed_tab_image']['uri']); ?>");
        }
      </style>
      <div class="tabbed-content__tab-image tab-image-<?php print $key; ?>"></div>
    <?php else: ?>
      <svg class="tabbed-content__tab-icon"><use xlink:href="/sites/all/themes/neato/somerville/img/svg-sprite.svg#<?php print $row['field_tabbed_tab_icon']; ?>"></use></svg>
    <?php endif ?>
    <h3 class="accordion-link js-accordion-link"><?php print $row['field_tabbed_tab_title'] ?></h3>
    <div class="accordion-content js-accordion-content">
    <!-- TODO - Need to move the view format logic to template.php -->
    <?php if (isset($row['field_tabbed_tab_content']['format']) && $row['field_tabbed_tab_content']['format'] == 'full_html_view_embed'): ?>
      <?php print _insert_view_substitute_tags($row['field_tabbed_tab_content']['value'], $row['field_tabbed_tab_content']['format']); ?>
    <?php else: ?>
      <?php print render($row['field_tabbed_tab_content']['safe_value']); ?>
    <?php endif ?>
    </div>
  </div>
<?php endforeach ?>
</section>
<?php endif ?>