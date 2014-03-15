<?php
/**
 * @file
 * polly_base.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function polly_base_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'polly_file_content';
  $mini->category = 'Polly';
  $mini->admin_title = 'File content';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'File',
      'keyword' => 'file',
      'name' => 'entity:file',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'inline-text';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'inlinetext' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'inlinetext';
    $pane->type = 'entity_field';
    $pane->subtype = 'file:field_polly_file_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:file_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'file-description',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['inlinetext'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'inlinetext';
    $pane->type = 'entity_field';
    $pane->subtype = 'file:field_polly_file_credit';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:file_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'file-credit',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['inlinetext'][1] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'main';
    $pane->type = 'file_display';
    $pane->subtype = 'file_display';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'displays' => array(
        'file_field_file_audio' => array(
          'status' => 0,
          'weight' => '0',
          'settings' => array(
            'controls' => 1,
            'autoplay' => 0,
            'loop' => 0,
            'multiple_file_behavior' => 'tags',
          ),
        ),
        'file_field_file_download_link' => array(
          'status' => 0,
          'weight' => '0',
          'settings' => array(
            'text' => 'Download [file:name]',
          ),
        ),
        'file_field_file_default' => array(
          'status' => 0,
          'weight' => '0',
        ),
        'file_image' => array(
          'status' => 1,
          'weight' => '0',
          'settings' => array(
            'image_style' => 'full-100-percent',
            'alt' => '[file:field_file_image_alt_text]',
            'title' => '[file:field_file_image_title_text]',
          ),
        ),
        'file_field_image' => array(
          'status' => 0,
          'weight' => '0',
          'settings' => array(
            'image_style' => '',
            'image_link' => '',
          ),
        ),
        'file_field_media_large_icon' => array(
          'status' => 0,
          'weight' => '0',
        ),
        'file_field_panels_ref_ref_formatter_mini' => array(
          'status' => 0,
          'weight' => '0',
          'settings' => array(
            'mini_panel' => '',
            'language_filter' => 1,
            'cols' => '0',
          ),
        ),
        'oembed' => array(
          'status' => 0,
          'weight' => '0',
          'settings' => array(
            'width' => '560',
            'height' => '340',
            'wmode' => '',
          ),
        ),
        'oembed_image' => array(
          'status' => 0,
          'weight' => '0',
          'settings' => array(
            'image_style' => '',
            'alt' => '[file:field_file_image_alt_text]',
            'title' => '[file:field_file_image_title_text]',
          ),
        ),
        'oembed_thumbnail' => array(
          'status' => 0,
          'weight' => '0',
          'settings' => array(
            'width' => '180',
            'height' => '',
          ),
        ),
        'file_field_file_rendered' => array(
          'status' => 0,
          'weight' => '0',
          'settings' => array(
            'file_view_mode' => 'default',
          ),
        ),
        'file_field_file_table' => array(
          'status' => 0,
          'weight' => '0',
        ),
        'file_field_file_url_plain' => array(
          'status' => 0,
          'weight' => '0',
        ),
        'file_field_file_video' => array(
          'status' => 0,
          'weight' => '0',
          'settings' => array(
            'controls' => 1,
            'autoplay' => 0,
            'loop' => 0,
            'width' => '',
            'height' => '',
            'multiple_file_behavior' => 'tags',
          ),
        ),
      ),
      'context' => 'requiredcontext_entity:file_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'file-display',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['main'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3';
  $mini->display = $display;
  $export['polly_file_content'] = $mini;

  return $export;
}
