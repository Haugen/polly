<?php
/**
 * @file
 * polly_pages.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function polly_pages_defaultconfig_features() {
  return array(
    'polly_pages' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function polly_pages_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node polly_page content'.
  $permissions['administer panelizer node polly_page content'] = array(
    'name' => 'administer panelizer node polly_page content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node polly_page context'.
  $permissions['administer panelizer node polly_page context'] = array(
    'name' => 'administer panelizer node polly_page context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node polly_page defaults'.
  $permissions['administer panelizer node polly_page defaults'] = array(
    'name' => 'administer panelizer node polly_page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node polly_page layout'.
  $permissions['administer panelizer node polly_page layout'] = array(
    'name' => 'administer panelizer node polly_page layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node polly_page overview'.
  $permissions['administer panelizer node polly_page overview'] = array(
    'name' => 'administer panelizer node polly_page overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node polly_page settings'.
  $permissions['administer panelizer node polly_page settings'] = array(
    'name' => 'administer panelizer node polly_page settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create polly_page content'.
  $permissions['create polly_page content'] = array(
    'name' => 'create polly_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any polly_page content'.
  $permissions['delete any polly_page content'] = array(
    'name' => 'delete any polly_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own polly_page content'.
  $permissions['delete own polly_page content'] = array(
    'name' => 'delete own polly_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any polly_page content'.
  $permissions['edit any polly_page content'] = array(
    'name' => 'edit any polly_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own polly_page content'.
  $permissions['edit own polly_page content'] = array(
    'name' => 'edit own polly_page content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
