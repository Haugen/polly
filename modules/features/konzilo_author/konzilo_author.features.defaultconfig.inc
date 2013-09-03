<?php
/**
 * @file
 * konzilo_author.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function konzilo_author_defaultconfig_features() {
  return array(
    'konzilo_author' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function konzilo_author_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create konzilo_author content'.
  $permissions['create konzilo_author content'] = array(
    'name' => 'create konzilo_author content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any konzilo_author content'.
  $permissions['delete any konzilo_author content'] = array(
    'name' => 'delete any konzilo_author content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own konzilo_author content'.
  $permissions['delete own konzilo_author content'] = array(
    'name' => 'delete own konzilo_author content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any konzilo_author content'.
  $permissions['edit any konzilo_author content'] = array(
    'name' => 'edit any konzilo_author content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own konzilo_author content'.
  $permissions['edit own konzilo_author content'] = array(
    'name' => 'edit own konzilo_author content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
