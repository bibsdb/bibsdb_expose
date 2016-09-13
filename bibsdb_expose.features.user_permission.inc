<?php
/**
 * @file
 * bibsdb_expose.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibsdb_expose_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'administrators' => 'administrators',
      'local administrator' => 'local administrator',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'create bibsdb_link_collection content'.
  $permissions['create bibsdb_link_collection content'] = array(
    'name' => 'create bibsdb_link_collection content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any bibsdb_link_collection content'.
  $permissions['delete any bibsdb_link_collection content'] = array(
    'name' => 'delete any bibsdb_link_collection content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own bibsdb_link_collection content'.
  $permissions['delete own bibsdb_link_collection content'] = array(
    'name' => 'delete own bibsdb_link_collection content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any bibsdb_link_collection content'.
  $permissions['edit any bibsdb_link_collection content'] = array(
    'name' => 'edit any bibsdb_link_collection content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own bibsdb_link_collection content'.
  $permissions['edit own bibsdb_link_collection content'] = array(
    'name' => 'edit own bibsdb_link_collection content',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'set bibsdb_link_collection published on date'.
  $permissions['set bibsdb_link_collection published on date'] = array(
    'name' => 'set bibsdb_link_collection published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  return $permissions;
}
