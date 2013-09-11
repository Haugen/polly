<?php
/**
 * @file
 * konzilo_promo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function konzilo_promo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function konzilo_promo_node_info() {
  $items = array(
    'konzilo_promo' => array(
      'name' => t('Promo'),
      'base' => 'node_content',
      'description' => t('A promo that can be placed on different pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
