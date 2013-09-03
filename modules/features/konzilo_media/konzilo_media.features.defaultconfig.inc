<?php
/**
 * @file
 * konzilo_media.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function konzilo_media_defaultconfig_features() {
  return array(
    'konzilo_media' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function konzilo_media_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create konzilo_media content'.
  $permissions['create konzilo_media content'] = array(
    'name' => 'create konzilo_media content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any konzilo_media content'.
  $permissions['delete any konzilo_media content'] = array(
    'name' => 'delete any konzilo_media content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own konzilo_media content'.
  $permissions['delete own konzilo_media content'] = array(
    'name' => 'delete own konzilo_media content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any konzilo_media content'.
  $permissions['edit any konzilo_media content'] = array(
    'name' => 'edit any konzilo_media content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own konzilo_media content'.
  $permissions['edit own konzilo_media content'] = array(
    'name' => 'edit own konzilo_media content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
