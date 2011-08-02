<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function primary_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: primary-links
  $menus['primary-links'] = array(
    'menu_name' => 'primary-links',
    'title' => 'Primærlenker',
    'description' => 'Primærlenker brukes ofte av utseendemaler til å vise hovedseksjonene på et nettsted. En typisk måte å vise primærlenker er som faneblad langs toppen av siden.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Primærlenker');
  t('Primærlenker brukes ofte av utseendemaler til å vise hovedseksjonene på et nettsted. En typisk måte å vise primærlenker er som faneblad langs toppen av siden.');


  return $menus;
}
