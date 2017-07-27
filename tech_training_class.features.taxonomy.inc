<?php
/**
 * @file
 * tech_training_class.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tech_training_class_taxonomy_default_vocabularies() {
  return array(
    'class_categories' => array(
      'name' => 'Class Categories',
      'machine_name' => 'class_categories',
      'description' => 'Categories for Tech Training Classes',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'course_locations' => array(
      'name' => 'Class Locations',
      'machine_name' => 'course_locations',
      'description' => 'Locations for Tech Training Class',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
