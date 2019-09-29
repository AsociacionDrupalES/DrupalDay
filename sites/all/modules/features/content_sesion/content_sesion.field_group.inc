<?php

/**
 * @file
 * content_sesion.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_sesion_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_informacion|node|sesion|form';
  $field_group->group_name = 'group_informacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sesion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informacion de sesion',
    'weight' => '3',
    'children' => array(
      0 => 'field_speaker',
      1 => 'field_files',
      2 => 'field_nivel_experiencia',
      3 => 'field_audiencia',
      4 => 'field_version_drupal',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Informacion de sesion',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_informacion|node|sesion|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Informacion de sesion');

  return $field_groups;
}
