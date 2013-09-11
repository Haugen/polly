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
  $ds_layout->id = 'node|konzilo_promo|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_promo';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_promo_image',
        1 => 'field_konzilo_top_headline',
        2 => 'field_konzilo_lead',
        3 => 'field_konzilo_promo_link',
      ),
    ),
    'fields' => array(
      'field_konzilo_promo_image' => 'ds_content',
      'field_konzilo_top_headline' => 'ds_content',
      'field_konzilo_lead' => 'ds_content',
      'field_konzilo_promo_link' => 'ds_content',
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
  $export['node|konzilo_promo|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_promo|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_promo';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_promo_image',
        1 => 'field_konzilo_top_headline',
        2 => 'field_konzilo_lead',
        3 => 'field_konzilo_promo_link',
      ),
    ),
    'fields' => array(
      'field_konzilo_promo_image' => 'ds_content',
      'field_konzilo_top_headline' => 'ds_content',
      'field_konzilo_lead' => 'ds_content',
      'field_konzilo_promo_link' => 'ds_content',
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
  $export['node|konzilo_promo|teaser'] = $ds_layout;

  return $export;
}
