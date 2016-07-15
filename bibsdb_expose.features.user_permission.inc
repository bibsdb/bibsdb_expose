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

  // Exported permission: 'access advanced_link autocomplete'.
  $permissions['access advanced_link autocomplete'] = array(
    'name' => 'access advanced_link autocomplete',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'advanced_link',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'administrators' => 'administrators',
      'local administrator' => 'local administrator',
    ),
    'module' => 'draggableviews',
  );

  return $permissions;
}
