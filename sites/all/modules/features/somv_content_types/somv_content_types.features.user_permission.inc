<?php
/**
 * @file
 * somv_content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function somv_content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  return $permissions;
}
