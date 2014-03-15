<?php

/**
 * @file
 * Definition of the 'naked' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('H1 title'),
  'description' => t('Display the pane with a h1 of  the field.'),
  'render pane' => 'h1_title_style_render_pane',
  'weight' => -5,
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_h1_title_style_render_pane($vars) {
  $content = $vars['content']->content;
  if (!is_array($content)) {
    return;
  }
  $classes = 'title';
  if (!empty($vars['pane']->css['css_class'])) {
    $classes .= ' ' . $vars['pane']->css['css_class'];
  }
  $markup = drupal_render($content[0]);
  return '<h1 class="' . $classes . '">' . $markup . '</h1>';
}