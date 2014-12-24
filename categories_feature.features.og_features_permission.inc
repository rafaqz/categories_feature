<?php
/**
 * @file
 * categories_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function categories_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:closed_group:update field_categories field'
  $permissions['node:closed_group:update field_categories field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:closed_group:view field_categories field'
  $permissions['node:closed_group:view field_categories field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update field_categories field'
  $permissions['node:group:update field_categories field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_categories field'
  $permissions['node:group:view field_categories field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}
