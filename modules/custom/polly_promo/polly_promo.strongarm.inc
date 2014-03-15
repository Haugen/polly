<?php
/**
 * @file
 * polly_promo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function polly_promo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_polly_promo';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_polly_promo';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_polly_promo';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_polly_promo';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__polly_promo';
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
      'polly_promo' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'polly_article' => array(
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
      'polly_page' => array(
        'custom_settings' => FALSE,
      ),
      'polly_text' => array(
        'custom_settings' => FALSE,
      ),
      'promo_yellow' => array(
        'custom_settings' => TRUE,
      ),
      'polly_slideshow' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'xmlsitemap' => array(
          'weight' => '5',
        ),
        'field_polly_promos_node_bf' => array(
          'weight' => '-4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_polly_promo';
  $strongarm->value = array();
  $export['menu_options_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_polly_promo';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_polly_promo';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_polly_promo';
  $strongarm->value = '1';
  $export['node_preview_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_polly_promo';
  $strongarm->value = 0;
  $export['node_submitted_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_polly_promo';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_polly_promo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_polly_promo';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_polly_promo'] = $strongarm;

  return $export;
}
