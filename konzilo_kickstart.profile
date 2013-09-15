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
function konzilo_kickstart_install_tasks(&$install_state) {
  // Indicate to default config that we want to handle this ourselves.
  variable_get('defaultconfig_site_install', FALSE);
  return array(
    'konzilo_kickstart_finish' => array(
      'display_name' => st('Apply configuration'),
      'display' => TRUE,
      'type' => 'batch',
    ),
  );
}

/**
 * Implements hook_defaultconfig_site_install().
 */
function konzilo_kickstart_defaultconfig_site_install() {
  // We want to handle installation of configuration ourselves.
  return FALSE;
}

/**
 * Apply configuration for default config.
 */
function konzilo_kickstart_finish() {
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
function konzilo_kickstart_wysiwyg_editor_settings_alter(&$settings, $context) {
  if ($context['profile']->editor == 'ckeditor') {
    $settings['allowedContent'] = TRUE;

    // Use justify classes instead of inline css.
    $settings['justifyClasses'] = array(
      'align-left',
      'align-center',
      'align-right',
      'align-justify',
    );

    // Use indent classes instead of inline css.
    $settings['indentClasses'] = array(
      'indent-1',
      'indent-2',
      'indent-3',
      'indent-4',
    );
  }
}