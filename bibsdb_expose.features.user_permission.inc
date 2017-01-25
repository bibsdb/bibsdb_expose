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

  return $permissions;
}
