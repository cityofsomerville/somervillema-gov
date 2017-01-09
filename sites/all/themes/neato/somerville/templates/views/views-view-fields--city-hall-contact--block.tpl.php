<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
//dpm($view);
//die('<pre>' . print_r( $map_link, 1) . '</pre>');
// dpm(get_defined_vars());
//$location = $row['field_field_building_location'];
?>

<section class="component hours-address">
  <?php //class options "is-open" or "is-closed" ?>
  <h2 class="heading-decorated is-open">
    <?php if ($is_front): ?>
      <span class='heading-decorated__inner'>
    <?php endif; ?>
      <?php print render($fields['title']->raw); ?> Hours &amp; Address&nbsp;
    <?php if ($is_front): ?>
      </span>
    <?php endif; ?>
  </h2>
  <div class="hours-address__tip">
    Contact 311 (Open 24/7)
  </div>
  <div class="hours-address__read-more"><a href="/services-by-topic" class="cta-primary">See All City Services</a></div>
  <div class="columns">
    <div class="column column--50">
      <section class="hours-address__hours">
        <h3>Hours</h3>
        <?php print render($fields['field_building_hours']->content); ?>
        <h3>Off Hours</h3>
        <?php print render($fields['field_building_off_hours']->content); ?>
      </section>
    </div>
    <div class="column column--50">
      <section class="hours-address__address js-linkable-component">
        <a href="<?php print $map_link; ?>#"  target="_blank" class="js-linkable-link">
          <h3>Address</h3>
          <p><?php print render($fields['address']->content); ?><br /></p>
        </a>
      </section>
    </div>
  </div>
</section>
