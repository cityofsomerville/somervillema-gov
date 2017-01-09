<?php
/**
 * @file
 * somv_bean_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function somv_bean_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-bean_webform_block-field_bean_webform'.
  $field_instances['bean-bean_webform_block-field_bean_webform'] = array(
    'bundle' => 'bean_webform_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'token',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_bean_webform',
    'label' => 'Webform',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'bean-cross_promotion_component-field_cross_promo_body'.
  $field_instances['bean-cross_promotion_component-field_cross_promo_body'] = array(
    'bundle' => 'cross_promotion_component',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_cross_promo_body',
    'label' => 'Body',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-faq_common_block-field_faq_block_faq'.
  $field_instances['bean-faq_common_block-field_faq_block_faq'] = array(
    'bundle' => 'faq_common_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_faq_block_faq',
    'label' => 'faq',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-homepage_status_bar-field_status_schools'.
  $field_instances['bean-homepage_status_bar-field_status_schools'] = array(
    'bundle' => 'homepage_status_bar',
    'default_value' => array(
      0 => array(
        'value' => 'status_true',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_status_schools',
    'label' => 'Schools',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'bean-homepage_status_bar-field_status_snow_emergency'.
  $field_instances['bean-homepage_status_bar-field_status_snow_emergency'] = array(
    'bundle' => 'homepage_status_bar',
    'default_value' => array(
      0 => array(
        'value' => 'status_false',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_status_snow_emergency',
    'label' => 'Snow Emergency',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'bean-homepage_status_bar-field_status_street_sweeping'.
  $field_instances['bean-homepage_status_bar-field_status_street_sweeping'] = array(
    'bundle' => 'homepage_status_bar',
    'default_value' => array(
      0 => array(
        'value' => 'status_true',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_status_street_sweeping',
    'label' => 'Street Sweeping',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'bean-homepage_status_bar-field_status_trash_recycling'.
  $field_instances['bean-homepage_status_bar-field_status_trash_recycling'] = array(
    'bundle' => 'homepage_status_bar',
    'default_value' => array(
      0 => array(
        'value' => 'status_true',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_status_trash_recycling',
    'label' => 'Trash & Recycling',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-html_block-field_html_block_body'.
  $field_instances['bean-html_block-field_html_block_body'] = array(
    'bundle' => 'html_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_html_block_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_icon'.
  $field_instances['bean-key_services-field_block_services_icon'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => 'home',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_icon',
    'label' => 'Icon 1',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_icon_2'.
  $field_instances['bean-key_services-field_block_services_icon_2'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_icon_2',
    'label' => 'Icon 2',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_icon_3'.
  $field_instances['bean-key_services-field_block_services_icon_3'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => 'home',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_icon_3',
    'label' => 'Icon 3',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_icon_4'.
  $field_instances['bean-key_services-field_block_services_icon_4'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => 'home',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_icon_4',
    'label' => 'Icon 4',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_icon_5'.
  $field_instances['bean-key_services-field_block_services_icon_5'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => 'home',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_icon_5',
    'label' => 'Icon 5',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_icon_6'.
  $field_instances['bean-key_services-field_block_services_icon_6'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => 'home',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_icon_6',
    'label' => 'Icon 6',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_icon_7'.
  $field_instances['bean-key_services-field_block_services_icon_7'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => 'home',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_icon_7',
    'label' => 'Icon 7',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_icon_8'.
  $field_instances['bean-key_services-field_block_services_icon_8'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => 'help',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_icon_8',
    'label' => 'Icon 8',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_label'.
  $field_instances['bean-key_services-field_block_services_label'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_label',
    'label' => 'Label 1',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_label_2'.
  $field_instances['bean-key_services-field_block_services_label_2'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_label_2',
    'label' => 'Label 2',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_label_3'.
  $field_instances['bean-key_services-field_block_services_label_3'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_label_3',
    'label' => 'Label 3',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_label_4'.
  $field_instances['bean-key_services-field_block_services_label_4'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_label_4',
    'label' => 'Label 4',
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_label_5'.
  $field_instances['bean-key_services-field_block_services_label_5'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_label_5',
    'label' => 'Label 5',
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_label_6'.
  $field_instances['bean-key_services-field_block_services_label_6'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_label_6',
    'label' => 'Label 6',
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
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_label_7'.
  $field_instances['bean-key_services-field_block_services_label_7'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_label_7',
    'label' => 'Label 7',
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
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_label_8'.
  $field_instances['bean-key_services-field_block_services_label_8'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_label_8',
    'label' => 'Label 8',
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
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_url'.
  $field_instances['bean-key_services-field_block_services_url'] = array(
    'bundle' => 'key_services',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_url',
    'label' => 'URL 1',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_url_2'.
  $field_instances['bean-key_services-field_block_services_url_2'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => '#',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_url_2',
    'label' => 'URL 2',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_url_3'.
  $field_instances['bean-key_services-field_block_services_url_3'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => '#',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_url_3',
    'label' => 'URL 3',
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_url_4'.
  $field_instances['bean-key_services-field_block_services_url_4'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => '#',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_url_4',
    'label' => 'URL 4',
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_url_5'.
  $field_instances['bean-key_services-field_block_services_url_5'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => '#',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_url_5',
    'label' => 'URL 5',
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_url_6'.
  $field_instances['bean-key_services-field_block_services_url_6'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => '#',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_url_6',
    'label' => 'URL 6',
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
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_url_7'.
  $field_instances['bean-key_services-field_block_services_url_7'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => '#',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_url_7',
    'label' => 'URL 7',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'bean-key_services-field_block_services_url_8'.
  $field_instances['bean-key_services-field_block_services_url_8'] = array(
    'bundle' => 'key_services',
    'default_value' => array(
      0 => array(
        'value' => '#',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_services_url_8',
    'label' => 'URL 8',
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
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'bean-key_services_item-field_key_services_item_icon'.
  $field_instances['bean-key_services_item-field_key_services_item_icon'] = array(
    'bundle' => 'key_services_item',
    'default_value' => array(
      0 => array(
        'value' => 'phone',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_key_services_item_icon',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'bean-key_services_item-field_key_services_item_label'.
  $field_instances['bean-key_services_item-field_key_services_item_label'] = array(
    'bundle' => 'key_services_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_key_services_item_label',
    'label' => 'Description',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'bean-key_services_item-field_key_services_item_url'.
  $field_instances['bean-key_services_item-field_key_services_item_url'] = array(
    'bundle' => 'key_services_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_key_services_item_url',
    'label' => 'URL',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'bean-key_services_item-field_key_services_link_title'.
  $field_instances['bean-key_services_item-field_key_services_link_title'] = array(
    'bundle' => 'key_services_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_key_services_link_title',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-page_alert-field_page_alert_body'.
  $field_instances['bean-page_alert-field_page_alert_body'] = array(
    'bundle' => 'page_alert',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_page_alert_body',
    'label' => 'Body',
    'required' => 1,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'bean-services_common_requests_block-field_block_common_services'.
  $field_instances['bean-services_common_requests_block-field_block_common_services'] = array(
    'bundle' => 'services_common_requests_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_block_common_services',
    'label' => 'Services',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-top_links-field_top_links_link_collection'.
  $field_instances['bean-top_links-field_top_links_link_collection'] = array(
    'bundle' => 'top_links',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_top_links_link_collection',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_top_links_link_collection-field_top_links_link_title'.
  $field_instances['field_collection_item-field_top_links_link_collection-field_top_links_link_title'] = array(
    'bundle' => 'field_top_links_link_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_top_links_link_title',
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
  // 'field_collection_item-field_top_links_link_collection-field_top_links_link_url'.
  $field_instances['field_collection_item-field_top_links_link_collection-field_top_links_link_url'] = array(
    'bundle' => 'field_top_links_link_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_top_links_link_url',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Description');
  t('Icon');
  t('Icon 1');
  t('Icon 2');
  t('Icon 3');
  t('Icon 4');
  t('Icon 5');
  t('Icon 6');
  t('Icon 7');
  t('Icon 8');
  t('Label 1');
  t('Label 2');
  t('Label 3');
  t('Label 4');
  t('Label 5');
  t('Label 6');
  t('Label 7');
  t('Label 8');
  t('Link');
  t('Link Title');
  t('Link URL');
  t('Schools');
  t('Services');
  t('Snow Emergency');
  t('Street Sweeping');
  t('Trash & Recycling');
  t('URL');
  t('URL 1');
  t('URL 2');
  t('URL 3');
  t('URL 4');
  t('URL 5');
  t('URL 6');
  t('URL 7');
  t('URL 8');
  t('Webform');
  t('faq');

  return $field_instances;
}
