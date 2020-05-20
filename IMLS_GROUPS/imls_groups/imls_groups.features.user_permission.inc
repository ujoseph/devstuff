<?php

/**
 * @file
 * imls_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imls_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create community content'.
  $permissions['create community content'] = array(
    'name' => 'create community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create document content'.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create group_content_access'.
  $permissions['create group_content_access'] = array(
    'name' => 'create group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create group_event content'.
  $permissions['create group_event content'] = array(
    'name' => 'create group_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create group_post content'.
  $permissions['create group_post content'] = array(
    'name' => 'create group_post content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any community content'.
  $permissions['delete any community content'] = array(
    'name' => 'delete any community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any document content'.
  $permissions['delete any document content'] = array(
    'name' => 'delete any document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any group_event content'.
  $permissions['delete any group_event content'] = array(
    'name' => 'delete any group_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any group_post content'.
  $permissions['delete any group_post content'] = array(
    'name' => 'delete any group_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own community content'.
  $permissions['delete own community content'] = array(
    'name' => 'delete own community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own document content'.
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group_event content'.
  $permissions['delete own group_event content'] = array(
    'name' => 'delete own group_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group_post content'.
  $permissions['delete own group_post content'] = array(
    'name' => 'delete own group_post content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any community content'.
  $permissions['edit any community content'] = array(
    'name' => 'edit any community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any document content'.
  $permissions['edit any document content'] = array(
    'name' => 'edit any document content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any group_event content'.
  $permissions['edit any group_event content'] = array(
    'name' => 'edit any group_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any group_post content'.
  $permissions['edit any group_post content'] = array(
    'name' => 'edit any group_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit group_content_access'.
  $permissions['edit group_content_access'] = array(
    'name' => 'edit group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own community content'.
  $permissions['edit own community content'] = array(
    'name' => 'edit own community content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own document content'.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group_content_access'.
  $permissions['edit own group_content_access'] = array(
    'name' => 'edit own group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own group_event content'.
  $permissions['edit own group_event content'] = array(
    'name' => 'edit own group_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group_post content'.
  $permissions['edit own group_post content'] = array(
    'name' => 'edit own group_post content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view group_content_access'.
  $permissions['view group_content_access'] = array(
    'name' => 'view group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own group_content_access'.
  $permissions['view own group_content_access'] = array(
    'name' => 'view own group_content_access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
