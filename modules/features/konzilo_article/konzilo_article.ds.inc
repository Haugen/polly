<?php
/**
 * @file
 * konzilo_article.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function konzilo_article_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_article|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_article';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_article_parts',
        1 => 'field_konzilo_promos',
      ),
    ),
    'fields' => array(
      'field_konzilo_article_parts' => 'ds_content',
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
  $export['node|konzilo_article|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_article_parts',
        1 => 'field_konzilo_promos',
      ),
    ),
    'fields' => array(
      'field_konzilo_article_parts' => 'ds_content',
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
  $export['node|konzilo_article|teaser'] = $ds_layout;

  return $export;
}
