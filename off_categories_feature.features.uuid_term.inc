<?php
/**
 * @file
 * off_categories_feature.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function off_categories_feature_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Open Food Foundation',
    'description' => '',
    'format' => 'wiki',
    'weight' => 0,
    'uuid' => '7a932416-f918-4132-8473-a73003313b74',
    'vocabulary_machine_name' => 'category',
    'og_group_ref' => array(),
  );
  $terms[] = array(
    'name' => 'Delivery',
    'description' => '',
    'format' => 'wiki',
    'weight' => 0,
    'uuid' => '89a377e1-050a-42b1-ac91-b712ba8a825e',
    'vocabulary_machine_name' => 'category',
    'og_group_ref' => array(),
    'parent' => array(
      0 => '7a932416-f918-4132-8473-a73003313b74',
    ),
  );
  return $terms;
}
