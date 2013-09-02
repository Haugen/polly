<?php
/**
 * @file
 * konzilo_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function konzilo_article_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function konzilo_article_node_info() {
  $items = array(
    'konzilo_article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Articles are the main container for different kinds of content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
