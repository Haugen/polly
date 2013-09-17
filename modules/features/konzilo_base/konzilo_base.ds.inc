<?php
/**
 * @file
 * konzilo_base.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function konzilo_base_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|image|full';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'file',
      ),
    ),
    'fields' => array(
      'file' => 'ds_content',
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
  $export['file|image|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|image|teaser';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'file',
      ),
    ),
    'fields' => array(
      'file' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        'pull-right' => 'pull-right',
      ),
      'ds_content' => array(
        'pull-right' => 'pull-right',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['file|image|teaser'] = $ds_layout;

  return $export;
}
