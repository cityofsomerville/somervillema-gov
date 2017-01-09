<?php

/**
 * @file
 * jQuery social stream bean plugin.
 */
class JquerySocialStreamBean extends BeanPlugin {
  /**
   * Declares default block settings.
   */
  public function values() {
    return array(
      'settings' => array(
        'conf' => array(),
      ),
    );
  }

  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {
    $form = array();
    $form['settings'] = array(
      '#type' => 'fieldset',
      '#tree' => TRUE,
      '#title' => t('Options'),
    );
    $form['settings']['conf'] = jquery_social_stream_settings_form(isset($bean->settings['conf']) ? $bean->settings['conf'] : array());
    return $form;
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    $conf = array();
    if (isset($bean->settings['conf'])) {
      $conf = $bean->settings['conf'];
    }
    //Grab the current node
    $node = node_load(arg(1));

    // If the current node has Facebook or Twitter ids use those instead of the globals
    if (isset($node->field_contact_information['und'])) {
      $entity = field_collection_item_load($node->field_contact_information['und']['0']['value']);
      if (!empty($entity->field_contact_collection_twitter)) {
        $twitter_id = $entity->field_contact_collection_twitter['und']['0']['value'];
        $conf['feeds']['twitter']['id'] = $this->format_feed_str($twitter_id);
      }
      if (!empty($entity->field_contact_collection_fb_url)) {
        $fb_id = $entity->field_contact_collection_fb_url['und']['0']['value'];
        $conf['feeds']['facebook']['id'] = $this->format_feed_str($fb_id);
      }
    }
    return jquery_social_stream_block_content($conf);
  }

  private function format_feed_str($feed) {
    $parsed_url = parse_url($feed, PHP_URL_PATH);
    return basename($parsed_url);
  }
}
