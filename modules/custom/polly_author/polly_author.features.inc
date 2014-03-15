<?php
/**
 * @file
 * polly_author.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function polly_author_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function polly_author_node_info() {
  $items = array(
    'polly_author' => array(
      'name' => t('Author'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
  );
  return $items;
}
