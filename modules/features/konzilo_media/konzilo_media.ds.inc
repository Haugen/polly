<?php
/**
 * @file
 * konzilo_media.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function konzilo_media_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_media|konzilo_media';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_media';
  $ds_layout->view_mode = 'konzilo_media';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_media',
        1 => 'field_konzilo_author',
        2 => 'field_konzilo_body',
      ),
    ),
    'fields' => array(
      'field_konzilo_media' => 'ds_content',
      'field_konzilo_author' => 'ds_content',
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
  $export['node|konzilo_media|konzilo_media'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function konzilo_media_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'konzilo_media';
  $ds_view_mode->label = 'Media';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['konzilo_media'] = $ds_view_mode;

  return $export;
}
