<?php
/**
 * @file
 * konzilo_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function konzilo_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function konzilo_media_node_info() {
  $items = array(
    'konzilo_media' => array(
      'name' => t('Media'),
      'base' => 'node_content',
      'description' => t('External media'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
