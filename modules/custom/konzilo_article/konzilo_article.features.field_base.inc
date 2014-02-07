<?php
/**
 * @file
 * konzilo_article.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function konzilo_article_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_konzilo_article_parts'
  $field_bases['field_konzilo_article_parts'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_konzilo_article_parts',
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
          'konzilo_image' => 'konzilo_image',
          'konzilo_media' => 'konzilo_media',
          'konzilo_text' => 'konzilo_text',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
