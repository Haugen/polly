<?php
/**
 * @file
 * konzilo_base.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function konzilo_base_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $export['image__full__file_field_image'] = $file_display;

  return $export;
}
