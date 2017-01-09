<?php
/**
 * @file
 * somv_context.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function somv_context_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_organizational_unit';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.8',
  );
  $export['xmlsitemap_settings_node_organizational_unit'] = $strongarm;

  return $export;
}
