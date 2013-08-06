<?php
/**
 * @file
 * konzilo_author.features.inc
 */

/**
 * Implements hook_node_info().
 */
function konzilo_author_node_info() {
  $items = array(
    'konzilo_author' => array(
      'name' => t('Author'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
