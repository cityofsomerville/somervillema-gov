<?php
/**
 * @file
 * Default theme implementation for beans.
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
?>

<?php
  if ( arg(0) == 'node' && is_numeric(arg(1)) && ! arg(2) ) {
    $node = node_load(arg(1));
    $nid = $node->nid;
    $faqquery = new EntityFieldQuery();
    $faqquery->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'faq')
    ->propertyCondition('status', 1)
    ->fieldCondition('field_faq_department', 'target_id', $nid)
    ->range(0, 10);
    $faqresult = $faqquery->execute();

    $docquery = new EntityFieldQuery();
    $docquery->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'document')
    ->propertyCondition('status', 1)
    ->fieldCondition('field_doc_department', 'target_id', $nid)
    ->range(0, 10);
    $docresult = $docquery->execute();

    $jobquery = new EntityFieldQuery();
    $jobquery->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'job_posting')
    ->propertyCondition('status', 1)
    ->fieldCondition('field_department', 'target_id', $nid)
    ->range(0, 10);
    $jobresult = $jobquery->execute();
  }
?>
<?php if (!empty($faqresult) || !empty($docresult) || !empty($jobresult)):?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content "<?php print $content_attributes; ?>>
    <ul class="org-resources">
  <?php if ($faqresult):?>
  <li class="org-resources-item">
    <a href="/faq/<?php print $nid; ?>" target="_blank">
      <i class="fa fa-question-circle" aria-hidden="true"></i>FAQs
    </a></li>
  <?php endif; ?>
  <?php if ($docresult):?>
  <li class="org-resources-item">
    <a href="/documents/<?php print $nid; ?>" target="_blank">
      <i class="fa fa-file-text" aria-hidden="true"></i>Forms &amp; Information
    </a>
  </li>
  <?php endif; ?>
  <?php if ($jobresult):?>
  <li class="org-resources-item">
    <a href="/jobs/<?php print $nid; ?>" target="_blank">
      <i class="fa fa-briefcase" aria-hidden="true"></i>Job Postings
    </a>
  </li>
  <?php endif; ?>
    </ul>
  </div>
</div>
<?php else: ?>
    <span class="empty"></span>
<?php endif; ?>
