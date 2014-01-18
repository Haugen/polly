<?php
/**
 * @file
 * konzilo_author.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function konzilo_author_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__konzilo_author';
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
      'konzilo_author' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_article' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_article_parts' => array(
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
      'konzilo_text' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_page' => array(
        'custom_settings' => FALSE,
      ),
      'promo_yellow' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_body_text' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_facts_box' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'konzilo_image_main' => array(
        'custom_settings' => TRUE,
      ),
      'konzilo_sidebar' => array(
        'custom_settings' => TRUE,
      ),
      'konzilo_image_author' => array(
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
  $export['field_bundle_settings_node__konzilo_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_konzilo_author';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_konzilo_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_konzilo_author';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_konzilo_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_konzilo_author';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_konzilo_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_konzilo_author';
  $strongarm->value = '1';
  $export['node_preview_konzilo_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_konzilo_author';
  $strongarm->value = 1;
  $export['node_submitted_konzilo_author'] = $strongarm;

  return $export;
}
