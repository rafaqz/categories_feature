<?php
/**
 * @file
 * off_categories_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function off_categories_feature_taxonomy_default_vocabularies() {
  return array(
    'categories' => array(
      'name' => 'Category',
      'machine_name' => 'categories',
      'description' => 'Add a categories to organise group content.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
