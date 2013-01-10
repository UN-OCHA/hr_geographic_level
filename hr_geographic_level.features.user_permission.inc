<?php
/**
 * @file
 * hr_geographic_level.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_geographic_level_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer geographic_level vocabulary terms.
  $permissions['administer geographic_level vocabulary terms'] = array(
    'name' => 'administer geographic_level vocabulary terms',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'vppr',
  );

  return $permissions;
}
