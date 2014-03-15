<?php
/**
 * @file
 * polly_article.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function polly_article_defaultconfig_features() {
  return array(
    'polly_article' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function polly_article_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_polly_article';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.8',
  );
  $export['xmlsitemap_settings_node_polly_article'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function polly_article_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node polly_article defaults'.
  $permissions['administer panelizer node polly_article defaults'] = array(
    'name' => 'administer panelizer node polly_article defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create polly_article content'.
  $permissions['create polly_article content'] = array(
    'name' => 'create polly_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any polly_article content'.
  $permissions['delete any polly_article content'] = array(
    'name' => 'delete any polly_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own polly_article content'.
  $permissions['delete own polly_article content'] = array(
    'name' => 'delete own polly_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any polly_article content'.
  $permissions['edit any polly_article content'] = array(
    'name' => 'edit any polly_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own polly_article content'.
  $permissions['edit own polly_article content'] = array(
    'name' => 'edit own polly_article content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
