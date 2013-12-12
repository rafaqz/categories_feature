<?php
/**
 * @file
 * off_categories_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function off_categories_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: delete terms in 8.
  $permissions['delete terms in 8'] = array(
    'name' => 'delete terms in 8',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 8.
  $permissions['edit terms in 8'] = array(
    'name' => 'edit terms in 8',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
