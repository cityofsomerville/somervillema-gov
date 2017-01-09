<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */

// dpm($class);
$class_arr = explode(' ', $class);
?>

<div class="<?php print $wrapper_class; ?>">
  <?php if (!empty($title)) : ?>
    <h3 class="link-list__group-title link-list__group-title--with-link cta-secondary"><?php print $title; ?></h3>
    <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
    <?php print $list_type_suffix; ?>
    <div class="button-row">
      <a href="#" class="accordion-link button-link pull-right has-more--trigger js-has-more--trigger">
        <span class="accordion-link__more">View More</span>
        <span class="accordion-link__less">View Less</span>
      </a>
    </div>
  <?php else: ?>
    <?php foreach ($rows as $id => $row): ?>
      <span class="link-list__group-title link-list__group-title--with-link cta-secondary">
        <?php print $row; ?>
      </span>
    <?php endforeach; ?>
  <?php endif; ?>