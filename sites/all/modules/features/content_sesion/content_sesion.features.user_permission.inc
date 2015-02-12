<?php
/**
 * @file
 * content_sesion.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_sesion_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_estado_sesion'.
  $permissions['create field_estado_sesion'] = array(
    'name' => 'create field_estado_sesion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create sesion content'.
  $permissions['create sesion content'] = array(
    'name' => 'create sesion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sesion content'.
  $permissions['delete any sesion content'] = array(
    'name' => 'delete any sesion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sesion content'.
  $permissions['delete own sesion content'] = array(
    'name' => 'delete own sesion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sesion content'.
  $permissions['edit any sesion content'] = array(
    'name' => 'edit any sesion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_estado_sesion'.
  $permissions['edit field_estado_sesion'] = array(
    'name' => 'edit field_estado_sesion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_estado_sesion'.
  $permissions['edit own field_estado_sesion'] = array(
    'name' => 'edit own field_estado_sesion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own sesion content'.
  $permissions['edit own sesion content'] = array(
    'name' => 'edit own sesion content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view field_estado_sesion'.
  $permissions['view field_estado_sesion'] = array(
    'name' => 'view field_estado_sesion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_estado_sesion'.
  $permissions['view own field_estado_sesion'] = array(
    'name' => 'view own field_estado_sesion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
