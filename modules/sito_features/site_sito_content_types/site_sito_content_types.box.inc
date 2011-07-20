<?php

/**
 * Implementation of hook_default_box().
 */
function site_sito_content_types_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'legg_ut_ny_bolig';
  $box->plugin_key = 'simple';
  $box->title = 'Legg ut ny bolig ';
  $box->description = 'Legg ut ny bolig ';
  $box->options = array(
    'body' => 'Hei der',
    'format' => '1',
  );
  $export['legg_ut_ny_bolig'] = $box;

  return $export;
}
