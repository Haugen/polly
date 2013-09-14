<?php
/**
 * @file
 * konzilo_pages.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function konzilo_pages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_page';
  $ds_layout->view_mode = 'full';
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
    'classes' => array(
      'layout_class' => array(
        '' => '',
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
  $export['node|konzilo_page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_page|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_page';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_media',
        1 => 'field_konzilo_image',
        2 => 'field_konzilo_top_headline',
        3 => 'field_konzilo_lead',
        4 => 'field_konzilo_author',
      ),
    ),
    'fields' => array(
      'field_konzilo_media' => 'ds_content',
      'field_konzilo_image' => 'ds_content',
      'field_konzilo_top_headline' => 'ds_content',
      'field_konzilo_lead' => 'ds_content',
      'field_konzilo_author' => 'ds_content',
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
  $export['node|konzilo_page|teaser'] = $ds_layout;

  return $export;
}
