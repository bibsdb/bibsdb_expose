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
  $view->name = 'bibsdb_content_wall';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bibsdb Content Wall';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Exposure referencing Content from field_bibsdb_brick_content */
  $handler->display->display_options['relationships']['reverse_field_bibsdb_brick_content_exposure']['id'] = 'reverse_field_bibsdb_brick_content_exposure';
  $handler->display->display_options['relationships']['reverse_field_bibsdb_brick_content_exposure']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_bibsdb_brick_content_exposure']['field'] = 'reverse_field_bibsdb_brick_content_exposure';
  $handler->display->display_options['relationships']['reverse_field_bibsdb_brick_content_exposure']['ui_name'] = 'Exposure referencing Content from field_bibsdb_brick_content';
  $handler->display->display_options['relationships']['reverse_field_bibsdb_brick_content_exposure']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'reverse_field_bibsdb_brick_content_exposure';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'bibsdb_wall_sorting_view:page';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Exposure: Wall (field_bibsdb_wall) */
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['id'] = 'field_bibsdb_wall_tid';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['table'] = 'field_data_field_bibsdb_wall';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['field'] = 'field_bibsdb_wall_tid';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['relationship'] = 'reverse_field_bibsdb_brick_content_exposure';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Bibsdb Content Wall */
  $handler = $view->new_display('panel_pane', 'Bibsdb Content Wall', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Bibsdb Content Wall';
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
  );
  $translatables['bibsdb_content_wall'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Exposure referencing Content from field_bibsdb_brick_content'),
    t('All'),
    t('Bibsdb Content Wall'),
    t('Bibsdb'),
  );
  $export['bibsdb_content_wall'] = $view;

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
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
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
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'bibsdb_expose_exposures';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Fjern fra listen',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Skift brick type',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'exposure::field_bibsdb_brick_type' => 'exposure::field_bibsdb_brick_type',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Exposure: Brick Content */
  $handler->display->display_options['fields']['field_bibsdb_brick_content']['id'] = 'field_bibsdb_brick_content';
  $handler->display->display_options['fields']['field_bibsdb_brick_content']['table'] = 'field_data_field_bibsdb_brick_content';
  $handler->display->display_options['fields']['field_bibsdb_brick_content']['field'] = 'field_bibsdb_brick_content';
  $handler->display->display_options['fields']['field_bibsdb_brick_content']['settings'] = array(
    'link' => 0,
  );
  /* Field: Exposure: Brick Type */
  $handler->display->display_options['fields']['field_bibsdb_brick_type']['id'] = 'field_bibsdb_brick_type';
  $handler->display->display_options['fields']['field_bibsdb_brick_type']['table'] = 'field_data_field_bibsdb_brick_type';
  $handler->display->display_options['fields']['field_bibsdb_brick_type']['field'] = 'field_bibsdb_brick_type';
  $handler->display->display_options['fields']['field_bibsdb_brick_type']['type'] = 'taxonomy_term_reference_plain';
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
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
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
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bibsdb_wall_tid']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/sorting/wall';
  $translatables['bibsdb_wall_sorting_view'] = array(
    t('Master'),
    t('Bibsdb Wall Sorting View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_bibsdb_brick_content'),
    t('.'),
    t(','),
    t('- Choose an operation -'),
    t('Fjern fra listen'),
    t('Skift brick type'),
    t('Brick Content'),
    t('Brick Type'),
    t('Exposure'),
    t('Published'),
    t('Publish on'),
    t('Unpublish on'),
    t('All'),
    t('Page'),
  );
  $export['bibsdb_wall_sorting_view'] = $view;

  return $export;
}
