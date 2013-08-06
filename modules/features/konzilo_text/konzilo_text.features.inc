<?php
/**
 * @file
 * konzilo_text.features.inc
 */

/**
 * Implements hook_node_info().
 */
function konzilo_text_node_info() {
  $items = array(
    'konzilo_text' => array(
      'name' => t('Text'),
      'base' => 'node_content',
      'description' => t('A text that can be attached to articles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
