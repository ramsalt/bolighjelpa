<?php
/**
 * @author Alexis Wilke
 * @file
 * All settings functions for Addresses Internet module.
 */


/**
 * Print the Website field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_internet_website($afields) {
  $url = $afields['website'];
  if (substr($url, 0, 7) != 'http://' && substr($url, 0, 8) != 'https://') {
    $url = 'http://' . $url;
  }
  return '<span class="addresses-label">'. t('Website') .': </span><span class="addresses-website-address">'
    . l($url, $url, array('attributes' => array('target' => '_blank'))) .'</span><br/>';
}


/**
 * Print the contact email address field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_internet_contact_email($afields) {
  if (substr($afields['contact_email'], 0, 7) == 'mailto:') {
    $url = substr($afields['contact_email'], 7);
  }
  else {
    $url = $afields['contact_email'];
  }
  return '<span class="addresses-label">'. t('Email') .': </span><span class="addresses-email-address">'
    . l($url, 'mailto:' . $url) .'</span><br/>';
}


/**
 * Print the AIM field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_internet_aim($afields) {
  return '<dt>'. t('AIM') .': </dt><dd class="aim-address">'. check_plain($afields['aim']) .'</dd>';
}


/**
 * Print the Yahoo! IM field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_internet_yahoo_im($afields) {
  return '<dt>'. t('Yahoo! IM') .': </dt><dd class="yahoo-im">'. check_plain($afields['yahoo_im']) .'</dd>';
}

/**
 * Print the ICQ UIN field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_internet_icq_uin($afields) {
  return '<dt>'. t('ICQ UIN') .': </dt><dd class="icq-uin">'. check_plain($afields['icq_uin']) .'</dd>';
}

/**
 * Print the Jabber/Google Talk field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_internet_jabber($afields) {
  return '<dt>'. t('Jabber/Google Talk') .': </dt><dd class="jabber">'. check_plain($afields['jabber']) .'</dd>';
}

/**
 * Print the Skype field.
 *
 * @param $afields
 *   Array. All field values
 * @ingroup themeable
 */
function theme_addresses_internet_skype($afields) {
  return '<dt>'. t('Skype') .': </dt><dd class="skype">'. check_plain($afields['skype']) .'</dd>';
}

// vim: ts=2 sw=2 et syntax=php
