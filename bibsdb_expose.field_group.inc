<?php
/**
 * @file
 * bibsdb_expose.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bibsdb_expose_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bibsdb_background_image|node|ding_news|form';
  $field_group->group_name = 'group_bibsdb_background_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_bibsdb_background_image|node|ding_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bibsdb_fact_box|node|ding_news|form';
  $field_group->group_name = 'group_bibsdb_fact_box';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_bibsdb_fact_box|node|ding_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bibsdb_wall|node|ding_group|form';
  $field_group->group_name = 'group_bibsdb_wall';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wall Titles',
    'weight' => '50',
    'children' => array(
      0 => 'field_bibsdb_wall_title_1',
      1 => 'field_bibsdb_wall_title_2',
      2 => 'field_bibsdb_wall_title_3',
      3 => 'field_bibsdb_wall_title_4',
      4 => 'field_bibsdb_wall_title_5',
      5 => 'field_bibsdb_wall_title_6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Wall Titles',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_bibsdb_wall|node|ding_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bibsdb_wall|node|ding_page|form';
  $field_group->group_name = 'group_bibsdb_wall';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wall titles',
    'weight' => '47',
    'children' => array(
      0 => 'field_bibsdb_wall_title_1',
      1 => 'field_bibsdb_wall_title_2',
      2 => 'field_bibsdb_wall_title_3',
      3 => 'field_bibsdb_wall_title_4',
      4 => 'field_bibsdb_wall_title_5',
      5 => 'field_bibsdb_wall_title_6',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Wall titles',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_bibsdb_wall|node|ding_page|form'] = $field_group;

  return $export;
}
