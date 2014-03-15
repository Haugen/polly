<?php
/**
 * @file
 * polly_promo.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function polly_promo_defaultconfig_features() {
  return array(
    'polly_promo' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function polly_promo_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create polly_promo content'.
  $permissions['create polly_promo content'] = array(
    'name' => 'create polly_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any polly_promo content'.
  $permissions['delete any polly_promo content'] = array(
    'name' => 'delete any polly_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own polly_promo content'.
  $permissions['delete own polly_promo content'] = array(
    'name' => 'delete own polly_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any polly_promo content'.
  $permissions['edit any polly_promo content'] = array(
    'name' => 'edit any polly_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own polly_promo content'.
  $permissions['edit own polly_promo content'] = array(
    'name' => 'edit own polly_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
