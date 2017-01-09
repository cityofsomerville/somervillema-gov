<?php
/**
 * @file
 * somv_field_collections.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function somv_field_collections_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'field_collection_item-field_sidebar_links-field_sidebar_link_target'
  $field_instances['field_collection_item-field_sidebar_links-field_sidebar_link_target'] = array(
    'bundle' => 'field_sidebar_links',
    'default_value' => array(
      0 => array(
        'value' => '_self',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sidebar_link_target',
    'label' => 'Open In New Browser Window',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sidebar_links-field_sidebar_link_title'
  $field_instances['field_collection_item-field_sidebar_links-field_sidebar_link_title'] = array(
    'bundle' => 'field_sidebar_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Link text displayed to the user',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sidebar_link_title',
    'label' => 'Link Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_sidebar_links-field_sidebar_link_url'
  $field_instances['field_collection_item-field_sidebar_links-field_sidebar_link_url'] = array(
    'bundle' => 'field_sidebar_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Paste the link URL here',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sidebar_link_url',
    'label' => 'Link URL',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_tabbed_content-field_tabbed_tab_content'
  $field_instances['field_collection_item-field_tabbed_content-field_tabbed_tab_content'] = array(
    'bundle' => 'field_tabbed_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tabbed_tab_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_tabbed_content-field_tabbed_tab_icon'
  $field_instances['field_collection_item-field_tabbed_content-field_tabbed_tab_icon'] = array(
    'bundle' => 'field_tabbed_content',
    'default_value' => array(
      0 => array(
        'value' => 'android-os',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tabbed_tab_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_tabbed_content-field_tabbed_tab_image'
  $field_instances['field_collection_item-field_tabbed_content-field_tabbed_tab_image'] = array(
    'bundle' => 'field_tabbed_content',
    'deleted' => 0,
    'description' => 'If not using the default SVG Icon Sprite, upload image here.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tabbed_tab_image',
    'label' => 'OR Tab Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '512 KB',
      'max_resolution' => '130x260',
      'min_resolution' => '32x65',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_tabbed_content-field_tabbed_tab_title'
  $field_instances['field_collection_item-field_tabbed_content-field_tabbed_tab_title'] = array(
    'bundle' => 'field_tabbed_content',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tabbed_tab_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-organizational_unit-field_sidebar_links'
  $field_instances['node-organizational_unit-field_sidebar_links'] = array(
    'bundle' => 'organizational_unit',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Listing of links displayed in the page sidebar',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sidebar_links',
    'label' => 'Sidebar Links',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-page-field_sidebar_links'
  $field_instances['node-page-field_sidebar_links'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Listing of links that is displayed on the page sidebar.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sidebar_links',
    'label' => 'Sidebar Links',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Icon');
  t('If not using the default SVG Icon Sprite, upload image here.');
  t('Link Title');
  t('Link URL');
  t('Link text displayed to the user');
  t('Listing of links displayed in the page sidebar');
  t('Listing of links that is displayed on the page sidebar.');
  t('OR Tab Image');
  t('Open In New Browser Window');
  t('Paste the link URL here');
  t('Sidebar Links');
  t('Title');

  return $field_instances;
}
