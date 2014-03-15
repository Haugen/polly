<?php

/**
 * @file
 * Definition of the 'naked' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('H2 title'),
  'description' => t('Display the pane with a h2 of  the field.'),
  'render pane' => 'h2_title_style_render_pane',
  'weight' => -5,
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_h2_title_style_render_pane($vars) {
  $content = $vars['content']->content;
  if (!is_array($content)) {
      return;
  }
  $classes = 'title';
  if (!empty($vars['pane']->css['css_class'])) {
    $classes .= ' ' . $vars['pane']->css['css_class'];
  }
  return '<h2 class="' . $classes . '">' . drupal_render($content[0]) . '</h2>';
}