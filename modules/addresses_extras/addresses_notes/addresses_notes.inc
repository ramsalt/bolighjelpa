<?php
/**
 * @author Alexis Wilke
 * @file
 * All settings functions for Addresses Notes module.
 */


/**
 * Print the Notes field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_notes_notes($afields) {
  return '<dt>'. t('Notes') .': </dt><dd class="notes-address">'. check_markup($afields['notes']) .'</dd>';
}

// vim: ts=2 sw=2 et syntax=php
