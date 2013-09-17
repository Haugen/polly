<?php
/**
 * @file
 * konzilo_pages.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function konzilo_pages_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__oembed';
  $file_display->weight = -47;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '705',
    'height' => '450',
    'wmode' => '',
  );
  $export['video__default__oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__oembed_thumbnail';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '180',
    'height' => '',
  );
  $export['video__default__oembed_thumbnail'] = $file_display;

  return $export;
}
