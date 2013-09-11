<?php
/**
 * @file
 * konzilo_pages.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function konzilo_pages_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|konzilo_page|konzilo_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'konzilo_page';
  $ds_fieldsetting->view_mode = 'konzilo_page';
  $ds_fieldsetting->settings = array(
    'field_konzilo_promos' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_konzilo_author' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_konzilo_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|konzilo_page|konzilo_page'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function konzilo_pages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_page|konzilo_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_page';
  $ds_layout->view_mode = 'konzilo_page';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_media',
        1 => 'field_konzilo_image',
        2 => 'field_konzilo_top_headline',
        3 => 'field_konzilo_lead',
        4 => 'field_konzilo_kicker',
        5 => 'field_konzilo_body',
        6 => 'field_konzilo_author',
        7 => 'field_konzilo_promos',
      ),
    ),
    'fields' => array(
      'field_konzilo_media' => 'ds_content',
      'field_konzilo_image' => 'ds_content',
      'field_konzilo_top_headline' => 'ds_content',
      'field_konzilo_lead' => 'ds_content',
      'field_konzilo_kicker' => 'ds_content',
      'field_konzilo_body' => 'ds_content',
      'field_konzilo_author' => 'ds_content',
      'field_konzilo_promos' => 'ds_content',
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
  $export['node|konzilo_page|konzilo_page'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function konzilo_pages_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'konzilo_page';
  $ds_view_mode->label = 'Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['konzilo_page'] = $ds_view_mode;

  return $export;
}
