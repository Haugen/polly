<?php
/**
 * @file
 * konzilo_pages.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function konzilo_pages_defaultconfig_features() {
  return array(
    'konzilo_pages' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function konzilo_pages_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node konzilo_page content'.
  $permissions['administer panelizer node konzilo_page content'] = array(
    'name' => 'administer panelizer node konzilo_page content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_page context'.
  $permissions['administer panelizer node konzilo_page context'] = array(
    'name' => 'administer panelizer node konzilo_page context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_page defaults'.
  $permissions['administer panelizer node konzilo_page defaults'] = array(
    'name' => 'administer panelizer node konzilo_page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_page layout'.
  $permissions['administer panelizer node konzilo_page layout'] = array(
    'name' => 'administer panelizer node konzilo_page layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_page overview'.
  $permissions['administer panelizer node konzilo_page overview'] = array(
    'name' => 'administer panelizer node konzilo_page overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_page settings'.
  $permissions['administer panelizer node konzilo_page settings'] = array(
    'name' => 'administer panelizer node konzilo_page settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create konzilo_page content'.
  $permissions['create konzilo_page content'] = array(
    'name' => 'create konzilo_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any konzilo_page content'.
  $permissions['delete any konzilo_page content'] = array(
    'name' => 'delete any konzilo_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own konzilo_page content'.
  $permissions['delete own konzilo_page content'] = array(
    'name' => 'delete own konzilo_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any konzilo_page content'.
  $permissions['edit any konzilo_page content'] = array(
    'name' => 'edit any konzilo_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own konzilo_page content'.
  $permissions['edit own konzilo_page content'] = array(
    'name' => 'edit own konzilo_page content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
