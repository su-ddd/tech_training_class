<?php
/**
 * @file
 * tech_training_class.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tech_training_class_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'class';
  $view->description = '';
  $view->tag = 'class';
  $view->base_table = 'node';
  $view->human_name = 'Class Registration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Class Registration';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Registration Link for University */
  $handler->display->display_options['fields']['field_class_su_registration']['id'] = 'field_class_su_registration';
  $handler->display->display_options['fields']['field_class_su_registration']['table'] = 'field_data_field_class_su_registration';
  $handler->display->display_options['fields']['field_class_su_registration']['field'] = 'field_class_su_registration';
  $handler->display->display_options['fields']['field_class_su_registration']['label'] = '';
  $handler->display->display_options['fields']['field_class_su_registration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_class_su_registration']['alter']['text'] = '<a href="[field_class_su_registration-url]" class="btn btn-request btn-block btn-large margin-top-20 margin-bottom-20">[field_class_su_registration-title]</a>';
  $handler->display->display_options['fields']['field_class_su_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_su_registration']['click_sort_column'] = 'url';
  /* Field: Content: Registration URL for Stanford Hospital Employees */
  $handler->display->display_options['fields']['field_class_shc_registration']['id'] = 'field_class_shc_registration';
  $handler->display->display_options['fields']['field_class_shc_registration']['table'] = 'field_data_field_class_shc_registration';
  $handler->display->display_options['fields']['field_class_shc_registration']['field'] = 'field_class_shc_registration';
  $handler->display->display_options['fields']['field_class_shc_registration']['label'] = '';
  $handler->display->display_options['fields']['field_class_shc_registration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_class_shc_registration']['alter']['text'] = '<a href="[field_class_shc_registration-url]" class="btn btn-launch btn-block btn-large margin-top-20 margin-bottom-20">[field_class_shc_registration-title]</a>';
  $handler->display->display_options['fields']['field_class_shc_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_shc_registration']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'class' => 'class',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Class Registration';
  $export['class'] = $view;

  $view = new view();
  $view->name = 'class_schedule';
  $view->description = '';
  $view->tag = 'class';
  $view->base_table = 'node';
  $view->human_name = 'Class Schedule';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Classes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Remove filters';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_class_code' => 'field_class_code',
    'field_class_start_date' => 'field_class_start_date',
    'field_class_date' => 'field_class_date',
    'field_class_start_date_1' => 'field_class_start_date_1',
    'field_class_cost' => 'field_class_cost',
  );
  $handler->display->display_options['style_options']['default'] = 'field_class_start_date';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class_start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class_date' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class_start_date_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class_cost' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No classes match your filter. Remove or modify some filters to try again.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Sessions (field_class_session) */
  $handler->display->display_options['relationships']['field_class_session_value']['id'] = 'field_class_session_value';
  $handler->display->display_options['relationships']['field_class_session_value']['table'] = 'field_data_field_class_session';
  $handler->display->display_options['relationships']['field_class_session_value']['field'] = 'field_class_session_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Class Code */
  $handler->display->display_options['fields']['field_class_code']['id'] = 'field_class_code';
  $handler->display->display_options['fields']['field_class_code']['table'] = 'field_data_field_class_code';
  $handler->display->display_options['fields']['field_class_code']['field'] = 'field_class_code';
  $handler->display->display_options['fields']['field_class_code']['label'] = 'Code';
  /* Field: Field collection item: Start Date */
  $handler->display->display_options['fields']['field_class_start_date']['id'] = 'field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date']['table'] = 'field_data_field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date']['field'] = 'field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['fields']['field_class_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_class_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_start_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_class_start_date']['settings'] = array(
    'format_type' => 'class_schedule_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field collection item: Additional Days */
  $handler->display->display_options['fields']['field_class_date']['id'] = 'field_class_date';
  $handler->display->display_options['fields']['field_class_date']['table'] = 'field_data_field_class_date';
  $handler->display->display_options['fields']['field_class_date']['field'] = 'field_class_date';
  $handler->display->display_options['fields']['field_class_date']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['fields']['field_class_date']['label'] = '';
  $handler->display->display_options['fields']['field_class_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_class_date']['alter']['text'] = '<li>[field_class_date]</li>';
  $handler->display->display_options['fields']['field_class_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_class_date']['settings'] = array(
    'format_type' => 'class_schedule_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_class_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_class_date']['separator'] = '<li></li>';
  /* Field: Field collection item: Start Date */
  $handler->display->display_options['fields']['field_class_start_date_1']['id'] = 'field_class_start_date_1';
  $handler->display->display_options['fields']['field_class_start_date_1']['table'] = 'field_data_field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date_1']['field'] = 'field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date_1']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['fields']['field_class_start_date_1']['label'] = 'Date';
  $handler->display->display_options['fields']['field_class_start_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_class_start_date_1']['alter']['text'] = '<ul><li>[field_class_start_date]</li>
[field_class_date]
</ul>';
  $handler->display->display_options['fields']['field_class_start_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_class_start_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field collection item: Cost */
  $handler->display->display_options['fields']['field_class_cost']['id'] = 'field_class_cost';
  $handler->display->display_options['fields']['field_class_cost']['table'] = 'field_data_field_class_cost';
  $handler->display->display_options['fields']['field_class_cost']['field'] = 'field_class_cost';
  $handler->display->display_options['fields']['field_class_cost']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['fields']['field_class_cost']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_class_cost']['alter']['text'] = '$[field_class_cost] ';
  $handler->display->display_options['fields']['field_class_cost']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_class_cost']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Field collection item: Additional Days -  start date (field_class_date) */
  $handler->display->display_options['sorts']['field_class_date_value']['id'] = 'field_class_date_value';
  $handler->display->display_options['sorts']['field_class_date_value']['table'] = 'field_data_field_class_date';
  $handler->display->display_options['sorts']['field_class_date_value']['field'] = 'field_class_date_value';
  $handler->display->display_options['sorts']['field_class_date_value']['relationship'] = 'field_class_session_value';
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
    'class' => 'class',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Classes';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Sessions (field_class_session) */
  $handler->display->display_options['relationships']['field_class_session_value']['id'] = 'field_class_session_value';
  $handler->display->display_options['relationships']['field_class_session_value']['table'] = 'field_data_field_class_session';
  $handler->display->display_options['relationships']['field_class_session_value']['field'] = 'field_class_session_value';
  $handler->display->display_options['relationships']['field_class_session_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Class Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    144 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
  );
  /* Filter criterion: Content: Category (field_class_category) */
  $handler->display->display_options['filters']['field_class_category_tid']['id'] = 'field_class_category_tid';
  $handler->display->display_options['filters']['field_class_category_tid']['table'] = 'field_data_field_class_category';
  $handler->display->display_options['filters']['field_class_category_tid']['field'] = 'field_class_category_tid';
  $handler->display->display_options['filters']['field_class_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_class_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['operator_id'] = 'field_class_category_tid_op';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['operator'] = 'field_class_category_tid_op';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['identifier'] = 'field_class_category_tid';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    144 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
  );
  $handler->display->display_options['filters']['field_class_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_class_category_tid']['vocabulary'] = 'class_categories';
  $handler->display->display_options['filters']['field_class_category_tid']['error_message'] = FALSE;
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
    'class' => 'class',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sessions (field_class_session) */
  $handler->display->display_options['filters']['field_class_session_value']['id'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_session_value']['table'] = 'field_data_field_class_session';
  $handler->display->display_options['filters']['field_class_session_value']['field'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_session_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_class_session_value']['group'] = 1;
  /* Filter criterion: Field collection item: Location (field_class_location) */
  $handler->display->display_options['filters']['field_class_location_tid']['id'] = 'field_class_location_tid';
  $handler->display->display_options['filters']['field_class_location_tid']['table'] = 'field_data_field_class_location';
  $handler->display->display_options['filters']['field_class_location_tid']['field'] = 'field_class_location_tid';
  $handler->display->display_options['filters']['field_class_location_tid']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['operator_id'] = 'field_class_location_tid_op';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['operator'] = 'field_class_location_tid_op';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['identifier'] = 'field_class_location_tid';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    144 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
  );
  $handler->display->display_options['filters']['field_class_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_class_location_tid']['vocabulary'] = 'course_locations';
  $handler->display->display_options['filters']['field_class_location_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'service/techtraining/schedule';

  /* Display: Featured Classes */
  $handler = $view->new_display('block', 'Featured Classes', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'class' => 'class',
  );
  /* Filter criterion: Content: Featured Class (field_class_featured) */
  $handler->display->display_options['filters']['field_class_featured_value']['id'] = 'field_class_featured_value';
  $handler->display->display_options['filters']['field_class_featured_value']['table'] = 'field_data_field_class_featured';
  $handler->display->display_options['filters']['field_class_featured_value']['field'] = 'field_class_featured_value';
  $handler->display->display_options['filters']['field_class_featured_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Sessions (field_class_session) */
  $handler->display->display_options['filters']['field_class_session_value']['id'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_session_value']['table'] = 'field_data_field_class_session';
  $handler->display->display_options['filters']['field_class_session_value']['field'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_session_value']['operator'] = 'not empty';
  /* Filter criterion: Field collection item: Start Date -  start date (field_class_start_date) */
  $handler->display->display_options['filters']['field_class_start_date_value']['id'] = 'field_class_start_date_value';
  $handler->display->display_options['filters']['field_class_start_date_value']['table'] = 'field_data_field_class_start_date';
  $handler->display->display_options['filters']['field_class_start_date_value']['field'] = 'field_class_start_date_value';
  $handler->display->display_options['filters']['field_class_start_date_value']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_class_start_date_value']['default_date'] = 'now';

  /* Display: Upcoming Classes */
  $handler = $view->new_display('block', 'Upcoming Classes', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Classes';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'class' => 'class',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    144 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
  );
  /* Filter criterion: Content: Category (field_class_category) */
  $handler->display->display_options['filters']['field_class_category_tid']['id'] = 'field_class_category_tid';
  $handler->display->display_options['filters']['field_class_category_tid']['table'] = 'field_data_field_class_category';
  $handler->display->display_options['filters']['field_class_category_tid']['field'] = 'field_class_category_tid';
  $handler->display->display_options['filters']['field_class_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['operator_id'] = 'field_class_category_tid_op';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['operator'] = 'field_class_category_tid_op';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['identifier'] = 'field_class_category_tid';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    144 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
  );
  $handler->display->display_options['filters']['field_class_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_class_category_tid']['vocabulary'] = 'class_categories';
  $handler->display->display_options['filters']['field_class_category_tid']['error_message'] = FALSE;
  /* Filter criterion: Field collection item: Location (field_class_location) */
  $handler->display->display_options['filters']['field_class_location_tid']['id'] = 'field_class_location_tid';
  $handler->display->display_options['filters']['field_class_location_tid']['table'] = 'field_data_field_class_location';
  $handler->display->display_options['filters']['field_class_location_tid']['field'] = 'field_class_location_tid';
  $handler->display->display_options['filters']['field_class_location_tid']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['operator_id'] = 'field_class_location_tid_op';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['operator'] = 'field_class_location_tid_op';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['identifier'] = 'field_class_location_tid';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    144 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
  );
  $handler->display->display_options['filters']['field_class_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_class_location_tid']['vocabulary'] = 'course_locations';
  $handler->display->display_options['filters']['field_class_location_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Sessions (field_class_session) */
  $handler->display->display_options['filters']['field_class_session_value']['id'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_session_value']['table'] = 'field_data_field_class_session';
  $handler->display->display_options['filters']['field_class_session_value']['field'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_session_value']['operator'] = 'not empty';
  /* Filter criterion: Field collection item: Start Date -  start date (field_class_start_date) */
  $handler->display->display_options['filters']['field_class_start_date_value']['id'] = 'field_class_start_date_value';
  $handler->display->display_options['filters']['field_class_start_date_value']['table'] = 'field_data_field_class_start_date';
  $handler->display->display_options['filters']['field_class_start_date_value']['field'] = 'field_class_start_date_value';
  $handler->display->display_options['filters']['field_class_start_date_value']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_class_start_date_value']['default_date'] = 'now';

  /* Display: Upcoming Sessions */
  $handler = $view->new_display('block', 'Upcoming Sessions', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Class Sessions';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Start Date */
  $handler->display->display_options['fields']['field_class_start_date']['id'] = 'field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date']['table'] = 'field_data_field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date']['field'] = 'field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['fields']['field_class_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_class_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_start_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_class_start_date']['settings'] = array(
    'format_type' => 'class_schedule_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field collection item: Additional Days */
  $handler->display->display_options['fields']['field_class_date']['id'] = 'field_class_date';
  $handler->display->display_options['fields']['field_class_date']['table'] = 'field_data_field_class_date';
  $handler->display->display_options['fields']['field_class_date']['field'] = 'field_class_date';
  $handler->display->display_options['fields']['field_class_date']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['fields']['field_class_date']['label'] = '';
  $handler->display->display_options['fields']['field_class_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_class_date']['alter']['text'] = '<li>[field_class_date]</li>';
  $handler->display->display_options['fields']['field_class_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_class_date']['settings'] = array(
    'format_type' => 'class_schedule_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_class_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_class_date']['separator'] = '<li></li>';
  /* Field: Field collection item: Start Date */
  $handler->display->display_options['fields']['field_class_start_date_1']['id'] = 'field_class_start_date_1';
  $handler->display->display_options['fields']['field_class_start_date_1']['table'] = 'field_data_field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date_1']['field'] = 'field_class_start_date';
  $handler->display->display_options['fields']['field_class_start_date_1']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['fields']['field_class_start_date_1']['label'] = 'Date';
  $handler->display->display_options['fields']['field_class_start_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_class_start_date_1']['alter']['text'] = '<ul><li>[field_class_start_date]</li>
[field_class_date]
</ul>';
  $handler->display->display_options['fields']['field_class_start_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_class_start_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field collection item: Cost */
  $handler->display->display_options['fields']['field_class_cost']['id'] = 'field_class_cost';
  $handler->display->display_options['fields']['field_class_cost']['table'] = 'field_data_field_class_cost';
  $handler->display->display_options['fields']['field_class_cost']['field'] = 'field_class_cost';
  $handler->display->display_options['fields']['field_class_cost']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['fields']['field_class_cost']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_class_cost']['alter']['text'] = '$[field_class_cost] ';
  $handler->display->display_options['fields']['field_class_cost']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_class_cost']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Upcoming Online Classes */
  $handler = $view->new_display('block', 'Upcoming Online Classes', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Classes';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'class' => 'class',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    144 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
  );
  /* Filter criterion: Content: Category (field_class_category) */
  $handler->display->display_options['filters']['field_class_category_tid']['id'] = 'field_class_category_tid';
  $handler->display->display_options['filters']['field_class_category_tid']['table'] = 'field_data_field_class_category';
  $handler->display->display_options['filters']['field_class_category_tid']['field'] = 'field_class_category_tid';
  $handler->display->display_options['filters']['field_class_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['operator_id'] = 'field_class_category_tid_op';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['operator'] = 'field_class_category_tid_op';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['identifier'] = 'field_class_category_tid';
  $handler->display->display_options['filters']['field_class_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    144 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
  );
  $handler->display->display_options['filters']['field_class_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_class_category_tid']['vocabulary'] = 'class_categories';
  $handler->display->display_options['filters']['field_class_category_tid']['error_message'] = FALSE;
  /* Filter criterion: Field collection item: Location (field_class_location) */
  $handler->display->display_options['filters']['field_class_location_tid']['id'] = 'field_class_location_tid';
  $handler->display->display_options['filters']['field_class_location_tid']['table'] = 'field_data_field_class_location';
  $handler->display->display_options['filters']['field_class_location_tid']['field'] = 'field_class_location_tid';
  $handler->display->display_options['filters']['field_class_location_tid']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_location_tid']['value'] = array(
    200 => '200',
  );
  $handler->display->display_options['filters']['field_class_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['operator_id'] = 'field_class_location_tid_op';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['operator'] = 'field_class_location_tid_op';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['identifier'] = 'field_class_location_tid';
  $handler->display->display_options['filters']['field_class_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    108 => 0,
    109 => 0,
    110 => 0,
    111 => 0,
    112 => 0,
    113 => 0,
    116 => 0,
    117 => 0,
    118 => 0,
    121 => 0,
    122 => 0,
    123 => 0,
    124 => 0,
    126 => 0,
    127 => 0,
    128 => 0,
    129 => 0,
    132 => 0,
    133 => 0,
    134 => 0,
    135 => 0,
    136 => 0,
    137 => 0,
    139 => 0,
    140 => 0,
    141 => 0,
    142 => 0,
    143 => 0,
    144 => 0,
    145 => 0,
    146 => 0,
    147 => 0,
    148 => 0,
  );
  $handler->display->display_options['filters']['field_class_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_class_location_tid']['vocabulary'] = 'course_locations';
  $handler->display->display_options['filters']['field_class_location_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Sessions (field_class_session) */
  $handler->display->display_options['filters']['field_class_session_value']['id'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_session_value']['table'] = 'field_data_field_class_session';
  $handler->display->display_options['filters']['field_class_session_value']['field'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_session_value']['operator'] = 'not empty';
  /* Filter criterion: Field collection item: Start Date -  start date (field_class_start_date) */
  $handler->display->display_options['filters']['field_class_start_date_value']['id'] = 'field_class_start_date_value';
  $handler->display->display_options['filters']['field_class_start_date_value']['table'] = 'field_data_field_class_start_date';
  $handler->display->display_options['filters']['field_class_start_date_value']['field'] = 'field_class_start_date_value';
  $handler->display->display_options['filters']['field_class_start_date_value']['relationship'] = 'field_class_session_value';
  $handler->display->display_options['filters']['field_class_start_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_class_start_date_value']['default_date'] = 'now';
  $handler->display->display_options['block_description'] = 'Upcoming Online Classes';
  $export['class_schedule'] = $view;

  return $export;
}
