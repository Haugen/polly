<?php
/**
 * @file
 * polly_article.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function polly_article_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_polly_article';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_polly_article';
  $strongarm->value = 0;
  $export['comment_anonymous_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_polly_article';
  $strongarm->value = 0;
  $export['comment_default_mode_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_polly_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_polly_article';
  $strongarm->value = 1;
  $export['comment_form_location_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_polly_article';
  $strongarm->value = '2';
  $export['comment_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_polly_article';
  $strongarm->value = '0';
  $export['comment_preview_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_polly_article';
  $strongarm->value = 1;
  $export['comment_subject_field_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__polly_article';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
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
      'polly_article_parts' => array(
        'custom_settings' => FALSE,
      ),
      'polly_author' => array(
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
      'polly_article' => array(
        'custom_settings' => TRUE,
      ),
      'polly_page' => array(
        'custom_settings' => FALSE,
      ),
      'polly_facts_box' => array(
        'custom_settings' => FALSE,
      ),
      'polly_sidebar' => array(
        'custom_settings' => TRUE,
      ),
      'polly_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'polly_body_text' => array(
        'custom_settings' => FALSE,
      ),
      'polly_image_main' => array(
        'custom_settings' => TRUE,
      ),
      'polly_image_author' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'xmlsitemap' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_polly_article';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_polly_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_polly_article';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_polly_article';
  $strongarm->value = '1';
  $export['node_preview_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_polly_article';
  $strongarm->value = 1;
  $export['node_submitted_polly_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_polly_article';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_polly_article'] = $strongarm;

  return $export;
}
