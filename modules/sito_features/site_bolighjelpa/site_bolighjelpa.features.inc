<?php

/**
 * Implementation of hook_rules_defaults().
 */
function site_bolighjelpa_rules_defaults() {
  return array(
    'rules' => array(
      'rules_lagt_til_ny_leietaker' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Lagt til ny leietaker',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'ny leietaker',
          'site_bolighjelpa' => 'site_bolighjelpa',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is Boligsøker',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'leietaker' => 'leietaker',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'message' => 'Vi har mottat din registrering.

Du vil bli kontakt.',
              'error' => 0,
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'message' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_drupal_message',
            '#info' => array(
              'label' => 'Show a configurable message on the site',
              'module' => 'System',
              'eval input' => array(
                '0' => 'message',
              ),
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_openlayers_new_content' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'openlayers new content',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'bolig',
          'site_bolighjelpa' => 'site_bolighjelpa',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Created content is Utleier',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'utleier' => 'utleier',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'sources' => array(
                'field_nummer' => 'field_nummer',
                'field_utleiersadresse' => 'field_utleiersadresse',
                'field_utleierspostednr' => 'field_utleierspostednr',
              ),
              'destination' => 'field_openlayers',
              'prefix' => '',
              'suffix' => ' Tromsø',
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_geocoder_action_geocode_fields',
            '#info' => array(
              'label' => 'Geocode a field or a combination of fields',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Rules Geocoder',
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
      'rules_openlayers_update' => array(
        '#type' => 'rule',
        '#set' => 'event_node_presave',
        '#label' => 'openlayers update',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'bolig',
          'site_bolighjelpa' => 'site_bolighjelpa',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Updated content is Utleier',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'utleier' => 'utleier',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#type' => 'action',
            '#settings' => array(
              'sources' => array(
                'field_nummer' => 'field_nummer',
                'field_utleiersadresse' => 'field_utleiersadresse',
                'field_utleierspostednr' => 'field_utleierspostednr',
              ),
              'destination' => 'field_openlayers',
              'prefix' => '',
              'suffix' => ' Tromsø',
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_geocoder_action_geocode_fields',
            '#info' => array(
              'label' => 'Geocode a field or a combination of fields',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Rules Geocoder',
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}
