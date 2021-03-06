<?php
/**
 * @file
 * polly_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function polly_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
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
 * Implements hook_views_api().
 */
function polly_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function polly_article_node_info() {
  $items = array(
    'polly_article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Articles are the main container for different kinds of content.'),
      'has_title' => '1',
      'title_label' => t('Page name'),
      'help' => '',
    ),
  );
  return $items;
}
