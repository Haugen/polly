<?php

/**
 * @file
 * Content type plugin to render social links.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Footer bottom pane'),
  'description' => t('Displays footer bottom pane.'),
  'category' => 'Konzilo',
  'defaults' => array(),
);

/**
 * Renders social links pane.
 */
function konzilo_base_footer_bottom_pane_content_type_render($subtype, $conf, $panel_args, $context) {


  $konzilo_page_footer_bottom_left = variable_get('konzilo_page_footer_bottom_left');
  $konzilo_page_footer_bottom_right = variable_get('konzilo_page_footer_bottom_right');

  $markup = '<div class="footer-bottom-container">';
  $markup .= '<span class="left">' . check_markup($konzilo_page_footer_bottom_left['value'], $konzilo_page_footer_bottom_left['format']) . '</span>';
  $markup .= '<span class="right">' . check_markup($konzilo_page_footer_bottom_right['value'], $konzilo_page_footer_bottom_right['format']) . '</span>';
  $markup .= '</div>';

  $block = new stdClass();
  $block->module = 'konzilo_base';
  $block->delta = 0;
  $block->title = 'Footer bottom pane';
  $block->content = array(
    '#markup' => $markup,
  );

  return $block;
}

/**
 * Settings form for social links pane.
 */
function konzilo_base_footer_bottom_pane_content_type_edit_form($form, &$form_state) {
  return $form;
}

function konzilo_base_footer_bottom_pane_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

function konzilo_base_footer_bottom_pane_content_type_admin_title($subtype, $conf, $context) {
  return t('Footer bottom pane');
}