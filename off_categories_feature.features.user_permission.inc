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

  // Exported permission: 'add terms in category'.
  $permissions['add terms in category'] = array(
    'name' => 'add terms in category',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
