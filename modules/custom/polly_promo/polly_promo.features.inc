<?php
/**
 * @file
 * polly_promo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function polly_promo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function polly_promo_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow.
  $styles['slideshow'] = array(
    'name' => 'slideshow',
    'label' => 'slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 573,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function polly_promo_node_info() {
  $items = array(
    'polly_promo' => array(
      'name' => t('Promo'),
      'base' => 'node_content',
      'description' => t('A promo that can be placed on different pages.'),
      'has_title' => '1',
      'title_label' => t('Page name'),
      'help' => '',
    ),
  );
  return $items;
}
