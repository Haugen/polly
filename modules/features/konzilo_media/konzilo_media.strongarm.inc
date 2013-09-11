<?php
/**
 * @file
 * konzilo_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function konzilo_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__konzilo_media';
  $strongarm->value = array(
    'view_modes' => array(
      'konzilo_media' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
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
      'konzilo_promo' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_text' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__konzilo_media'] = $strongarm;

  return $export;
}
