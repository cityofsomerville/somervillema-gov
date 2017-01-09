<?php
/**
 * @file
 * somv_event_landing_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function somv_event_landing_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_landing';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'calendar:page_1' => 'calendar:page_1',
        'calendar:page_2' => 'calendar:page_2',
        'calendar:page_3' => 'calendar:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-calendar-page_2' => array(
          'module' => 'views',
          'delta' => '-exp-calendar-page_2',
          'region' => 'content_wrapper',
          'weight' => '-10',
        ),
        'views-calendar-block_2' => array(
          'module' => 'views',
          'delta' => 'calendar-block_2',
          'region' => 'page_header',
          'weight' => '-10',
        ),
        'bean-add-your-event' => array(
          'module' => 'bean',
          'delta' => 'add-your-event',
          'region' => 'sidebar_left_25',
          'weight' => '-10',
        ),
        'views--exp-calendar-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-calendar-page_1',
          'region' => 'sidebar_left_25',
          'weight' => '-9',
        ),
        'views-calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'calendar-block_1',
          'region' => 'sidebar_left_25',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['events_landing'] = $context;

  return $export;
}
