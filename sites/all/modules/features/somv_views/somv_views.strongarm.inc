<?php
/**
 * @file
 * somv_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function somv_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_month_day';
  $strongarm->value = 'M d';
  $export['date_format_month_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short_date';
  $strongarm->value = 'j';
  $export['date_format_short_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short_month';
  $strongarm->value = 'M';
  $export['date_format_short_month'] = $strongarm;

  return $export;
}
