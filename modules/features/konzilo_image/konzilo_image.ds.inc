<?php
/**
 * @file
 * konzilo_image.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function konzilo_image_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_image|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_image';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_image',
        1 => 'field_konzilo_body',
      ),
    ),
    'fields' => array(
      'field_konzilo_image' => 'ds_content',
      'field_konzilo_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|konzilo_image|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_image|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_image';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_image',
        1 => 'field_konzilo_body',
      ),
    ),
    'fields' => array(
      'field_konzilo_image' => 'ds_content',
      'field_konzilo_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|konzilo_image|teaser'] = $ds_layout;

  return $export;
}
