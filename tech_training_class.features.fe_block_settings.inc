<?php
/**
 * @file
 * tech_training_class.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tech_training_class_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-class-block'] = array(
    'cache' => -1,
    'css_class' => 'well',
    'custom' => 0,
    'delta' => 'class-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'class',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_itservices',
        'weight' => 0,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
      'stanford_uit' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'stanford_uit',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-class_schedule-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'class_schedule-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'service/techtraining/schedule',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_itservices',
        'weight' => 0,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
      'stanford_uit' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'stanford_uit',
        'weight' => 0,
      ),
    ),
    'title' => 'Featured Classes',
    'visibility' => 1,
  );

  $export['views-class_schedule-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'class_schedule-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'service/techtraining/schedule',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_itservices',
        'weight' => 0,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
      'stanford_uit' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'stanford_uit',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-class_schedule-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'class_schedule-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'service/techtraining/class/*',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_itservices',
        'weight' => 0,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
      'stanford_uit' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'stanford_uit',
        'weight' => 5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-class_schedule-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'class_schedule-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_itservices',
        'weight' => 0,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
      'stanford_uit' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_uit',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
