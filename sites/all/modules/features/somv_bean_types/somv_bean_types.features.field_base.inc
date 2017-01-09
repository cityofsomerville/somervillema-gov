<?php
/**
 * @file
 * somv_bean_types.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function somv_bean_types_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_bean_webform'.
  $field_bases['field_bean_webform'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bean_webform',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'webform' => 'webform',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_block_common_services'.
  $field_bases['field_block_common_services'] = array(
    'active' => 1,
    'cardinality' => 6,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_common_services',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'organizational_unit' => 'organizational_unit',
          'page' => 'page',
          'programs_initiatives' => 'programs_initiatives',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_block_services_icon'.
  $field_bases['field_block_services_icon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_icon',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'android-os' => 'Android Logo',
        'apple-os' => 'Apple Logo',
        'backpack' => 'Backpack',
        'badge' => 'Badge',
        'bar-chart' => 'Bar Chart',
        'calendar' => 'Calendar',
        'check-mark-3' => 'Check Mark',
        'cone13' => 'Cone',
        'credit-card' => 'Credit Card',
        'external-link' => 'External Link',
        'facebook' => 'Facebook',
        'flickr' => 'Flickr',
        'gear' => 'Gear',
        'globe' => 'Globe',
        'help' => 'Help',
        'home' => 'Home',
        'magnifier' => 'Magnifier',
        'map' => 'Map',
        'menu' => 'Menu (Hamburger)',
        'note' => 'Note',
        'phone' => 'Phone',
        'redo' => 'Redo',
        'snowflake' => 'Snowflake',
        'streetsweeping-icon' => 'Street Sweeping',
        'threeoneone' => 311,
        'trash-can' => 'Trash Can',
        'tv' => 'TV',
        'twitter' => 'Twitter',
        'user' => 'User',
        'video-play' => 'Video Play',
        'warning' => 'Warning',
        'wheelchair' => 'Wheelchair',
        'x-mark-3' => 'X Mark',
        'youtube' => 'YouTube Logo',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_block_services_icon_2'.
  $field_bases['field_block_services_icon_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_icon_2',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'android-os' => 'Android Logo',
        'apple-os' => 'Apple Logo',
        'backpack' => 'Backpack',
        'badge' => 'Badge',
        'bar-chart' => 'Bar Chart',
        'calendar' => 'Calendar',
        'check-mark-3' => 'Check Mark',
        'cone13' => 'Cone',
        'credit-card' => 'Credit Card',
        'external-link' => 'External Link',
        'facebook' => 'Facebook',
        'flickr' => 'Flickr',
        'gear' => 'Gear',
        'globe' => 'Globe',
        'help' => 'Help',
        'home' => 'Home',
        'magnifier' => 'Magnifier',
        'map' => 'Map',
        'menu' => 'Menu (Hamburger)',
        'note' => 'Note',
        'phone' => 'Phone',
        'redo' => 'Redo',
        'snowflake' => 'Snowflake',
        'streetsweeping-icon' => 'Street Sweeping',
        'threeoneone' => 311,
        'trash-can' => 'Trash Can',
        'tv' => 'TV',
        'twitter' => 'Twitter',
        'user' => 'User',
        'video-play' => 'Video Play',
        'warning' => 'Warning',
        'wheelchair' => 'Wheelchair',
        'x-mark-3' => 'X Mark',
        'youtube' => 'YouTube Logo',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_block_services_icon_3'.
  $field_bases['field_block_services_icon_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_icon_3',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'android-os' => 'Android Logo',
        'apple-os' => 'Apple Logo',
        'backpack' => 'Backpack',
        'badge' => 'Badge',
        'bar-chart' => 'Bar Chart',
        'calendar' => 'Calendar',
        'check-mark-3' => 'Check Mark',
        'cone13' => 'Cone',
        'credit-card' => 'Credit Card',
        'external-link' => 'External Link',
        'facebook' => 'Facebook',
        'flickr' => 'Flickr',
        'gear' => 'Gear',
        'globe' => 'Globe',
        'help' => 'Help',
        'home' => 'Home',
        'magnifier' => 'Magnifier',
        'map' => 'Map',
        'menu' => 'Menu (Hamburger)',
        'note' => 'Note',
        'phone' => 'Phone',
        'redo' => 'Redo',
        'snowflake' => 'Snowflake',
        'streetsweeping-icon' => 'Street Sweeping',
        'threeoneone' => 311,
        'trash-can' => 'Trash Can',
        'tv' => 'TV',
        'twitter' => 'Twitter',
        'user' => 'User',
        'video-play' => 'Video Play',
        'warning' => 'Warning',
        'wheelchair' => 'Wheelchair',
        'x-mark-3' => 'X Mark',
        'youtube' => 'YouTube Logo',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_block_services_icon_4'.
  $field_bases['field_block_services_icon_4'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_icon_4',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'android-os' => 'Android Logo',
        'apple-os' => 'Apple Logo',
        'backpack' => 'Backpack',
        'badge' => 'Badge',
        'bar-chart' => 'Bar Chart',
        'calendar' => 'Calendar',
        'check-mark-3' => 'Check Mark',
        'cone13' => 'Cone',
        'credit-card' => 'Credit Card',
        'external-link' => 'External Link',
        'facebook' => 'Facebook',
        'flickr' => 'Flickr',
        'gear' => 'Gear',
        'globe' => 'Globe',
        'help' => 'Help',
        'home' => 'Home',
        'magnifier' => 'Magnifier',
        'map' => 'Map',
        'menu' => 'Menu (Hamburger)',
        'note' => 'Note',
        'phone' => 'Phone',
        'redo' => 'Redo',
        'snowflake' => 'Snowflake',
        'streetsweeping-icon' => 'Street Sweeping',
        'threeoneone' => 311,
        'trash-can' => 'Trash Can',
        'tv' => 'TV',
        'twitter' => 'Twitter',
        'user' => 'User',
        'video-play' => 'Video Play',
        'warning' => 'Warning',
        'wheelchair' => 'Wheelchair',
        'x-mark-3' => 'X Mark',
        'youtube' => 'YouTube Logo',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_block_services_icon_5'.
  $field_bases['field_block_services_icon_5'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_icon_5',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'android-os' => 'Android Logo',
        'apple-os' => 'Apple Logo',
        'backpack' => 'Backpack',
        'badge' => 'Badge',
        'bar-chart' => 'Bar Chart',
        'calendar' => 'Calendar',
        'check-mark-3' => 'Check Mark',
        'cone13' => 'Cone',
        'credit-card' => 'Credit Card',
        'external-link' => 'External Link',
        'facebook' => 'Facebook',
        'flickr' => 'Flickr',
        'gear' => 'Gear',
        'globe' => 'Globe',
        'help' => 'Help',
        'home' => 'Home',
        'magnifier' => 'Magnifier',
        'map' => 'Map',
        'menu' => 'Menu (Hamburger)',
        'note' => 'Note',
        'phone' => 'Phone',
        'redo' => 'Redo',
        'snowflake' => 'Snowflake',
        'streetsweeping-icon' => 'Street Sweeping',
        'threeoneone' => 311,
        'trash-can' => 'Trash Can',
        'tv' => 'TV',
        'twitter' => 'Twitter',
        'user' => 'User',
        'video-play' => 'Video Play',
        'warning' => 'Warning',
        'wheelchair' => 'Wheelchair',
        'x-mark-3' => 'X Mark',
        'youtube' => 'YouTube Logo',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_block_services_icon_6'.
  $field_bases['field_block_services_icon_6'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_icon_6',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'android-os' => 'Android Logo',
        'apple-os' => 'Apple Logo',
        'backpack' => 'Backpack',
        'badge' => 'Badge',
        'bar-chart' => 'Bar Chart',
        'calendar' => 'Calendar',
        'check-mark-3' => 'Check Mark',
        'cone13' => 'Cone',
        'credit-card' => 'Credit Card',
        'external-link' => 'External Link',
        'facebook' => 'Facebook',
        'flickr' => 'Flickr',
        'gear' => 'Gear',
        'globe' => 'Globe',
        'help' => 'Help',
        'home' => 'Home',
        'magnifier' => 'Magnifier',
        'map' => 'Map',
        'menu' => 'Menu (Hamburger)',
        'note' => 'Note',
        'phone' => 'Phone',
        'redo' => 'Redo',
        'snowflake' => 'Snowflake',
        'streetsweeping-icon' => 'Street Sweeping',
        'threeoneone' => 311,
        'trash-can' => 'Trash Can',
        'tv' => 'TV',
        'twitter' => 'Twitter',
        'user' => 'User',
        'video-play' => 'Video Play',
        'warning' => 'Warning',
        'wheelchair' => 'Wheelchair',
        'x-mark-3' => 'X Mark',
        'youtube' => 'YouTube Logo',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_block_services_icon_7'.
  $field_bases['field_block_services_icon_7'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_icon_7',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'android-os' => 'Android Logo',
        'apple-os' => 'Apple Logo',
        'backpack' => 'Backpack',
        'badge' => 'Badge',
        'bar-chart' => 'Bar Chart',
        'calendar' => 'Calendar',
        'check-mark-3' => 'Check Mark',
        'cone13' => 'Cone',
        'credit-card' => 'Credit Card',
        'external-link' => 'External Link',
        'facebook' => 'Facebook',
        'flickr' => 'Flickr',
        'gear' => 'Gear',
        'globe' => 'Globe',
        'help' => 'Help',
        'home' => 'Home',
        'magnifier' => 'Magnifier',
        'map' => 'Map',
        'menu' => 'Menu (Hamburger)',
        'note' => 'Note',
        'phone' => 'Phone',
        'redo' => 'Redo',
        'snowflake' => 'Snowflake',
        'streetsweeping-icon' => 'Street Sweeping',
        'threeoneone' => 311,
        'trash-can' => 'Trash Can',
        'tv' => 'TV',
        'twitter' => 'Twitter',
        'user' => 'User',
        'video-play' => 'Video Play',
        'warning' => 'Warning',
        'wheelchair' => 'Wheelchair',
        'x-mark-3' => 'X Mark',
        'youtube' => 'YouTube Logo',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_block_services_icon_8'.
  $field_bases['field_block_services_icon_8'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_icon_8',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'android-os' => 'Android Logo',
        'apple-os' => 'Apple Logo',
        'backpack' => 'Backpack',
        'badge' => 'Badge',
        'bar-chart' => 'Bar Chart',
        'calendar' => 'Calendar',
        'check-mark-3' => 'Check Mark',
        'cone13' => 'Cone',
        'credit-card' => 'Credit Card',
        'external-link' => 'External Link',
        'facebook' => 'Facebook',
        'flickr' => 'Flickr',
        'gear' => 'Gear',
        'globe' => 'Globe',
        'help' => 'Help',
        'home' => 'Home',
        'magnifier' => 'Magnifier',
        'map' => 'Map',
        'menu' => 'Menu (Hamburger)',
        'note' => 'Note',
        'phone' => 'Phone',
        'redo' => 'Redo',
        'snowflake' => 'Snowflake',
        'streetsweeping-icon' => 'Street Sweeping',
        'threeoneone' => 311,
        'trash-can' => 'Trash Can',
        'tv' => 'TV',
        'twitter' => 'Twitter',
        'user' => 'User',
        'video-play' => 'Video Play',
        'warning' => 'Warning',
        'wheelchair' => 'Wheelchair',
        'x-mark-3' => 'X Mark',
        'youtube' => 'YouTube Logo',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_block_services_label'.
  $field_bases['field_block_services_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_label',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_label_2'.
  $field_bases['field_block_services_label_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_label_2',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_label_3'.
  $field_bases['field_block_services_label_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_label_3',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_label_4'.
  $field_bases['field_block_services_label_4'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_label_4',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_label_5'.
  $field_bases['field_block_services_label_5'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_label_5',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_label_6'.
  $field_bases['field_block_services_label_6'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_label_6',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_label_7'.
  $field_bases['field_block_services_label_7'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_label_7',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_label_8'.
  $field_bases['field_block_services_label_8'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_label_8',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_url'.
  $field_bases['field_block_services_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_url',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_url_2'.
  $field_bases['field_block_services_url_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_url_2',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_url_3'.
  $field_bases['field_block_services_url_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_url_3',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_url_4'.
  $field_bases['field_block_services_url_4'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_url_4',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_url_5'.
  $field_bases['field_block_services_url_5'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_url_5',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_url_6'.
  $field_bases['field_block_services_url_6'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_url_6',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_url_7'.
  $field_bases['field_block_services_url_7'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_url_7',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_block_services_url_8'.
  $field_bases['field_block_services_url_8'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_block_services_url_8',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_cross_promo_body'.
  $field_bases['field_cross_promo_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cross_promo_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_faq_block_faq'.
  $field_bases['field_faq_block_faq'] = array(
    'active' => 1,
    'cardinality' => 6,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_block_faq',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'faq' => 'faq',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_html_block_body'.
  $field_bases['field_html_block_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_html_block_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_key_services_item_icon'.
  $field_bases['field_key_services_item_icon'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_key_services_item_icon',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'android-os' => 'Android Logo',
        'apple-os' => 'Apple Logo',
        'backpack' => 'Backpack',
        'badge' => 'Badge',
        'bar-chart' => 'Bar Chart',
        'calendar' => 'Calendar',
        'check-mark-3' => 'Check Mark',
        'cone13' => 'Cone',
        'credit-card' => 'Credit Card',
        'external-link' => 'External Link',
        'facebook' => 'Facebook',
        'flickr' => 'Flickr',
        'gear' => 'Gear',
        'globe' => 'Globe',
        'help' => 'Help',
        'home' => 'Home',
        'magnifier' => 'Magnifier',
        'map' => 'Map',
        'menu' => 'Menu (Hamburger)',
        'note' => 'Note',
        'phone' => 'Phone',
        'redo' => 'Redo',
        'snowflake' => 'Snowflake',
        'streetsweeping-icon' => 'Street Sweeping',
        'threeoneone' => 311,
        'trash-can' => 'Trash Can',
        'tv' => 'TV',
        'twitter' => 'Twitter',
        'user' => 'User',
        'video-play' => 'Video Play',
        'warning' => 'Warning',
        'wheelchair' => 'Wheelchair',
        'x-mark-3' => 'X Mark',
        'youtube' => 'YouTube Logo',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_key_services_item_label'.
  $field_bases['field_key_services_item_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_key_services_item_label',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_key_services_item_url'.
  $field_bases['field_key_services_item_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_key_services_item_url',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_key_services_link_title'.
  $field_bases['field_key_services_link_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_key_services_link_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_page_alert_body'.
  $field_bases['field_page_alert_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_page_alert_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_status_schools'.
  $field_bases['field_status_schools'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_schools',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'check-mark-3' => 'In Session',
        'x-mark-3' => 'Summer Break',
        'warning' => 'Delayed',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_status_snow_emergency'.
  $field_bases['field_status_snow_emergency'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_snow_emergency',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'check-mark-3' => 'In Effect',
        'x-mark-3' => 'None',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_status_street_sweeping'.
  $field_bases['field_status_street_sweeping'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_street_sweeping',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'check-mark-3' => 'In Effect',
        'x-mark-3' => 'Not In Effect',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_status_trash_recycling'.
  $field_bases['field_status_trash_recycling'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_status_trash_recycling',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'check-mark-3' => 'On Schedule',
        'x-mark-3' => 'Canceled',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_top_links_link_collection'.
  $field_bases['field_top_links_link_collection'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_top_links_link_collection',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_top_links_link_title'.
  $field_bases['field_top_links_link_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_top_links_link_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_top_links_link_url'.
  $field_bases['field_top_links_link_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_top_links_link_url',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
