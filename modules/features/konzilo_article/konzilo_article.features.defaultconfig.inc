<?php
/**
 * @file
 * konzilo_article.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function konzilo_article_defaultconfig_features() {
  return array(
    'konzilo_article' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function konzilo_article_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_konzilo_article';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.8',
  );
  $export['xmlsitemap_settings_node_konzilo_article'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function konzilo_article_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node konzilo_article content'.
  $permissions['administer panelizer node konzilo_article content'] = array(
    'name' => 'administer panelizer node konzilo_article content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_article context'.
  $permissions['administer panelizer node konzilo_article context'] = array(
    'name' => 'administer panelizer node konzilo_article context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_article defaults'.
  $permissions['administer panelizer node konzilo_article defaults'] = array(
    'name' => 'administer panelizer node konzilo_article defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_article layout'.
  $permissions['administer panelizer node konzilo_article layout'] = array(
    'name' => 'administer panelizer node konzilo_article layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_article overview'.
  $permissions['administer panelizer node konzilo_article overview'] = array(
    'name' => 'administer panelizer node konzilo_article overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node konzilo_article settings'.
  $permissions['administer panelizer node konzilo_article settings'] = array(
    'name' => 'administer panelizer node konzilo_article settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create konzilo_article content'.
  $permissions['create konzilo_article content'] = array(
    'name' => 'create konzilo_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any konzilo_article content'.
  $permissions['delete any konzilo_article content'] = array(
    'name' => 'delete any konzilo_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own konzilo_article content'.
  $permissions['delete own konzilo_article content'] = array(
    'name' => 'delete own konzilo_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any konzilo_article content'.
  $permissions['edit any konzilo_article content'] = array(
    'name' => 'edit any konzilo_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own konzilo_article content'.
  $permissions['edit own konzilo_article content'] = array(
    'name' => 'edit own konzilo_article content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
