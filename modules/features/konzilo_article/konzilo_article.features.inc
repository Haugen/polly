<?php
/**
 * @file
 * konzilo_article.features.inc
 */

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