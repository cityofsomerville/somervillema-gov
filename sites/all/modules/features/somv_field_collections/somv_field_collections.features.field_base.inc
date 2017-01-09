<?php
/**
 * @file
 * somv_field_collections.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function somv_field_collections_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_sidebar_link_target'
  $field_bases['field_sidebar_link_target'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sidebar_link_target',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '_self' => 'No',
        '_blank' => 'Yes',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sidebar_link_title'
  $field_bases['field_sidebar_link_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sidebar_link_title',
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

  // Exported field_base: 'field_sidebar_link_url'
  $field_bases['field_sidebar_link_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sidebar_link_url',
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

  // Exported field_base: 'field_sidebar_links'
  $field_bases['field_sidebar_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sidebar_links',
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

  // Exported field_base: 'field_tabbed_tab_content'
  $field_bases['field_tabbed_tab_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tabbed_tab_content',
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

  // Exported field_base: 'field_tabbed_tab_icon'
  $field_bases['field_tabbed_tab_icon'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tabbed_tab_icon',
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

  // Exported field_base: 'field_tabbed_tab_image'
  $field_bases['field_tabbed_tab_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tabbed_tab_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_tabbed_tab_title'
  $field_bases['field_tabbed_tab_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tabbed_tab_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 45,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
