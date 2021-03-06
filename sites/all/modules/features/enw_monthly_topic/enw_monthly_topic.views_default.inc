<?php
/**
 * @file
 * enw_monthly_topic.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function enw_monthly_topic_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'monthly_topic';
  $view->description = '「環境節日」內容';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '環境節日';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '環境節日';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重設';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 欄位: 內容: 節日月份 */
  $handler->display->display_options['fields']['field_topic_month']['id'] = 'field_topic_month';
  $handler->display->display_options['fields']['field_topic_month']['table'] = 'field_data_field_topic_month';
  $handler->display->display_options['fields']['field_topic_month']['field'] = 'field_topic_month';
  $handler->display->display_options['fields']['field_topic_month']['label'] = '';
  $handler->display->display_options['fields']['field_topic_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic_month']['settings'] = array(
    'format_type' => 'enw_events_month',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* 欄位: 內容: 公仔 */
  $handler->display->display_options['fields']['field_doll']['id'] = 'field_doll';
  $handler->display->display_options['fields']['field_doll']['table'] = 'field_data_field_doll';
  $handler->display->display_options['fields']['field_doll']['field'] = 'field_doll';
  $handler->display->display_options['fields']['field_doll']['label'] = '';
  $handler->display->display_options['fields']['field_doll']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_doll']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doll']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doll']['settings'] = array(
    'image_style' => 'monthly_topic_thumbnail',
    'image_link' => '',
  );
  /* 欄位: 內容: 標題 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* 欄位: 內容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* 欄位: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_doll';
  $handler->display->display_options['fields']['colorbox']['popup'] = '<div class="field-doll">[field_doll]</div>
<h3>[title]</h3>
[body]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  /* Sort criterion: 內容: 節日月份 (field_topic_month) */
  $handler->display->display_options['sorts']['field_topic_month_value']['id'] = 'field_topic_month_value';
  $handler->display->display_options['sorts']['field_topic_month_value']['table'] = 'field_data_field_topic_month';
  $handler->display->display_options['sorts']['field_topic_month_value']['field'] = 'field_topic_month_value';
  /* Filter criterion: 內容: 已發表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 內容: 類型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'monthly_topic' => 'monthly_topic',
  );
  /* Filter criterion: 內容: 節日月份 (field_topic_month) */
  $handler->display->display_options['filters']['field_topic_month_value']['id'] = 'field_topic_month_value';
  $handler->display->display_options['filters']['field_topic_month_value']['table'] = 'field_data_field_topic_month';
  $handler->display->display_options['filters']['field_topic_month_value']['field'] = 'field_topic_month_value';
  $handler->display->display_options['filters']['field_topic_month_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_topic_month_value']['default_date'] = 'today';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'monthly-topics';
  $handler->display->display_options['menu']['title'] = '環境節日';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-secondary-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = '環境節日';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'pane');
  $handler->display->display_options['pane_category']['name'] = '環境通訊網';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Content pane: Latest */
  $handler = $view->new_display('panel_pane', 'Content pane: Latest', 'latest_pane');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 內容: 節日月份 (field_topic_month) */
  $handler->display->display_options['sorts']['field_topic_month_value']['id'] = 'field_topic_month_value';
  $handler->display->display_options['sorts']['field_topic_month_value']['table'] = 'field_data_field_topic_month';
  $handler->display->display_options['sorts']['field_topic_month_value']['field'] = 'field_topic_month_value';
  $handler->display->display_options['sorts']['field_topic_month_value']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = '環境通訊網';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Content pane: Thin */
  $handler = $view->new_display('panel_pane', 'Content pane: Thin', 'thin_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = '環境通訊網';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Content pane: Latest Thin */
  $handler = $view->new_display('panel_pane', 'Content pane: Latest Thin', 'thin_latest_pane');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_topic_month' => 'field_topic_month',
    'field_doll' => 'field_doll',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 欄位: 內容: 節日月份 */
  $handler->display->display_options['fields']['field_topic_month']['id'] = 'field_topic_month';
  $handler->display->display_options['fields']['field_topic_month']['table'] = 'field_data_field_topic_month';
  $handler->display->display_options['fields']['field_topic_month']['field'] = 'field_topic_month';
  $handler->display->display_options['fields']['field_topic_month']['label'] = '';
  $handler->display->display_options['fields']['field_topic_month']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic_month']['settings'] = array(
    'format_type' => 'long',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* 欄位: 內容: 公仔 */
  $handler->display->display_options['fields']['field_doll']['id'] = 'field_doll';
  $handler->display->display_options['fields']['field_doll']['table'] = 'field_data_field_doll';
  $handler->display->display_options['fields']['field_doll']['field'] = 'field_doll';
  $handler->display->display_options['fields']['field_doll']['label'] = '';
  $handler->display->display_options['fields']['field_doll']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doll']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doll']['settings'] = array(
    'image_style' => 'monthly_topic_thumbnail',
    'image_link' => 'content',
  );
  /* 欄位: 內容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: 內容: 節日月份 (field_topic_month) */
  $handler->display->display_options['sorts']['field_topic_month_value']['id'] = 'field_topic_month_value';
  $handler->display->display_options['sorts']['field_topic_month_value']['table'] = 'field_data_field_topic_month';
  $handler->display->display_options['sorts']['field_topic_month_value']['field'] = 'field_topic_month_value';
  $handler->display->display_options['sorts']['field_topic_month_value']['order'] = 'DESC';
  $handler->display->display_options['pane_category']['name'] = '環境通訊網';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['monthly_topic'] = array(
    t('Master'),
    t('環境節日'),
    t('more'),
    t('Apply'),
    t('重設'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
    t('Content pane'),
    t('環境通訊網'),
    t('Content pane: Latest'),
    t('Content pane: Thin'),
    t('Content pane: Latest Thin'),
  );
  $export['monthly_topic'] = $view;

  return $export;
}
