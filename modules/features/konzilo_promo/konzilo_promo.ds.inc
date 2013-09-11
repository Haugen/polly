<?php
/**
 * @file
 * konzilo_promo.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function konzilo_promo_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_promo|konzilo_promo';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_promo';
  $ds_layout->view_mode = 'konzilo_promo';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_promo_image',
        1 => 'field_konzilo_top_headline',
        2 => 'field_konzilo_lead',
      ),
    ),
    'fields' => array(
      'field_konzilo_promo_image' => 'ds_content',
      'field_konzilo_top_headline' => 'ds_content',
      'field_konzilo_lead' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => 'tokens',
    'layout_link_custom' => '[node:field_konzilo_promo_link]',
  );
  $export['node|konzilo_promo|konzilo_promo'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function konzilo_promo_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'konzilo_promo';
  $ds_view_mode->label = 'Promo';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['konzilo_promo'] = $ds_view_mode;

  return $export;
}
