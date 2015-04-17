<?php
/**
 * @file
 * hk_ct_apart.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hk_ct_apart_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_5' => array(
      'name' => 'Fittings',
      'machine_name' => 'vocabulary_5',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
  );
}
