<?php

/**
 * @file
 * FooTable views hooks
 */

/**
 * Implements hook_views_plugins().
 */
function footable_views_plugins() {
  $path = drupal_get_path('module', 'footable') . '/views';
  return array(
    'module' => 'footable',
    'style' => array(
      'footable' => array(
        'title' => t('FooTable'),
        'help' => t('Displays rows in a responsive table, using the jQuery plugin FooTable.'),
        'path' => $path,
        'theme path' => $path,
        'handler' => 'footable_style_plugin',
        'parent' => 'table',
        'theme' => 'footable_view',
        'uses row plugin' => FALSE,
        'uses row class' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}
