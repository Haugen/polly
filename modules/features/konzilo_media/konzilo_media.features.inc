<?php
/**
 * @file
 * konzilo_media.features.inc
 */

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
