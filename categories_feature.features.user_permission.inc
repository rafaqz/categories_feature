<?php
/**
 * @file
 * categories_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function categories_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in categories'.
  $permissions['add terms in categories'] = array(
    'name' => 'add terms in categories',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'delete terms in categories'.
  $permissions['delete terms in categories'] = array(
    'name' => 'delete terms in categories',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in categories'.
  $permissions['edit terms in categories'] = array(
    'name' => 'edit terms in categories',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
