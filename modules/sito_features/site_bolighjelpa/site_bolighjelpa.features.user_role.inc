<?php

/**
 * Implementation of hook_user_default_roles().
 */
function site_bolighjelpa_user_default_roles() {
  $roles = array();

  // Exported role: Admin
  $roles['Admin'] = array(
    'name' => 'Admin',
  );

  return $roles;
}
