<?php

/**
 * @file
 * Admin functions for the Ad Hoc Alerts module.
 */

/**
 * Implements hook_form().
 */
function ad_hoc_alerts_admin() {
  $form = array();
  $start_date = variable_get('ad_hoc_alerts_start_date');
  $end_date = variable_get('ad_hoc_alerts_end_date');

  if (is_array($start_date)) {
    $start_date_default = $start_date;
    $start_date_current = 'Current value: '.$start_date['month'].'/'.$start_date['day'].'/'.$start_date['year'];
  }
  else {
    $start_date_default = '';
    $start_date_current = 'No value set';
  }

  if (is_array($end_date)) {
    $end_date_default = $end_date;
    $end_date_current = 'Current value: '.$end_date['month'].'/'.$end_date['day'].'/'.$end_date['year'];
  }
  else {
    $end_date_default = '';
    $end_date_current = 'No value set';
  }

  $form['ad_hoc_alerts'] = array(
    'alert_dates' => array(
      '#type' => 'fieldset',
      '#title' => 'Alert Dates',
      '#description' => 'For this to work, you\'ll need to set some dates in the future.',
      'ad_hoc_alerts_start_date' => array(
        '#type' => 'date',
        '#title' => 'Start Date',
        '#default_value' => $start_date_default,
        '#description' => $start_date_current,
      ),
      'ad_hoc_alerts_end_date' => array(
        '#type' => 'date',
        '#title' => 'End Date',
        '#default_value' => $end_date_default,
        '#description' => $end_date_current,
      ),
    ),
    'ad_hoc_alerts_alert_css_class' => array(
      '#type' => 'textfield',
      '#title' => 'CSS Classes',
      '#default_value' => variable_get('ad_hoc_alerts_alert_css_class'),
      '#description' => t('The class to provide on the alert. Separate classes with a space.'),
    ),
    'ad_hoc_alerts_alert_text' => array(
      '#type' => 'textarea',
      '#title' => 'Alert Text',
      '#default_value' => variable_get('ad_hoc_alerts_alert_text'),
    ),
  );

  return system_settings_form($form);
}
