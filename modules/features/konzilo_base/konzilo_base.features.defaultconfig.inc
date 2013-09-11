<?php
/**
 * @file
 * konzilo_base.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function konzilo_base_defaultconfig_features() {
  return array(
    'konzilo_base' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function konzilo_base_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'configure air settings'.
  $permissions['configure air settings'] = array(
    'name' => 'configure air settings',
    'roles' => array(),
    'module' => 'air',
  );

  return $permissions;
}
