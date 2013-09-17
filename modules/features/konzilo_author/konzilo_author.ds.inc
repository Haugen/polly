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
  $ds_fieldsetting->id = 'node|konzilo_author|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'konzilo_author';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'headline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_konzilo_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'bio',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_konzilo_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'email',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_konzilo_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|konzilo_author|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|konzilo_author|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'konzilo_author';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|konzilo_author|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function konzilo_author_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_author|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_author';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-two-column-rev';
  $ds_layout->settings = array(
    'regions' => array(
      'sidebar' => array(
        0 => 'field_konzilo_image',
      ),
      'content' => array(
        1 => 'title',
        2 => 'field_konzilo_email',
        3 => 'field_konzilo_body',
      ),
    ),
    'fields' => array(
      'field_konzilo_image' => 'sidebar',
      'title' => 'content',
      'field_konzilo_email' => 'content',
      'field_konzilo_body' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'sidebar' => 'div',
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|konzilo_author|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|konzilo_author|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'konzilo_author';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_konzilo_image',
        1 => 'title',
        2 => 'field_konzilo_email',
      ),
    ),
    'fields' => array(
      'field_konzilo_image' => 'ds_content',
      'title' => 'ds_content',
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
  $export['node|konzilo_author|teaser'] = $ds_layout;

  return $export;
}
