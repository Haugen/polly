<?php
/**
 * @file
 * konzilo_image.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function konzilo_image_defaultconfig_features() {
  return array(
    'konzilo_image' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function konzilo_image_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create konzilo_image content'.
  $permissions['create konzilo_image content'] = array(
    'name' => 'create konzilo_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any konzilo_image content'.
  $permissions['delete any konzilo_image content'] = array(
    'name' => 'delete any konzilo_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own konzilo_image content'.
  $permissions['delete own konzilo_image content'] = array(
    'name' => 'delete own konzilo_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any konzilo_image content'.
  $permissions['edit any konzilo_image content'] = array(
    'name' => 'edit any konzilo_image content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own konzilo_image content'.
  $permissions['edit own konzilo_image content'] = array(
    'name' => 'edit own konzilo_image content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
