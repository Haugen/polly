<?php
/**
 * @file
 * polly_author.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function polly_author_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__polly_author';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
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
      'polly_author' => array(
        'custom_settings' => FALSE,
      ),
      'polly_article' => array(
        'custom_settings' => FALSE,
      ),
      'polly_article_parts' => array(
        'custom_settings' => FALSE,
      ),
      'polly_image' => array(
        'custom_settings' => FALSE,
      ),
      'polly_media' => array(
        'custom_settings' => FALSE,
      ),
      'polly_promo' => array(
        'custom_settings' => FALSE,
      ),
      'polly_text' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'polly_page' => array(
        'custom_settings' => FALSE,
      ),
      'promo_yellow' => array(
        'custom_settings' => FALSE,
      ),
      'polly_body_text' => array(
        'custom_settings' => FALSE,
      ),
      'polly_facts_box' => array(
        'custom_settings' => FALSE,
      ),
      'polly_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'polly_image_main' => array(
        'custom_settings' => TRUE,
      ),
      'polly_sidebar' => array(
        'custom_settings' => TRUE,
      ),
      'polly_image_author' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'xmlsitemap' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__polly_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_polly_author';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_polly_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_polly_author';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_polly_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_polly_author';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_polly_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_polly_author';
  $strongarm->value = '1';
  $export['node_preview_polly_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_polly_author';
  $strongarm->value = 1;
  $export['node_submitted_polly_author'] = $strongarm;

  return $export;
}
