<?php
/**
 * @author Alexis Wilke
 * @file
 * All settings functions for Addresses Names module.
 */


/**
 * Print the First Name field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_names_first_name($afields) {
  return '<dt>'. t('First Name') .': </dt><dd class="first-name-address">'. check_plain($afields['first_name']) ."</dd>\n";
}


/**
 * Print the Last Name field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_names_last_name($afields) {
  return '<dt>'. t('Last Name') .': </dt><dd class="last-name-address">'. check_plain($afields['last_name']) ."</dd>\n";
}


/**
 * Print the Full Name field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_names_fullname($afields) {
  return '<dt>'. t('Fullname') .': </dt><dd class="fullname-address">'. check_plain($afields['first_name']) .' '. check_plain($afields['last_name']) ."</dd>\n";
}


/**
 * Print the Alias field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_names_alias($afields) {
  return '<dt>'. t('Alias') .': </dt><dd class="alias-address">'. check_plain($afields['alias']) ."</dd>\n";
}


/**
 * Print the Business Name field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_names_business($afields) {
  return '<dt>'. t('Business Name') .': </dt><dd class="business-address">'. check_plain($afields['business']) ."</dd>\n";
}


/**
 * Print the Business Category field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_names_bizcategory($afields) {
  return '<dt>'. t('Category') .': </dt><dd class="bizcategory-address">'. check_plain($afields['bizcategory']) ."</dd>\n";
}

// vim: ts=2 sw=2 et syntax=php
