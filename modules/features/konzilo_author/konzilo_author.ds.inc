<?php
/**
 * @file
 * konzilo_author.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function konzilo_author_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|konzilo_author|konzilo_author';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'konzilo_author';
  $ds_fieldsetting->view_mode = 'konzilo_author';
  $ds_fieldsetting->settings = array(
    'field_konzilo_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|konzilo_author|konzilo_author'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function konzilo_author_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_author|konzilo_author';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_author';
  $ds_layout->view_mode = 'konzilo_author';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_user_ref',
        1 => 'field_konzilo_image',
        2 => 'field_konzilo_body',
        3 => 'field_konzilo_email',
      ),
    ),
    'fields' => array(
      'field_konzilo_user_ref' => 'ds_content',
      'field_konzilo_image' => 'ds_content',
      'field_konzilo_body' => 'ds_content',
      'field_konzilo_email' => 'ds_content',
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
  $export['node|konzilo_author|konzilo_author'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function konzilo_author_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'konzilo_author';
  $ds_view_mode->label = 'Author';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['konzilo_author'] = $ds_view_mode;

  return $export;
}