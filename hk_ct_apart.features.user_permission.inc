<?php
/**
 * @file
 * hk_ct_apart.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hk_ct_apart_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create apartment content'.
  $permissions['create apartment content'] = array(
    'name' => 'create apartment content',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any apartment content'.
  $permissions['delete any apartment content'] = array(
    'name' => 'delete any apartment content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own apartment content'.
  $permissions['delete own apartment content'] = array(
    'name' => 'delete own apartment content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any apartment content'.
  $permissions['edit any apartment content'] = array(
    'name' => 'edit any apartment content',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own apartment content'.
  $permissions['edit own apartment content'] = array(
    'name' => 'edit own apartment content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag merken'.
  $permissions['flag merken'] = array(
    'name' => 'flag merken',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag merken'.
  $permissions['unflag merken'] = array(
    'name' => 'unflag merken',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
