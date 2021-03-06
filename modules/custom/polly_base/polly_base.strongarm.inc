<?php
/**
 * @file
 * polly_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function polly_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, F j, Y - H:i';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'j F Y';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'Y-m-d H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_address';
  $strongarm->value = array(
    'value' => '<p><strong>How to find us</strong></p><p>420 Haight-Ashbury<br />San Francisco, CA 94117, USA</p>',
    'format' => 'wysiwyg',
  );
  $export['polly_page_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_contact';
  $strongarm->value = array(
    'value' => '<p><strong>Contact us</strong></p><p>e-mail: support@polly.org<br />phone: +46-31-517 300</p>',
    'format' => 'wysiwyg',
  );
  $export['polly_page_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_facebook';
  $strongarm->value = 'https://www.facebook.com/Kntnt.se';
  $export['polly_page_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_footer_bottom_left';
  $strongarm->value = array(
    'value' => '<p>Some handy info here</p>',
    'format' => 'wysiwyg',
  );
  $export['polly_page_footer_bottom_left'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_footer_bottom_right';
  $strongarm->value = array(
    'value' => '<p>License information to be written&nbsp;here. <a href="#">About cookies</a></p>',
    'format' => 'wysiwyg',
  );
  $export['polly_page_footer_bottom_right'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_googleplus';
  $strongarm->value = 'https://plus.google.com/u/1/+Kntnt/posts';
  $export['polly_page_googleplus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_instagram';
  $strongarm->value = 'http://instagram.com/kntnt_se';
  $export['polly_page_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_linkedin';
  $strongarm->value = 'http://se.linkedin.com/in/bobodrone/';
  $export['polly_page_linkedin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_logo';
  $strongarm->value = 'profiles/polly/themes/zilophy/logo.png';
  $export['polly_page_logo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_rss';
  $strongarm->value = '';
  $export['polly_page_rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'polly_page_twitter';
  $strongarm->value = 'http://twitter.com/kntnt_se';
  $export['polly_page_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = TRUE;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_zilophy_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'mothership_poorthemers_helper' => 0,
    'mothership_rebuild_registry' => 0,
    'mothership_test' => 0,
    'mothership_mediaquery_indicator' => 0,
    'mothership_script_place_footer' => 1,
    'mothership_js_onefile' => 0,
    'mothership_js_jquery_latest' => 0,
    'mothership_js_jquerycdn' => 0,
    'mothership_js_jquerycdn_version' => '0',
    'mothership_respondjs' => 1,
    'mothership_modernizr' => 0,
    'mothership_selectivizr' => 0,
    'mothership_js_nuke_module' => 0,
    'mothership_js_nuke_module_contrib' => 0,
    'mothership_js_nuke_misc' => 0,
    'mothership_js_freeform' => '',
    'mothership_css_onefile' => 0,
    'mothership_css_reset' => 0,
    'mothership_css_reset_html5' => 0,
    'mothership_css_normalize' => 0,
    'mothership_css_layout' => 0,
    'mothership_css_default' => 1,
    'mothership_css_mothershipstyles' => 0,
    'mothership_css_nuke_theme' => 0,
    'mothership_css_nuke_admin' => 0,
    'mothership_css_nuke_module_contrib' => 0,
    'mothership_css_nuke_module_all' => 0,
    'mothership_css_nuke_book' => 0,
    'mothership_css_nuke_systemtoolbar' => 0,
    'mothership_css_nuke_system_message' => 0,
    'mothership_css_nuke_system_menus' => 0,
    'mothership_css_nuke_system_theme' => 0,
    'mothership_css_freeform' => '',
    'mothership_classes_body_html' => 1,
    'mothership_classes_body_loggedin' => 1,
    'mothership_classes_body_front' => 0,
    'mothership_classes_body_layout' => 0,
    'mothership_classes_body_toolbar' => 0,
    'mothership_classes_body_pagenode' => 1,
    'mothership_classes_body_nodetype' => 0,
    'mothership_classes_body_path' => 1,
    'mothership_classes_body_path_first' => 0,
    'mothership_classes_body_status' => 0,
    'mothership_classes_body_freeform' => '',
    'mothership_region_wrapper' => 1,
    'mothership_classes_region' => 1,
    'mothership_classes_region_freeform' => '',
    'mothership_classes_block' => 1,
    'mothership_classes_block_id' => 1,
    'mothership_classes_block_id_as_class' => 0,
    'mothership_classes_block_contentdiv' => 1,
    'mothership_classes_block_freeform' => '',
    'mothership_classes_node' => 1,
    'mothership_classes_node_state' => 0,
    'mothership_classes_node_id' => 0,
    'mothership_classes_node_freeform' => '',
    'mothership_classes_node_links_inline' => 0,
    'mothership_classes_node_links_links' => 0,
    'mothership_classes_field_field' => 0,
    'mothership_classes_field_name' => 0,
    'mothership_classes_field_type' => 0,
    'mothership_classes_field_label' => 1,
    'mothership_classes_field_freeform' => '',
    'mothership_classes_form_container_wrapper' => 0,
    'mothership_classes_form_container_type' => 0,
    'mothership_classes_form_container_name' => 0,
    'mothership_classes_form_container_widget' => 0,
    'mothership_classes_form_container_id' => 0,
    'mothership_classes_form_wrapper_formitem' => 1,
    'mothership_classes_form_wrapper_formtype' => 0,
    'mothership_classes_form_wrapper_formname' => 1,
    'mothership_classes_form_freeform' => '',
    'mothership_classes_form_label' => 1,
    'mothership_classes_form_input' => 0,
    'mothership_form_required' => 1,
    'mothership_classes_form_description' => 1,
    'mothership_classes_form_placeholder_label' => 0,
    'mothership_classes_form_placeholder_link' => '',
    'mothership_classes_form_placeholder_email' => '',
    'mothership_classes_menu_items_mlid' => 1,
    'mothership_classes_menu_wrapper' => 1,
    'mothership_classes_menu_items_firstlast' => 1,
    'mothership_classes_menu_items_active' => 0,
    'mothership_classes_menu_collapsed' => 0,
    'mothership_classes_menu_leaf' => 1,
    'mothership_classes_view' => 1,
    'mothership_classes_view_name' => 1,
    'mothership_classes_view_view_id' => 0,
    'mothership_classes_view_row' => 1,
    'mothership_classes_view_row_count' => 1,
    'mothership_classes_view_row_first_last' => 1,
    'mothership_classes_view_row_rename' => 1,
    'panels_seperator' => 1,
    'mothership_classes_state' => 0,
    'mothership_404' => 0,
    'mothership_frontpage_default_message' => 1,
    'mothership_content_block_wrapper' => 1,
    'mothership_goodies_login' => 0,
    'mothership_mobile' => 1,
    'mothership_viewport' => 1,
    'mothership_viewport_maximumscale' => 0,
  );
  $export['theme_zilophy_settings'] = $strongarm;

  return $export;
}
