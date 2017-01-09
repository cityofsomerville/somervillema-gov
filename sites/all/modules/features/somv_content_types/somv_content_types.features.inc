<?php
/**
 * @file
 * somv_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function somv_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function somv_content_types_node_info() {
  $items = array(
    'animal' => array(
      'name' => t('Animal'),
      'base' => 'node_content',
      'description' => t('Lost & Found Animal Listings'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bid_posting' => array(
      'name' => t('Bid Posting'),
      'base' => 'node_content',
      'description' => t('City Bid Postings'),
      'has_title' => '1',
      'title_label' => t('Bid Title'),
      'help' => '',
    ),
    'building' => array(
      'name' => t('Building'),
      'base' => 'node_content',
      'description' => t('City Government Buildings'),
      'has_title' => '1',
      'title_label' => t('Building Name'),
      'help' => '',
    ),
    'commercial_real_estate' => array(
      'name' => t('Commercial Real Estate'),
      'base' => 'node_content',
      'description' => t('Property listing for SiteFinder tool.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'elections_finance_report' => array(
      'name' => t('Elections Finance Report'),
      'base' => 'node_content',
      'description' => t('A listing of candidate finance reports for the Elections Department'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('City of Somerville Events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event_doc' => array(
      'name' => t('Event Document'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('Frequently Asked Questions'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('Photo & Video Gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hpc_case' => array(
      'name' => t('HPC Case'),
      'base' => 'node_content',
      'description' => t('Historic Preservation Commission Case'),
      'has_title' => '1',
      'title_label' => t('Case Number'),
      'help' => '',
    ),
    'job_posting' => array(
      'name' => t('Job Posting'),
      'base' => 'node_content',
      'description' => t('Somerville City job posting'),
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News articles and Press Releases.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'official' => array(
      'name' => t('Official'),
      'base' => 'node_content',
      'description' => t('City Officials - Alderman, School Committee Member, Constable, State Representative, State Senator'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
    'organizational_unit' => array(
      'name' => t('Organizational Unit'),
      'base' => 'node_content',
      'description' => t('Citywide content type: Organizational Unit'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'people' => array(
      'name' => t('People'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'programs_initiatives' => array(
      'name' => t('Programs & Initiatives'),
      'base' => 'node_content',
      'description' => t('City Programs & Initiatives'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reports_and_decisions' => array(
      'name' => t('Reports And Decisions'),
      'base' => 'node_content',
      'description' => t('City Reports And Decisions'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resident_address' => array(
      'name' => t('Resident Address'),
      'base' => 'node_content',
      'description' => t('Address information used for Resident Address Lookup.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'street_sweeping_section' => array(
      'name' => t('Street Sweeping Section'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'trash_pickup_section' => array(
      'name' => t('Trash Pickup Section'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
