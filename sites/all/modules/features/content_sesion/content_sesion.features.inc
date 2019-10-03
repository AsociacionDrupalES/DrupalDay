<?php

/**
 * @file
 * content_sesion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_sesion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_sesion_node_info() {
  $items = array(
    'sesion' => array(
      'name' => t('Sesión'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
