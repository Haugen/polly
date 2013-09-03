<?php
/**
 * @file
 * konzilo_text.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function konzilo_text_defaultconfig_features() {
  return array(
    'konzilo_text' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function konzilo_text_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create konzilo_text content'.
  $permissions['create konzilo_text content'] = array(
    'name' => 'create konzilo_text content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any konzilo_text content'.
  $permissions['delete any konzilo_text content'] = array(
    'name' => 'delete any konzilo_text content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own konzilo_text content'.
  $permissions['delete own konzilo_text content'] = array(
    'name' => 'delete own konzilo_text content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any konzilo_text content'.
  $permissions['edit any konzilo_text content'] = array(
    'name' => 'edit any konzilo_text content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own konzilo_text content'.
  $permissions['edit own konzilo_text content'] = array(
    'name' => 'edit own konzilo_text content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
