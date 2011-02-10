<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function thacker_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: create dt_event content
  $permissions['create dt_event content'] = array(
    'name' => 'create dt_event content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own dt_event content
  $permissions['delete own dt_event content'] = array(
    'name' => 'delete own dt_event content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own dt_event content
  $permissions['edit own dt_event content'] = array(
    'name' => 'edit own dt_event content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
