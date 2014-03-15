<?php
/**
 * @file
 * polly_article.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function polly_article_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'polly_article';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'polly_article';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'article-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No articles';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No articles yet!';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_polly_author_target_id']['id'] = 'field_polly_author_target_id';
  $handler->display->display_options['relationships']['field_polly_author_target_id']['table'] = 'field_data_field_polly_author';
  $handler->display->display_options['relationships']['field_polly_author_target_id']['field'] = 'field_polly_author_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Files */
  $handler->display->display_options['fields']['field_polly_file']['id'] = 'field_polly_file';
  $handler->display->display_options['fields']['field_polly_file']['table'] = 'field_data_field_polly_file';
  $handler->display->display_options['fields']['field_polly_file']['field'] = 'field_polly_file';
  $handler->display->display_options['fields']['field_polly_file']['label'] = '';
  $handler->display->display_options['fields']['field_polly_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_polly_file']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_polly_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_polly_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_polly_file']['type'] = 'panels_ref_ref_formatter_mini';
  $handler->display->display_options['fields']['field_polly_file']['settings'] = array(
    'mini_panel' => 'polly_file_content',
    'language_filter' => 1,
    'cols' => '0',
  );
  $handler->display->display_options['fields']['field_polly_file']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_polly_file']['delta_offset'] = '0';
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_polly_headline']['id'] = 'field_polly_headline';
  $handler->display->display_options['fields']['field_polly_headline']['table'] = 'field_data_field_polly_headline';
  $handler->display->display_options['fields']['field_polly_headline']['field'] = 'field_polly_headline';
  $handler->display->display_options['fields']['field_polly_headline']['label'] = '';
  $handler->display->display_options['fields']['field_polly_headline']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_polly_headline']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_polly_headline']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_polly_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_polly_headline']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_polly_author_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'By [title_1] @ [created]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_wrapper_class'] = 'author-date';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_polly_body']['id'] = 'field_polly_body';
  $handler->display->display_options['fields']['field_polly_body']['table'] = 'field_data_field_polly_body';
  $handler->display->display_options['fields']['field_polly_body']['field'] = 'field_polly_body';
  $handler->display->display_options['fields']['field_polly_body']['label'] = '';
  $handler->display->display_options['fields']['field_polly_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_polly_body']['element_wrapper_class'] = 'body body-summary';
  $handler->display->display_options['fields']['field_polly_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_polly_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_polly_body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'read-more';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'polly_article' => 'polly_article',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['polly_article'] = $view;

  return $export;
}
