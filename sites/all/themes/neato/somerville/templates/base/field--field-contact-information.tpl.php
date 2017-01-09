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
// die('<pre>' . print_r($rows['0'], 1) . '</pre>');
//debug_template_start(__FILE__, $theme_hook_suggestions);
?>
<?php if ($rows['0']['field_contact_collection_name']): ?>
  <section class="contact-sb__names">
    <b><?php print render($rows['0']['field_contact_collection_name']); ?></b><br />
    <?php print render($rows['0']['field_contact_collection_title']); ?>
  </section>
<?php endif; ?>
<?php if ($rows['0']['field_contact_collection_hours']): ?>
  <section class="contact-sb__hours">
    <h3>Hours</h3>
    <?php print render($rows['0']['field_contact_collection_hours']); ?>
  </section>
<?php endif; ?>
<?php if ($rows['0']['field_contact_collection_phone']): ?>
  <section class="contact-sb__phones">
    <h3>Phone</h3>
    <?php print render($rows['0']['field_contact_collection_phone']); ?>
    <?php if ($rows['0']['field_contact_collection_ext']): ?>
      &nbsp;ext&nbsp;<?php print render($rows['0']['field_contact_collection_ext']); ?>
    <?php endif; ?>
    <?php if ($rows['0']['field_contact_collection_fax']): ?>
      <br />
      FAX: <?php print render($rows['0']['field_contact_collection_fax']); ?>
    <?php endif; ?>
  </section>
<?php endif; ?>
<?php if ($rows['0']['field_contact_collection_email']): ?>
  <section class="contact-sb__emails">
    <h3>Email</h3>
    <a href="mailto:<?php print render($rows['0']['field_contact_collection_email']); ?>">
      <?php print render($rows['0']['field_contact_collection_email']); ?>
    </a>
  </section>
<?php endif; ?>
<?php if ($rows['0']['field_contact_collection_address']): ?>
  <section>
    <h3>Address</h3>
    <p><?php print render($rows['0']['field_contact_collection_address']['name']); ?><br />
    <?php print render($rows['0']['field_contact_collection_address']['street']); ?><br />
    <?php if ($rows['0']['field_contact_collection_address']['additional'] != ''): ?>
      <?php print render($rows['0']['field_contact_collection_address']['additional']); ?><br />
    <?php endif ?>
    <?php print render($rows['0']['field_contact_collection_address']['city']); ?>,
    <?php print render($rows['0']['field_contact_collection_address']['province']); ?> 
    <?php print render($rows['0']['field_contact_collection_address']['postal_code']); ?></p>
    <div class="contact-sb__map-link map-link">
      <a href="http://maps.google.com/maps?&z=15&mrt=yp&t=m&q=<?php print render($rows['0']['field_contact_collection_address']['latitude']); ?>+<?php print render($rows['0']['field_contact_collection_address']['longitude']); ?>" target="_blank">
        <svg class="map-link__map-icon">
          <use xmlns:xlink="http://www.w3.org/1999/xlink" xlink:href="sites/all/themes/neato/somerville/img/svg-sprite.svg#map"></use>
        </svg>
      </a>
      <a class="map-link__link cta-primary"
         href="http://maps.google.com/maps?&z=15&mrt=yp&t=m&q=<?php print render($rows['0']['field_contact_collection_address']['latitude']); ?>+<?php print render($rows['0']['field_contact_collection_address']['longitude']); ?>"
         target="_blank">
        <?php print render(t('View Map')); ?>
      </a>
    </div>
  </section>
<?php endif ?>
