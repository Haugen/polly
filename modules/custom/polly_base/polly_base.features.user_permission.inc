<?php
/**
 * @file
 * polly_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function polly_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use oauth2 server'.
  $permissions['use oauth2 server'] = array(
    'name' => 'use oauth2 server',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'oauth2_server',
  );

  return $permissions;
}
