<?php
/**
 * @file
 * konzilo_promo.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function konzilo_promo_defaultconfig_features() {
  return array(
    'konzilo_promo' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function konzilo_promo_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create konzilo_promo content'.
  $permissions['create konzilo_promo content'] = array(
    'name' => 'create konzilo_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any konzilo_promo content'.
  $permissions['delete any konzilo_promo content'] = array(
    'name' => 'delete any konzilo_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own konzilo_promo content'.
  $permissions['delete own konzilo_promo content'] = array(
    'name' => 'delete own konzilo_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any konzilo_promo content'.
  $permissions['edit any konzilo_promo content'] = array(
    'name' => 'edit any konzilo_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own konzilo_promo content'.
  $permissions['edit own konzilo_promo content'] = array(
    'name' => 'edit own konzilo_promo content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
