<?php
/**
 * @file
 * polly_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function polly_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function polly_pages_node_info() {
  $items = array(
    'polly_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Static pages.'),
      'has_title' => '1',
      'title_label' => t('Page name'),
      'help' => '',
    ),
  );
  return $items;
}
