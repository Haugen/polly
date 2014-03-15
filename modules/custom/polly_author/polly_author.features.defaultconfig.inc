<?php
/**
 * @file
 * polly_author.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function polly_author_defaultconfig_features() {
  return array(
    'polly_author' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function polly_author_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create polly_author content'.
  $permissions['create polly_author content'] = array(
    'name' => 'create polly_author content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any polly_author content'.
  $permissions['delete any polly_author content'] = array(
    'name' => 'delete any polly_author content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own polly_author content'.
  $permissions['delete own polly_author content'] = array(
    'name' => 'delete own polly_author content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any polly_author content'.
  $permissions['edit any polly_author content'] = array(
    'name' => 'edit any polly_author content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own polly_author content'.
  $permissions['edit own polly_author content'] = array(
    'name' => 'edit own polly_author content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
