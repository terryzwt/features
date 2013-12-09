<?php
/**
 * @file
 * anjuke_fetch.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function anjuke_fetch_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'house_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'house stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'house stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'field_image',
    'title' => 'title',
    'floor' => 'floor',
    'field_region' => 'field_region',
    'field_estate' => 'field_estate',
    'field_ad' => 'field_ad',
    'field_date' => 'field_date',
    'field_build_year' => 'field_build_year',
    'field_area' => 'field_area',
    'field_price' => 'field_price',
    'field_house_id' => 'field_house_id',
    'field_link' => 'field_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'floor' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_estate' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ad' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_build_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_house_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '图片';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: 区 */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: 小区 */
  $handler->display->display_options['fields']['field_estate']['id'] = 'field_estate';
  $handler->display->display_options['fields']['field_estate']['table'] = 'field_data_field_estate';
  $handler->display->display_options['fields']['field_estate']['field'] = 'field_estate';
  $handler->display->display_options['fields']['field_estate']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: 楼层 */
  $handler->display->display_options['fields']['field_floor']['id'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['table'] = 'field_data_field_floor';
  $handler->display->display_options['fields']['field_floor']['field'] = 'field_floor';
  $handler->display->display_options['fields']['field_floor']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: 总楼层 */
  $handler->display->display_options['fields']['field_total_floor']['id'] = 'field_total_floor';
  $handler->display->display_options['fields']['field_total_floor']['table'] = 'field_data_field_total_floor';
  $handler->display->display_options['fields']['field_total_floor']['field'] = 'field_total_floor';
  $handler->display->display_options['fields']['field_total_floor']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: 地址 */
  $handler->display->display_options['fields']['field_ad']['id'] = 'field_ad';
  $handler->display->display_options['fields']['field_ad']['table'] = 'field_data_field_ad';
  $handler->display->display_options['fields']['field_ad']['field'] = 'field_ad';
  /* Field: Content: 发布日期 */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: 建造年代 */
  $handler->display->display_options['fields']['field_build_year']['id'] = 'field_build_year';
  $handler->display->display_options['fields']['field_build_year']['table'] = 'field_data_field_build_year';
  $handler->display->display_options['fields']['field_build_year']['field'] = 'field_build_year';
  $handler->display->display_options['fields']['field_build_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: 面积 */
  $handler->display->display_options['fields']['field_area']['id'] = 'field_area';
  $handler->display->display_options['fields']['field_area']['table'] = 'field_data_field_area';
  $handler->display->display_options['fields']['field_area']['field'] = 'field_area';
  $handler->display->display_options['fields']['field_area']['label'] = '面积(平方米)';
  $handler->display->display_options['fields']['field_area']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_area']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: 报价 */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = '报价(万)';
  $handler->display->display_options['fields']['field_price']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: 房源编号 */
  $handler->display->display_options['fields']['field_house_id']['id'] = 'field_house_id';
  $handler->display->display_options['fields']['field_house_id']['table'] = 'field_data_field_house_id';
  $handler->display->display_options['fields']['field_house_id']['field'] = 'field_house_id';
  $handler->display->display_options['fields']['field_house_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: 链接 */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Content: 地图 */
  $handler->display->display_options['fields']['field_map']['id'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['table'] = 'field_data_field_map';
  $handler->display->display_options['fields']['field_map']['field'] = 'field_map';
  $handler->display->display_options['fields']['field_map']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'house' => 'house',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: 区 (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = '区';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'region';
  $handler->display->display_options['filters']['field_region_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: 小区 (field_estate) */
  $handler->display->display_options['filters']['field_estate_tid']['id'] = 'field_estate_tid';
  $handler->display->display_options['filters']['field_estate_tid']['table'] = 'field_data_field_estate';
  $handler->display->display_options['filters']['field_estate_tid']['field'] = 'field_estate_tid';
  $handler->display->display_options['filters']['field_estate_tid']['value'] = '';
  $handler->display->display_options['filters']['field_estate_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_estate_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_estate_tid']['expose']['operator_id'] = 'field_estate_tid_op';
  $handler->display->display_options['filters']['field_estate_tid']['expose']['label'] = '小区';
  $handler->display->display_options['filters']['field_estate_tid']['expose']['operator'] = 'field_estate_tid_op';
  $handler->display->display_options['filters']['field_estate_tid']['expose']['identifier'] = 'field_estate_tid';
  $handler->display->display_options['filters']['field_estate_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_estate_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_estate_tid']['vocabulary'] = 'estate';
  $handler->display->display_options['filters']['field_estate_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: 楼层 (field_floor) */
  $handler->display->display_options['filters']['field_floor_value']['id'] = 'field_floor_value';
  $handler->display->display_options['filters']['field_floor_value']['table'] = 'field_data_field_floor';
  $handler->display->display_options['filters']['field_floor_value']['field'] = 'field_floor_value';
  $handler->display->display_options['filters']['field_floor_value']['group'] = 1;
  $handler->display->display_options['filters']['field_floor_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_floor_value']['expose']['operator_id'] = 'field_floor_value_op';
  $handler->display->display_options['filters']['field_floor_value']['expose']['label'] = '楼层';
  $handler->display->display_options['filters']['field_floor_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_floor_value']['expose']['operator'] = 'field_floor_value_op';
  $handler->display->display_options['filters']['field_floor_value']['expose']['identifier'] = 'field_floor_value';
  $handler->display->display_options['filters']['field_floor_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: 总楼层 (field_total_floor) */
  $handler->display->display_options['filters']['field_total_floor_value']['id'] = 'field_total_floor_value';
  $handler->display->display_options['filters']['field_total_floor_value']['table'] = 'field_data_field_total_floor';
  $handler->display->display_options['filters']['field_total_floor_value']['field'] = 'field_total_floor_value';
  $handler->display->display_options['filters']['field_total_floor_value']['group'] = 1;
  $handler->display->display_options['filters']['field_total_floor_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_total_floor_value']['expose']['operator_id'] = 'field_total_floor_value_op';
  $handler->display->display_options['filters']['field_total_floor_value']['expose']['label'] = '总楼层';
  $handler->display->display_options['filters']['field_total_floor_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_total_floor_value']['expose']['operator'] = 'field_total_floor_value_op';
  $handler->display->display_options['filters']['field_total_floor_value']['expose']['identifier'] = 'field_total_floor_value';
  $handler->display->display_options['filters']['field_total_floor_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: 报价 (field_price) */
  $handler->display->display_options['filters']['field_price_value']['id'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['table'] = 'field_data_field_price';
  $handler->display->display_options['filters']['field_price_value']['field'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['group'] = 1;
  $handler->display->display_options['filters']['field_price_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_price_value']['expose']['operator_id'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['label'] = '报价';
  $handler->display->display_options['filters']['field_price_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_price_value']['expose']['operator'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['identifier'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: 发布日期 (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = '发布日期';
  $handler->display->display_options['filters']['field_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_date_value']['year_range'] = '-1:+3';
  /* Filter criterion: Content: 房源编号 (field_house_id) */
  $handler->display->display_options['filters']['field_house_id_value']['id'] = 'field_house_id_value';
  $handler->display->display_options['filters']['field_house_id_value']['table'] = 'field_data_field_house_id';
  $handler->display->display_options['filters']['field_house_id_value']['field'] = 'field_house_id_value';
  $handler->display->display_options['filters']['field_house_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_house_id_value']['expose']['operator_id'] = 'field_house_id_value_op';
  $handler->display->display_options['filters']['field_house_id_value']['expose']['label'] = '房源编号';
  $handler->display->display_options['filters']['field_house_id_value']['expose']['operator'] = 'field_house_id_value_op';
  $handler->display->display_options['filters']['field_house_id_value']['expose']['identifier'] = 'field_house_id_value';
  $handler->display->display_options['filters']['field_house_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'house-stats';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '房源信息';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['house_stats'] = $view;

  return $export;
}
