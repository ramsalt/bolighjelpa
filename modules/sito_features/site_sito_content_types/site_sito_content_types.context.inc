<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function site_sito_content_types_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'view_user_profile';
  $context->description = 'Ser på bruker profil';
  $context->tag = 'user';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-mine_boliger-view_user_boliger' => array(
          'module' => 'views',
          'delta' => 'mine_boliger-view_user_boliger',
          'region' => 'content',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ser på bruker profil');
  t('user');
  $export['view_user_profile'] = $context;

  return $export;
}
