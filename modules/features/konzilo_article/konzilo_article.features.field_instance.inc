<?php
/**
 * @file
 * konzilo_article.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function konzilo_article_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-konzilo_article-field_konzilo_article_parts'
  $field_instances['node-konzilo_article-field_konzilo_article_parts'] = array(
    'bundle' => 'konzilo_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'konzilo_article' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'konzilo_article_parts',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'konzilo_article_parts' => array(
        'label' => 'hidden',
        'module' => 'air',
        'settings' => array(),
        'type' => 'air_entityreference',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_konzilo_article_parts',
    'label' => 'Article parts',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'match_operator' => 'CONTAINS',
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article parts');

  return $field_instances;
}
