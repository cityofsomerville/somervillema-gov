<?php
/**
 * @file
 * nt_gss_search_filter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nt_gss_search_filter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
