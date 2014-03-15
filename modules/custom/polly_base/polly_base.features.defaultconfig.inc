<?php
/**
 * @file
 * polly_base.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function polly_base_defaultconfig_features() {
  return array(
    'polly_base' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function polly_base_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'configure air settings'.
  $permissions['configure air settings'] = array(
    'name' => 'configure air settings',
    'roles' => array(),
    'module' => 'air',
  );

  // Exported permission: 'use text format markdown'.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format wysiwyg'.
  $permissions['use text format wysiwyg'] = array(
    'name' => 'use text format wysiwyg',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
