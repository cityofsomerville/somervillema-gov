<?php
/**
 * @file
 * somv_bean_types.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function somv_bean_types_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'bean_webform_block';
  $bean_type->label = 'Webform Block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['bean_webform_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'cross_promotion_component';
  $bean_type->label = 'Cross Promotion Component';
  $bean_type->options = '';
  $bean_type->description = 'Cross promotional content used in page sidebars.';
  $export['cross_promotion_component'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'faq_common_block';
  $bean_type->label = 'FAQs Common Requests';
  $bean_type->options = '';
  $bean_type->description = 'Listing of the top 6 FAQs';
  $export['faq_common_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'filtered_link_box';
  $bean_type->label = 'Filtered Link Box';
  $bean_type->options = '';
  $bean_type->description = 'Link box to filtered views';
  $export['filtered_link_box'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'homepage_status_bar';
  $bean_type->label = 'Homepage Status Bar';
  $bean_type->options = '';
  $bean_type->description = 'City Services Status Bar';
  $export['homepage_status_bar'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'html_block';
  $bean_type->label = 'HTML Block';
  $bean_type->options = '';
  $bean_type->description = 'Raw HTML';
  $export['html_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'key_services';
  $bean_type->label = 'Key Services';
  $bean_type->options = '';
  $bean_type->description = 'Links with Icons to key services';
  $export['key_services'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'key_services_item';
  $bean_type->label = 'Key Services Item';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['key_services_item'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'page_alert';
  $bean_type->label = 'Page Alert';
  $bean_type->options = '';
  $bean_type->description = 'Sub page alerts.';
  $export['page_alert'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'services_common_requests_block';
  $bean_type->label = 'Services Common Requests Block';
  $bean_type->options = '';
  $bean_type->description = 'Listing of the top 6 common services manually selected by Admin';
  $export['services_common_requests_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'top_links';
  $bean_type->label = 'Top Links';
  $bean_type->options = '';
  $bean_type->description = 'Sidebar block containing a list of links. Used for editorially listing pages (e.g. Top Departments, Top Searches, etc.)';
  $export['top_links'] = $bean_type;

  return $export;
}
