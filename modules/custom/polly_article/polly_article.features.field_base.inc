<?php
/**
 * @file
 * polly_article.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function polly_article_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_polly_article_parts'
  $field_bases['field_polly_article_parts'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_polly_article_parts',
    'foreign keys' => array(),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'polly_image' => 'polly_image',
          'polly_media' => 'polly_media',
          'polly_text' => 'polly_text',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
