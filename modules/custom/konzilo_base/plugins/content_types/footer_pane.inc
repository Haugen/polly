<?php

/**
 * @file
 * Content type plugin to render social links.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Footer pane'),
  'description' => t('Displays footer pane.'),
  'category' => 'Konzilo',
  'defaults' => array(),
);

/**
 * Renders social links pane.
 */
function konzilo_base_footer_pane_content_type_render($subtype, $conf, $panel_args, $context) {

  $logo = variable_get('konzilo_page_logo', '');
  $address = variable_get('konzilo_page_address', '');
  $contact = variable_get('konzilo_page_contact', '');
  $facebook = variable_get('konzilo_page_facebook', '');
  $twitter = variable_get('konzilo_page_twitter', '');
  $instagram = variable_get('konzilo_page_instagram', '');
  $linkedin = variable_get('konzilo_page_linkedin', '');
  $googleplus = variable_get('konzilo_page_googleplus', '');
  $rss = variable_get('konzilo_page_rss', '');

  $markup = '<div class="footer-container clearfix">';
  $markup .= '<span class="group group1">';
    $markup .= '<div class="logo footer-info"><img src="/' . $logo . '"></div>';
    $markup .= '<div class="address footer-info">' . check_markup($address['value'], $address['format']) . '</div>';
  $markup .= '</span>';

  $markup .= '<span class="group group2">';
    $markup .= '<div class="socialmedia footer-info">';
  $markup .= '<ul>';
  if ($facebook) {
    $markup .= '<li><a href="' . $facebook . '"><i class="icon icon-facebook"></i><span>Facebook</span></a></li>';
  }
  if ($twitter) {
    $markup .= '<li><a href="' . $twitter . '"><i class="icon icon-twitter"></i><span>Twitter</span></a></li>';
  }
  if ($instagram) {
    $markup .= '<li><a href="' . $instagram . '"><i class="icon icon-instagram"></i><span>Instagram</span></a></li>';
  }
  if ($linkedin) {
      $markup .= '<li><a href="' . $linkedin . '"><i class="icon icon-linkedin"></i><span>LinkedIn</span></a></li>';
  }
  if ($googleplus) {
      $markup .= '<li><a href="' . $googleplus . '"><i class="icon icon-google-plus"></i><span>Google+</span></a></li>';
  }
  if ($rss) {
      $markup .= '<li><a href="' . $rss . '"><i class="icon icon-rss"></i><span>RSS</span></a></li>';
  }

  $markup .= '</ul></div>';
  $markup .= '<div class="contact footer-info">' . check_markup($contact['value'], $contact['format']) . '</div>';
  $markup .= '</span></div>';

  $block = new stdClass();
  $block->module = 'konzilo_base';
  $block->delta = 0;
  $block->title = 'Promo icon pane';
  $block->content = array(
    '#markup' => $markup,
  );

  return $block;
}

/**
 * Settings form for social links pane.
 */
function konzilo_base_footer_pane_content_type_edit_form($form, &$form_state) {
  return $form;
}

function konzilo_base_footer_pane_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

function konzilo_base_footer_pane_content_type_admin_title($subtype, $conf, $context) {
  return t('Footer pane');
}