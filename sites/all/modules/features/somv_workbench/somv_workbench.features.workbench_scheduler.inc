<?php
/**
 * @file
 * somv_workbench.features.workbench_scheduler.inc
 */

/**
 * Implements hook_workbench_scheduler_export_schedules().
 */
function somv_workbench_workbench_scheduler_export_schedules() {
  $items = array(
    'publish_content' => array(
      'name' => 'publish_content',
      'label' => 'Publish Content',
      'start_state' => 'published',
      'end_state' => '',
      'types' => array(
        0 => 'animal',
        1 => 'event',
        2 => 'faq',
        3 => 'gallery',
        4 => 'job_posting',
        5 => 'news',
        6 => 'official',
        7 => 'organizational_unit',
        8 => 'page',
        9 => 'programs_initiatives',
        10 => 'reports_and_decisions',
      ),
    ),
    'publish_content_with_end_' => array(
      'name' => 'publish_content_with_end_',
      'label' => 'Publish Content With End Date',
      'start_state' => 'published',
      'end_state' => 'unpublished',
      'types' => array(
        0 => 'animal',
        1 => 'event',
        2 => 'faq',
        3 => 'gallery',
        4 => 'job_posting',
        5 => 'news',
        6 => 'official',
        7 => 'organizational_unit',
        8 => 'page',
        9 => 'programs_initiatives',
        10 => 'reports_and_decisions',
      ),
    ),
    'unpublish_content' => array(
      'name' => 'unpublish_content',
      'label' => 'Unpublish Content',
      'start_state' => 'unpublished',
      'end_state' => '',
      'types' => array(
        0 => 'animal',
        1 => 'event',
        2 => 'faq',
        3 => 'gallery',
        4 => 'job_posting',
        5 => 'news',
        6 => 'official',
        7 => 'organizational_unit',
        8 => 'page',
        9 => 'programs_initiatives',
        10 => 'reports_and_decisions',
      ),
    ),
  );
  return $items;
}
