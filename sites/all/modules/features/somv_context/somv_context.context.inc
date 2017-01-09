<?php
/**
 * @file
 * somv_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function somv_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'admin-tools';
  $context->description = 'Displays Context Admin Data';
  $context->tag = 'admin';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'context_ui-devel' => array(
          'module' => 'context_ui',
          'delta' => 'devel',
          'region' => 'sub_header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays Context Admin Data');
  t('admin');
  $export['admin-tools'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact-us';
  $context->description = 'Contact Us Page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact-us-landing' => 'contact-us-landing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-city_hall_contact-block' => array(
          'module' => 'views',
          'delta' => 'city_hall_contact-block',
          'region' => 'content_above_75',
          'weight' => '-10',
        ),
        'webform-client-block-95' => array(
          'module' => 'webform',
          'delta' => 'client-block-95',
          'region' => 'page_bottom_100',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us Page');
  t('page');
  $export['contact-us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'departments_landing';
  $context->description = 'Departments Landing Page';
  $context->tag = 'view';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'departments' => 'departments',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-top-departments' => array(
          'module' => 'bean',
          'delta' => 'top-departments',
          'region' => 'sidebar_25',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Departments Landing Page');
  t('view');
  $export['departments_landing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_detail';
  $context->description = 'Events Detail';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events/*' => 'events/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_4' => array(
          'module' => 'views',
          'delta' => 'events-block_4',
          'region' => 'page_bottom_100',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events Detail');
  t('page');
  $export['event_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'feedback';
  $context->description = 'Site-wide feedback block';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-website-feedback' => array(
          'module' => 'bean',
          'delta' => 'website-feedback',
          'region' => 'block_feedback',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site-wide feedback block');
  t('page');
  $export['feedback'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'The Homepage Layout';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-homepage-status-bar' => array(
          'module' => 'bean',
          'delta' => 'homepage-status-bar',
          'region' => 'sub_header',
          'weight' => '-10',
        ),
        'views-gallery-block' => array(
          'module' => 'views',
          'delta' => 'gallery-block',
          'region' => 'page_bottom_100',
          'weight' => '-10',
        ),
        'views-city_hall_contact-block_1' => array(
          'module' => 'views',
          'delta' => 'city_hall_contact-block_1',
          'region' => 'page_bottom_100',
          'weight' => '-9',
        ),
        'views-city_updates-block_2' => array(
          'module' => 'views',
          'delta' => 'city_updates-block_2',
          'region' => 'home_top_right_50',
          'weight' => '-17',
        ),
        'views-city_updates-block_1' => array(
          'module' => 'views',
          'delta' => 'city_updates-block_1',
          'region' => 'home_top_right_50',
          'weight' => '-16',
        ),
        'bean-key-services-homepage' => array(
          'module' => 'bean',
          'delta' => 'key-services-homepage',
          'region' => 'home_top_left_50',
          'weight' => '-10',
        ),
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'home_mid_right_50',
          'weight' => '-10',
        ),
        'views-events-block_2' => array(
          'module' => 'views',
          'delta' => 'events-block_2',
          'region' => 'home_mid_right_50',
          'weight' => '-9',
        ),
        'views-programs_initiatives-block_1' => array(
          'module' => 'views',
          'delta' => 'programs_initiatives-block_1',
          'region' => 'home_mid_left_50',
          'weight' => '-10',
        ),
        'somv_enews_signup-somv_enews_signup' => array(
          'module' => 'somv_enews_signup',
          'delta' => 'somv_enews_signup',
          'region' => 'home_mid_left_50',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The Homepage Layout');
  t('page');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'my_somerville';
  $context->description = 'Residents Landing Page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'residents-landing' => 'residents-landing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-welcome-to-somerville-video' => array(
          'module' => 'bean',
          'delta' => 'welcome-to-somerville-video',
          'region' => 'page_left_50',
          'weight' => '-10',
        ),
        'somv_resident_address-somv_resident_address_search' => array(
          'module' => 'somv_resident_address',
          'delta' => 'somv_resident_address_search',
          'region' => 'page_left_50',
          'weight' => '-9',
        ),
        'bean-welcome-kit' => array(
          'module' => 'bean',
          'delta' => 'welcome-kit',
          'region' => 'page_right_50',
          'weight' => '-10',
        ),
        'bean-sign-up-for-alerts' => array(
          'module' => 'bean',
          'delta' => 'sign-up-for-alerts',
          'region' => 'page_right_50',
          'weight' => '-9',
        ),
        'somv_enews_signup-somv_enews_signup_with_body' => array(
          'module' => 'somv_enews_signup',
          'delta' => 'somv_enews_signup_with_body',
          'region' => 'page_bottom_100',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Residents Landing Page');
  t('page');
  $export['my_somerville'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'org_unit_detail';
  $context->description = 'Organizational Unit Detail Page';
  $context->tag = 'page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'organizational_unit' => 'organizational_unit',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'departments/*' => 'departments/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_3' => array(
          'module' => 'views',
          'delta' => 'events-block_3',
          'region' => 'content_below_75',
          'weight' => '-10',
        ),
        'views-programs_initiatives-block_2' => array(
          'module' => 'views',
          'delta' => 'programs_initiatives-block_2',
          'region' => 'content_below_75',
          'weight' => '-9',
        ),
        'views-city_updates-block_3' => array(
          'module' => 'views',
          'delta' => 'city_updates-block_3',
          'region' => 'content_below_75',
          'weight' => '-8',
        ),
        'views-departments_listing_ul-block_1' => array(
          'module' => 'views',
          'delta' => 'departments_listing_ul-block_1',
          'region' => 'sidebar_25',
          'weight' => '-10',
        ),
        'bean-filtered-links' => array(
          'module' => 'bean',
          'delta' => 'filtered-links',
          'region' => 'sidebar_25',
          'weight' => '-9',
        ),
        'views-departments_listing_ul-block_2' => array(
          'module' => 'views',
          'delta' => 'departments_listing_ul-block_2',
          'region' => 'sidebar_25',
          'weight' => '-8',
        ),
        'bean-somerville-social-stream' => array(
          'module' => 'bean',
          'delta' => 'somerville-social-stream',
          'region' => 'sidebar_25',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Organizational Unit Detail Page');
  t('page');
  $export['org_unit_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pay_online';
  $context->description = 'Pay Online Page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pay-online' => 'pay-online',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-key-services-homepage' => array(
          'module' => 'bean',
          'delta' => 'key-services-homepage',
          'region' => 'content_main_75',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pay Online Page');
  t('page');
  $export['pay_online'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resident_address';
  $context->description = 'Resident Address Lookup';
  $context->tag = 'view';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resident-address-lookup/search' => 'resident-address-lookup/search',
        'mysomerville/search' => 'mysomerville/search',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resident Address Lookup');
  t('view');
  $export['resident_address'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resident_address_landing';
  $context->description = 'Resident Address Lookup Landing Page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resident-address-lookup' => 'resident-address-lookup',
        'mysomerville' => 'mysomerville',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'somv_resident_address-somv_resident_address_search' => array(
          'module' => 'somv_resident_address',
          'delta' => 'somv_resident_address_search',
          'region' => 'page_top_100',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Resident Address Lookup Landing Page');
  t('page');
  $export['resident_address_landing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'services_311_landing';
  $context->description = 'Services 311 Landing Page';
  $context->tag = 'page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        311 => '311',
        'services-311-landing' => 'services-311-landing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-311-landing-header-block' => array(
          'module' => 'bean',
          'delta' => '311-landing-header-block',
          'region' => 'page_top_100',
          'weight' => '-10',
        ),
        'bean-311-landing-submit-a-request' => array(
          'module' => 'bean',
          'delta' => '311-landing-submit-a-request',
          'region' => 'page_left_50',
          'weight' => '-10',
        ),
        'views-services_common_requests-block' => array(
          'module' => 'views',
          'delta' => 'services_common_requests-block',
          'region' => 'page_left_50',
          'weight' => '-9',
        ),
        'bean-311-landing-get-answers' => array(
          'module' => 'bean',
          'delta' => '311-landing-get-answers',
          'region' => 'page_right_50',
          'weight' => '-10',
        ),
        'views-faqs_common_requests-block' => array(
          'module' => 'views',
          'delta' => 'faqs_common_requests-block',
          'region' => 'page_right_50',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Services 311 Landing Page');
  t('page');
  $export['services_311_landing'] = $context;

  return $export;
}
