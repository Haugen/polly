<?php
/**
 * @file
 * konzilo_image.features.inc
 */

/**
 * Implements hook_node_info().
 */
function konzilo_image_node_info() {
  $items = array(
    'konzilo_image' => array(
      'name' => t('Image'),
      'base' => 'node_content',
      'description' => t('An image with additional metadata.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
