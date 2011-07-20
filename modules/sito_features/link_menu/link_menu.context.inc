<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function link_menu_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = '';
  $context->tag = 'site';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-lenker' => array(
          'module' => 'menu',
          'delta' => 'menu-lenker',
          'region' => 'venstremeny',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('site');
  $export['site_wide'] = $context;

  return $export;
}
