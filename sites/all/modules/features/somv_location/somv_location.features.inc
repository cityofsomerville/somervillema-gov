<?php
/**
 * @file
 * somv_location.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function somv_location_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
