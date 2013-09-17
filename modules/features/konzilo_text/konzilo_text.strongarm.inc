<?php
/**
 * @file
 * konzilo_text.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function konzilo_text_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__konzilo_text';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_text' => array(
        'custom_settings' => TRUE,
      ),
      'konzilo_article' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_article_parts' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_author' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_image' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_media' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_promo' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_body_text' => array(
        'custom_settings' => TRUE,
      ),
      'konzilo_facts_box' => array(
        'custom_settings' => TRUE,
      ),
      'konzilo_slideshow' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__konzilo_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_konzilo_text';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_konzilo_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_konzilo_text';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_konzilo_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_konzilo_text';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_konzilo_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_konzilo_text';
  $strongarm->value = '1';
  $export['node_preview_konzilo_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_konzilo_text';
  $strongarm->value = 1;
  $export['node_submitted_konzilo_text'] = $strongarm;

  return $export;
}
