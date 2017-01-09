<?php
/**
 * Implements hook_rules_condition_info().
 *
 * Declares any meta-data about conditions for Rules in an associative, nested
 * array. Works very similar to the action declarations, but conditions cannot
 * provide any new parameters and only return TRUE or FALSE. See also
 * hook_rules_condition_info in the rules.api.php file, and the online
 * documentation at http://drupal.org/node/878928.
 */
function somv_rules_webform_submitted_rules_condition_info() {
  $conditions = array();

  // if (module_exists('webform')) {
    // Conditions, like actions, are described by an array with keys
    // representing the machine name of the condition (which also by default is
    // the name of the callback function).
    $conditions['somv_rules_webform_submitted_test_cookie'] = array(
      'label' => t('Webform cookie is set'),
      'group' => t('Webform'),
      // Parameters are described identically to how they work for actions.
      'parameter' => array(
        'webform_nid' => array(
          'type' => 'text',
          'label' => t('Webform to check'),
          'options list' => 'somv_rules_webform_submitted_webform_list',
        ),
      ),
    );
  // }

  return $conditions;
}

/**
 * Implements hook_rules_action_info().
 *
 * Declares any meta-data about actions for Rules in a big, associative, nested
 * array. See also hook_rules_action_info in the rules.api.php file, and the
 * online documentation at http://drupal.org/node/878928.
 */
function somv_rules_webform_submitted_rules_action_info() {
  $actions = array();

  //if (module_exists('webform')) {
    // The base-level keys in the array are the machine names for the actions,
    // and by default also the function name for the action callback. Prefix
    // with your module name to avoid name conflicts.
    $actions['somv_rules_webform_submitted_action_set_cookie'] = array(
      'label' => t('A webform cookie is going to be set'),
      'group' => t('Webform'),
      'parameter' => array(
        'webform_nid' => array(
          'type' => 'text',
          'label' => t('Webform'),
          'options list' => 'somv_rules_webform_submitted_webform_list',
        ),
      ),
    );
  // }

  return $actions;
}

function somv_rules_webform_submitted_action_set_cookie($webform_nid) {
  $cookie_name = 'SESSwebform-' . $webform_nid;
  $time = time()+60*60*24*365; // 365 Days
  $params = session_get_cookie_params();
  setcookie($cookie_name, $time, $time, $params['path'], $params['domain'], $params['secure']);
}

/**
 * The callback for the condition 'somv_rules_webform_submitted_condition_info'.
 * @return <boolean>
 *   TRUE or FALSE depending on if the given view has the given base table or
 *   not.
 */
function somv_rules_webform_submitted_test_cookie($webform_nid) {
  // Set the data 'settings' object we will be testing with
  // If the server cookie is not set we will pass this object
  // into the js file for client-side checking.
  if (!isset($webform_nid)) {
    return FALSE;
  }
  $data = array();
  $data['sess_cookie_name'] = 'SESSwebform-' . $webform_nid;
  $data['cookie_name'] = 'webform-' . $webform_nid;
  $data['nid'] = $webform_nid;
  $has_cookie = FALSE;
  
  // First, check if the cookie has been set on the server
  if (array_key_exists($data['sess_cookie_name'], $_COOKIE) || array_key_exists($data['cookie_name'], $_COOKIE)) {
    $has_cookie = TRUE;
  } else { // if not, then we'll check client-side cookies with js
    drupal_add_js( array ("somv_rules_webform_submitted" => $data), 'setting');
    drupal_add_js(drupal_get_path('module', 'somv_rules_webform_submitted') . '/assets/js/somv_rules_webform_submitted.js', 'file');
    return TRUE;
  }

  // All conditions return TRUE or FALSE.
  return $has_cookie;
}

/**
 * Helper function to build a select list over all webforms on the site.
 *
 * @return <array>
 *   An array with all selectable options, keyed with the 'actual' value (as
 *   used by Rules) and with values being the names displayed in the select
 *   list.
 */
function somv_rules_webform_submitted_webform_list() {
  $selectable_webforms = array();
  // Get an array of all published webform nodes
  $nodes = node_load_multiple(array(), array(
    'type' => 'webform',
    'status' => 1,
  ));

  // Loop over array of webforms and create a select list of form nids, with titles
  foreach ($nodes as $node_name => $node_object) {
    $selectable_webforms[$node_name] = $node_object->title;
  }

  // Don't forget to return the array.
  return $selectable_webforms;
}
