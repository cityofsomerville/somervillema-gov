<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */

//debug_template_start(__FILE__, $theme_hook_suggestions);
// dpm($class);
$class_arr = explode(' ', $class);
// dpm($class_arr);
?>
<?php //echo '<textarea>' . print_r($view, 1) . '</textarea>'; ?>
<?php //  dpm(get_defined_vars()); ?>

<?php 
  $view = views_get_current_view();
  $viewname = $view->name;
  $hasMore = (count($rows) > 6 && !in_array('no-js', $class_arr)) && $viewname == 'faqs' ? true : false;
?>
<div class="<?php print $wrapper_class; ?><?php if($hasMore) : ?> has-more js-has-more<?php endif; ?> <?php if ($viewname != 'faqs'): ?> no-js<?php endif;?> ">
  <?php if (!empty($title)) : ?>
    <h3 class="link-list__group-title link-list__group-title--with-link cta-secondary"><?php print $title; ?></h3>
  <?php endif; ?>
  <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
  <?php print $list_type_suffix; ?>
  <?php if($hasMore) : ?>
    <div class="button-row">
      <a href="#" class="accordion-link button-link pull-right has-more--trigger js-has-more--trigger">
        <span class="accordion-link__more">View More</span>
        <span class="accordion-link__less">View Less</span>
      </a>
    </div>
  <?php endif; ?>
<?php print $wrapper_suffix; ?>
<?php //debug_template_end(__FILE__); ?>
