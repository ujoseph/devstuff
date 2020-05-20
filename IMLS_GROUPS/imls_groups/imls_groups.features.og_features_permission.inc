<?php

/**
 * @file
 * imls_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function imls_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:community:add user'
  $permissions['node:community:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:administer group'
  $permissions['node:community:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community:approve and deny subscription'
  $permissions['node:community:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:create document content'
  $permissions['node:community:create document content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:create group_event content'
  $permissions['node:community:create group_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:create group_post content'
  $permissions['node:community:create group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:delete any document content'
  $permissions['node:community:delete any document content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:delete any group_event content'
  $permissions['node:community:delete any group_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:delete any group_post content'
  $permissions['node:community:delete any group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:delete own document content'
  $permissions['node:community:delete own document content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:delete own group_event content'
  $permissions['node:community:delete own group_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:delete own group_post content'
  $permissions['node:community:delete own group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:manage members'
  $permissions['node:community:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:manage permissions'
  $permissions['node:community:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community:manage roles'
  $permissions['node:community:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community:subscribe'
  $permissions['node:community:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community:subscribe without approval'
  $permissions['node:community:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community:unsubscribe'
  $permissions['node:community:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community:update any document content'
  $permissions['node:community:update any document content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:update any group_event content'
  $permissions['node:community:update any group_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:update any group_post content'
  $permissions['node:community:update any group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:update group'
  $permissions['node:community:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:update own document content'
  $permissions['node:community:update own document content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:update own group_event content'
  $permissions['node:community:update own group_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:update own group_post content'
  $permissions['node:community:update own group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
