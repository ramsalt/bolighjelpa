<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function link_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-lenker
  $menus['menu-lenker'] = array(
    'menu_name' => 'menu-lenker',
    'title' => 'Lenker',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Lenker');


  return $menus;
}
