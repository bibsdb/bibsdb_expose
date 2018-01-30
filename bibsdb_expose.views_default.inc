<?php
/**
 * @file
 * bibsdb_expose.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bibsdb_expose_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bibsdb_wall';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bibsdb_expose_exposures';
  $view->human_name = 'Bibsdb Wall';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty view';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Empty view';
  $handler->display->display_options['empty']['area']['format'] = 'html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_bibsdb_brick_content_target_id']['id'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['relationships']['field_bibsdb_brick_content_target_id']['table'] = 'field_data_field_bibsdb_brick_content';
  $handler->display->display_options['relationships']['field_bibsdb_brick_content_target_id']['field'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['relationships']['field_bibsdb_brick_content_target_id']['required'] = TRUE;
  /* Field: Exposure: Exposure ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'bibsdb_expose_exposures';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'bibsdb_wall_sorting_view:page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Exposure: Wall (field_bibsdb_wall) */
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['id'] = 'field_bibsdb_wall_tid';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['table'] = 'field_data_field_bibsdb_wall';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['field'] = 'field_bibsdb_wall_tid';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Exposure: Hosting node (field_bibsdb_hosting_node) */
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['id'] = 'field_bibsdb_hosting_node_target_id';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['table'] = 'field_data_field_bibsdb_hosting_node';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['field'] = 'field_bibsdb_hosting_node_target_id';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_bibsdb_wall');
  $handler->display->display_options['pane_category']['name'] = 'Bibsdb';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_bibsdb_wall_tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Exposure: Wall (field_bibsdb_wall)',
    ),
    'field_bibsdb_hosting_node_target_id' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Exposure: Hosting node (field_bibsdb_hosting_node)',
    ),
  );
  $translatables['bibsdb_wall'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Empty view'),
    t('Content entity referenced from field_bibsdb_brick_content'),
    t('Exposure ID'),
    t('.'),
    t(','),
    t('Alle'),
    t('Content pane'),
    t('more'),
    t('Bibsdb'),
  );
  $export['bibsdb_wall'] = $view;

  $view = new view();
  $view->name = 'bibsdb_wall_selection_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bibsdb Wall Selection View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bibsdb Wall Selection View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_ding_news_list_image' => 'field_ding_news_list_image',
    'field_ding_event_list_image' => 'field_ding_news_list_image',
    'field_bibsdb_new_materials_image' => 'field_ding_news_list_image',
    'field_search_context_list_image' => 'field_ding_news_list_image',
    'field_ding_page_list_image' => 'field_ding_news_list_image',
    'field_ding_group_list_image' => 'field_ding_news_list_image',
    'field_ding_eresource_list_image' => 'field_ding_news_list_image',
    'title' => 'title',
    'type' => 'type',
    'realname' => 'realname',
    'status' => 'status',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'clone_node' => 'clone_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_news_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_event_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bibsdb_new_materials_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_search_context_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_page_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_group_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_eresource_list_image' => array(
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
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'realname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'clone_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['label'] = 'Sorting view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'bibsdb_wall_sorting_view:page';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Tilføj indhold';
  $handler->display->display_options['header']['area']['content'] = '<hr/>
<h2>Tilføj indhold</h2>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::bibsdb_expose_vbo_expose' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: News List image */
  $handler->display->display_options['fields']['field_ding_news_list_image']['id'] = 'field_ding_news_list_image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['table'] = 'field_data_field_ding_news_list_image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['field'] = 'field_ding_news_list_image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['ui_name'] = 'News List image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_news_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_news_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_news_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Event List image */
  $handler->display->display_options['fields']['field_ding_event_list_image']['id'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['table'] = 'field_data_field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['field'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['ui_name'] = 'Event List image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_event_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: New Materials List Image */
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['id'] = 'field_bibsdb_new_materials_image';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['table'] = 'field_data_field_bibsdb_new_materials_image';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['field'] = 'field_bibsdb_new_materials_image';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['ui_name'] = 'New Materials List Image';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Search Context Link List Image */
  $handler->display->display_options['fields']['field_search_context_list_image']['id'] = 'field_search_context_list_image';
  $handler->display->display_options['fields']['field_search_context_list_image']['table'] = 'field_data_field_search_context_list_image';
  $handler->display->display_options['fields']['field_search_context_list_image']['field'] = 'field_search_context_list_image';
  $handler->display->display_options['fields']['field_search_context_list_image']['ui_name'] = 'Search Context Link List Image';
  $handler->display->display_options['fields']['field_search_context_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_search_context_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_search_context_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_search_context_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Page List image */
  $handler->display->display_options['fields']['field_ding_page_list_image']['id'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['table'] = 'field_data_field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['field'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['ui_name'] = 'Page List image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Group List image */
  $handler->display->display_options['fields']['field_ding_group_list_image']['id'] = 'field_ding_group_list_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['table'] = 'field_data_field_ding_group_list_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['field'] = 'field_ding_group_list_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['ui_name'] = 'Group List image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_group_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_group_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_group_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Eresource Logo */
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['id'] = 'field_ding_eresource_list_image';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['table'] = 'field_data_field_ding_eresource_list_image';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['field'] = 'field_ding_eresource_list_image';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['ui_name'] = 'Eresource Logo';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = 'Forfatter';
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Wall id */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['ui_name'] = 'Wall id';
  $handler->display->display_options['arguments']['null']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Hosting node */
  $handler->display->display_options['arguments']['null_1']['id'] = 'null_1';
  $handler->display->display_options['arguments']['null_1']['table'] = 'views';
  $handler->display->display_options['arguments']['null_1']['field'] = 'null';
  $handler->display->display_options['arguments']['null_1']['ui_name'] = 'Hosting node';
  $handler->display->display_options['arguments']['null_1']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['null_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null_1']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['relationship'] = 'uid';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Tags (field_ding_page_tags) */
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['id'] = 'field_ding_page_tags_tid';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['table'] = 'field_data_field_ding_page_tags';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['field'] = 'field_ding_page_tags_tid';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['value'] = array(
    61 => '61',
  );
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['expose']['operator_id'] = 'field_ding_page_tags_tid_op';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['expose']['label'] = 'Page Tag';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['expose']['operator'] = 'field_ding_page_tags_tid_op';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['expose']['identifier'] = 'field_ding_page_tags_tid';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['group_info']['label'] = 'Begræns til inspirationslister';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['group_info']['identifier'] = 'field_ding_page_tags_tid';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Inspirationslister',
      'operator' => 'or',
      'value' => array(
        61 => '61',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ding_page_tags_tid']['vocabulary'] = 'ding_content_tags';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/selection/wall/%';
  $translatables['bibsdb_wall_selection_view'] = array(
    t('Master'),
    t('Bibsdb Wall Selection View'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Sorting view'),
    t('Tilføj indhold'),
    t('<hr/>
<h2>Tilføj indhold</h2>'),
    t('author'),
    t('Content'),
    t('- Choose an operation -'),
    t('Title'),
    t('Type'),
    t('Forfatter'),
    t('Published'),
    t('Alle'),
    t('Udgivet'),
    t('Titel'),
    t('Navn'),
    t('Page Tag'),
    t('Begræns til inspirationslister'),
    t('Page'),
    t('more'),
  );
  $export['bibsdb_wall_selection_view'] = $view;

  $view = new view();
  $view->name = 'bibsdb_wall_sorting_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bibsdb_expose_exposures';
  $view->human_name = 'Bibsdb Wall Sorting View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bibsdb Wall Sorting View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = '[status_1]';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'field_ding_news_list_image' => 'field_ding_news_list_image',
    'field_search_context_list_image' => 'field_ding_news_list_image',
    'field_bibsdb_new_materials_image' => 'field_ding_news_list_image',
    'field_ding_page_list_image' => 'field_ding_news_list_image',
    'field_ding_event_list_image' => 'field_ding_news_list_image',
    'field_ding_group_list_image' => 'field_ding_news_list_image',
    'field_ding_eresource_list_image' => 'field_ding_news_list_image',
    'field_bibsdb_brick_content' => 'field_bibsdb_brick_content',
    'edit_node' => 'field_bibsdb_brick_content',
    'type' => 'type',
    'field_bibsdb_brick_type' => 'field_bibsdb_brick_type',
    'field_bibsdb_brick_color' => 'field_bibsdb_brick_color',
    'draggableviews' => 'draggableviews',
    'status' => 'status',
    'publish_on' => 'publish_on',
    'unpublish_on' => 'unpublish_on',
    'status_1' => 'status_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_news_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_search_context_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bibsdb_new_materials_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_page_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_event_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_group_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ding_eresource_list_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bibsdb_brick_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bibsdb_brick_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bibsdb_brick_color' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'publish_on' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'unpublish_on' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_bibsdb_brick_content_target_id']['id'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['relationships']['field_bibsdb_brick_content_target_id']['table'] = 'field_data_field_bibsdb_brick_content';
  $handler->display->display_options['relationships']['field_bibsdb_brick_content_target_id']['field'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['relationships']['field_bibsdb_brick_content_target_id']['required'] = TRUE;
  /* Field: Exposure: Exposure ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'bibsdb_expose_exposures';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: Bulk operations: Exposure */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'bibsdb_expose_exposures';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::bibsdb_expose_vbo_change_brick_type' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::bibsdb_expose_vbo_unexpose' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: News List Image */
  $handler->display->display_options['fields']['field_ding_news_list_image']['id'] = 'field_ding_news_list_image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['table'] = 'field_data_field_ding_news_list_image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['field'] = 'field_ding_news_list_image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['field_ding_news_list_image']['ui_name'] = 'News List Image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_news_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_news_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_news_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Search Context Link List Image */
  $handler->display->display_options['fields']['field_search_context_list_image']['id'] = 'field_search_context_list_image';
  $handler->display->display_options['fields']['field_search_context_list_image']['table'] = 'field_data_field_search_context_list_image';
  $handler->display->display_options['fields']['field_search_context_list_image']['field'] = 'field_search_context_list_image';
  $handler->display->display_options['fields']['field_search_context_list_image']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['field_search_context_list_image']['ui_name'] = 'Search Context Link List Image';
  $handler->display->display_options['fields']['field_search_context_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_search_context_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_search_context_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_search_context_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: New Materials List Image */
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['id'] = 'field_bibsdb_new_materials_image';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['table'] = 'field_data_field_bibsdb_new_materials_image';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['field'] = 'field_bibsdb_new_materials_image';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['ui_name'] = 'New Materials List Image';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['label'] = '';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bibsdb_new_materials_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Page List Image */
  $handler->display->display_options['fields']['field_ding_page_list_image']['id'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['table'] = 'field_data_field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['field'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['field_ding_page_list_image']['ui_name'] = 'Page List Image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Event List Image */
  $handler->display->display_options['fields']['field_ding_event_list_image']['id'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['table'] = 'field_data_field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['field'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['field_ding_event_list_image']['ui_name'] = 'Event List Image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_event_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Group List Image */
  $handler->display->display_options['fields']['field_ding_group_list_image']['id'] = 'field_ding_group_list_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['table'] = 'field_data_field_ding_group_list_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['field'] = 'field_ding_group_list_image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['field_ding_group_list_image']['ui_name'] = 'Group List Image';
  $handler->display->display_options['fields']['field_ding_group_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_group_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_group_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_group_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Eresorce logo */
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['id'] = 'field_ding_eresource_list_image';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['table'] = 'field_data_field_ding_eresource_list_image';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['field'] = 'field_ding_eresource_list_image';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['ui_name'] = 'Eresorce logo';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_eresource_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Exposure: Brick Content */
  $handler->display->display_options['fields']['field_bibsdb_brick_content']['id'] = 'field_bibsdb_brick_content';
  $handler->display->display_options['fields']['field_bibsdb_brick_content']['table'] = 'field_data_field_bibsdb_brick_content';
  $handler->display->display_options['fields']['field_bibsdb_brick_content']['field'] = 'field_bibsdb_brick_content';
  $handler->display->display_options['fields']['field_bibsdb_brick_content']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = ' (edit)';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_bibsdb_brick_content_target_id';
  /* Field: Exposure: Brick Type */
  $handler->display->display_options['fields']['field_bibsdb_brick_type']['id'] = 'field_bibsdb_brick_type';
  $handler->display->display_options['fields']['field_bibsdb_brick_type']['table'] = 'field_data_field_bibsdb_brick_type';
  $handler->display->display_options['fields']['field_bibsdb_brick_type']['field'] = 'field_bibsdb_brick_type';
  $handler->display->display_options['fields']['field_bibsdb_brick_type']['type'] = 'bibsdb_term_field_formatter';
  /* Field: Draggableviews: Exposure */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'bibsdb_expose_exposures';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Scheduler: Publish on */
  $handler->display->display_options['fields']['publish_on']['id'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['publish_on']['field'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['publish_on']['date_format'] = 'medium';
  $handler->display->display_options['fields']['publish_on']['second_date_format'] = 'ding_date_only';
  /* Field: Scheduler: Unpublish on */
  $handler->display->display_options['fields']['unpublish_on']['id'] = 'unpublish_on';
  $handler->display->display_options['fields']['unpublish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['unpublish_on']['field'] = 'unpublish_on';
  $handler->display->display_options['fields']['unpublish_on']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['unpublish_on']['date_format'] = 'medium';
  $handler->display->display_options['fields']['unpublish_on']['second_date_format'] = 'ding_date_only';
  /* Field: Source for published/unpublished css class  */
  $handler->display->display_options['fields']['status_1']['id'] = 'status_1';
  $handler->display->display_options['fields']['status_1']['table'] = 'node';
  $handler->display->display_options['fields']['status_1']['field'] = 'status';
  $handler->display->display_options['fields']['status_1']['relationship'] = 'field_bibsdb_brick_content_target_id';
  $handler->display->display_options['fields']['status_1']['ui_name'] = 'Source for published/unpublished css class ';
  $handler->display->display_options['fields']['status_1']['label'] = '';
  $handler->display->display_options['fields']['status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status_1']['type'] = 'custom';
  $handler->display->display_options['fields']['status_1']['type_custom_true'] = 'udgivet';
  $handler->display->display_options['fields']['status_1']['type_custom_false'] = 'unpublished';
  $handler->display->display_options['fields']['status_1']['not'] = 0;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'bibsdb_wall_sorting_view:page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Exposure: Wall (field_bibsdb_wall) */
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['id'] = 'field_bibsdb_wall_tid';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['table'] = 'field_data_field_bibsdb_wall';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['field'] = 'field_bibsdb_wall_tid';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['default_argument_options']['argument'] = 'Hej';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Exposure: Hosting node (field_bibsdb_hosting_node) */
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['id'] = 'field_bibsdb_hosting_node_target_id';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['table'] = 'field_data_field_bibsdb_hosting_node';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['field'] = 'field_bibsdb_hosting_node_target_id';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bibsdb_hosting_node_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/selection/wall';
  $translatables['bibsdb_wall_sorting_view'] = array(
    t('Master'),
    t('Bibsdb Wall Sorting View'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Content entity referenced from field_bibsdb_brick_content'),
    t('.'),
    t(','),
    t('Exposure'),
    t('- Choose an operation -'),
    t('Change color'),
    t('Brick Content'),
    t(' (edit)'),
    t('Type'),
    t('Brick Type'),
    t('Published'),
    t('Publish on'),
    t('Unpublish on'),
    t('udgivet'),
    t('unpublished'),
    t('Alle'),
    t('Page'),
    t('more'),
  );
  $export['bibsdb_wall_sorting_view'] = $view;

  return $export;
}
