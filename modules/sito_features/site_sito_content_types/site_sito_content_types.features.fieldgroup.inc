<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function site_sito_content_types_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_fasiliteter
  $groups['bolig-group_fasiliteter'] = array(
    'group_type' => 'standard',
    'type_name' => 'bolig',
    'group_name' => 'group_fasiliteter',
    'parent' => '',
    'label' => 'Fasiliteter',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_egetbad',
      '1' => 'field_kvadratmeter',
      '2' => 'field_moblering',
      '3' => 'field_parkering',
      '4' => 'field_antallrom',
      '5' => 'field_kjokken',
      '6' => 'field_elektrisitet',
      '7' => 'field_hvitevarer',
      '8' => 'field_kabeltv',
      '9' => 'field_vaskemaskin',
      '10' => 'field_internett',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Fasiliteter');

  return $groups;
}
