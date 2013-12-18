<?php
/**
 * @file
 * off_categories_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function off_categories_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:closed_group:update field_category field'
  $permissions['node:closed_group:update field_category field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:closed_group:view field_category field'
  $permissions['node:closed_group:view field_category field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update field_category field'
  $permissions['node:group:update field_category field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_category field'
  $permissions['node:group:view field_category field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
