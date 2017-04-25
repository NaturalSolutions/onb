<?php
/**
 * @file
 * onb_global.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function onb_global_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 2,
  );

  return $roles;
}
