<?php
/**
 * @file
 * off_categories_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function off_categories_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_categories_pattern';
  $strongarm->value = '[term:og-group-ref:0:content-type]/[term:og-group-ref:0:title]/[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_categories_pattern'] = $strongarm;

  return $export;
}
