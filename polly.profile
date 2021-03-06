<?php
/**
 * @file
 * Example profile file.
 */

/**
 * Implements hook_install_tasks().
 * NodeStream uses default config, which requires an install task
 * to install default components in the end of the process.
 * This is necessary since a lot of components needs
 * to have everything in place before import can be run safely.
 */
function polly_install_tasks(&$install_state) {
  // Indicate to default config that we want to handle this ourselves.
  variable_get('defaultconfig_site_install', FALSE);
  return array(
    'polly_finish' => array(
      'display_name' => st('Apply configuration'),
      'display' => TRUE,
      'type' => 'batch',
    ),
  );
}

/**
 * Implements hook_defaultconfig_site_install().
 */
function polly_defaultconfig_site_install() {
  // We want to handle installation of configuration ourselves.
  return FALSE;
}

/**
 * Apply configuration for default config.
 */
function polly_finish() {
  // Rebuild default components.
  if (module_exists('defaultconfig')) {
    drupal_flush_all_caches();
    module_list(TRUE);
    return defaultconfig_rebuild_batch_defintion(
      st('Apply configuration'),
      st('The installation encountered an error')
    );
  }
  // Remove the variable as it's no longer necessary.
  variable_del('defaultconfig_site_install');


  return array();
}

/**
 * Implements hook_wysiwyg_editor_settings_alter().
 */
function polly_wysiwyg_editor_settings_alter(&$settings, $context) {
  if ($context['profile']->editor == 'ckeditor') {
    $settings['allowedContent'] = TRUE;
  }
}
