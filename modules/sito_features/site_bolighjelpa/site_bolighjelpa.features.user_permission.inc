<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function site_bolighjelpa_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(),
  );

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
  );

  // Exported permission: access exhibits
  $permissions['access exhibits'] = array(
    'name' => 'access exhibits',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
  );

  // Exported permission: administer addresses
  $permissions['administer addresses'] = array(
    'name' => 'administer addresses',
    'roles' => array(),
  );

  // Exported permission: administer advanced pane settings
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(),
  );

  // Exported permission: administer conditional fields
  $permissions['administer conditional fields'] = array(
    'name' => 'administer conditional fields',
    'roles' => array(),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
  );

  // Exported permission: administer custom content
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(),
  );

  // Exported permission: administer date tools
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(),
  );

  // Exported permission: administer exhibit feeds
  $permissions['administer exhibit feeds'] = array(
    'name' => 'administer exhibit feeds',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
  );

  // Exported permission: administer openlayers
  $permissions['administer openlayers'] = array(
    'name' => 'administer openlayers',
    'roles' => array(),
  );

  // Exported permission: administer page manager
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(),
  );

  // Exported permission: administer pane access
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(),
  );

  // Exported permission: administer pane visibility
  $permissions['administer pane visibility'] = array(
    'name' => 'administer pane visibility',
    'roles' => array(),
  );

  // Exported permission: administer panel-nodes
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(),
  );

  // Exported permission: administer panels layouts
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
  );

  // Exported permission: administer rules
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
  );

  // Exported permission: administer stylizer
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
  );

  // Exported permission: create address book
  $permissions['create address book'] = array(
    'name' => 'create address book',
    'roles' => array(),
  );

  // Exported permission: create bolig content
  $permissions['create bolig content'] = array(
    'name' => 'create bolig content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create exhibits
  $permissions['create exhibits'] = array(
    'name' => 'create exhibits',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: create leietaker content
  $permissions['create leietaker content'] = array(
    'name' => 'create leietaker content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(),
  );

  // Exported permission: create panel-nodes
  $permissions['create panel-nodes'] = array(
    'name' => 'create panel-nodes',
    'roles' => array(),
  );

  // Exported permission: create story content
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(),
  );

  // Exported permission: create utleier content
  $permissions['create utleier content'] = array(
    'name' => 'create utleier content',
    'roles' => array(),
  );

  // Exported permission: delete any bolig content
  $permissions['delete any bolig content'] = array(
    'name' => 'delete any bolig content',
    'roles' => array(),
  );

  // Exported permission: delete any leietaker content
  $permissions['delete any leietaker content'] = array(
    'name' => 'delete any leietaker content',
    'roles' => array(),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(),
  );

  // Exported permission: delete any panel-nodes
  $permissions['delete any panel-nodes'] = array(
    'name' => 'delete any panel-nodes',
    'roles' => array(),
  );

  // Exported permission: delete any story content
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(),
  );

  // Exported permission: delete any utleier content
  $permissions['delete any utleier content'] = array(
    'name' => 'delete any utleier content',
    'roles' => array(),
  );

  // Exported permission: delete exhibits
  $permissions['delete exhibits'] = array(
    'name' => 'delete exhibits',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: delete own bolig content
  $permissions['delete own bolig content'] = array(
    'name' => 'delete own bolig content',
    'roles' => array(),
  );

  // Exported permission: delete own exhibits
  $permissions['delete own exhibits'] = array(
    'name' => 'delete own exhibits',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: delete own leietaker content
  $permissions['delete own leietaker content'] = array(
    'name' => 'delete own leietaker content',
    'roles' => array(),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(),
  );

  // Exported permission: delete own panel-nodes
  $permissions['delete own panel-nodes'] = array(
    'name' => 'delete own panel-nodes',
    'roles' => array(),
  );

  // Exported permission: delete own story content
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(),
  );

  // Exported permission: delete own utleier content
  $permissions['delete own utleier content'] = array(
    'name' => 'delete own utleier content',
    'roles' => array(),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
  );

  // Exported permission: display source code
  $permissions['display source code'] = array(
    'name' => 'display source code',
    'roles' => array(),
  );

  // Exported permission: edit any bolig content
  $permissions['edit any bolig content'] = array(
    'name' => 'edit any bolig content',
    'roles' => array(),
  );

  // Exported permission: edit any leietaker content
  $permissions['edit any leietaker content'] = array(
    'name' => 'edit any leietaker content',
    'roles' => array(),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(),
  );

  // Exported permission: edit any panel-nodes
  $permissions['edit any panel-nodes'] = array(
    'name' => 'edit any panel-nodes',
    'roles' => array(),
  );

  // Exported permission: edit any story content
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(),
  );

  // Exported permission: edit any utleier content
  $permissions['edit any utleier content'] = array(
    'name' => 'edit any utleier content',
    'roles' => array(),
  );

  // Exported permission: edit exhibits
  $permissions['edit exhibits'] = array(
    'name' => 'edit exhibits',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: edit field_adresse
  $permissions['edit field_adresse'] = array(
    'name' => 'edit field_adresse',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_antallrom
  $permissions['edit field_antallrom'] = array(
    'name' => 'edit field_antallrom',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_boligtype
  $permissions['edit field_boligtype'] = array(
    'name' => 'edit field_boligtype',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_boligtype_onsket
  $permissions['edit field_boligtype_onsket'] = array(
    'name' => 'edit field_boligtype_onsket',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_despositum
  $permissions['edit field_despositum'] = array(
    'name' => 'edit field_despositum',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_egetbad
  $permissions['edit field_egetbad'] = array(
    'name' => 'edit field_egetbad',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_elektrisitet
  $permissions['edit field_elektrisitet'] = array(
    'name' => 'edit field_elektrisitet',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_etternavn
  $permissions['edit field_etternavn'] = array(
    'name' => 'edit field_etternavn',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_forsteaarsstudent
  $permissions['edit field_forsteaarsstudent'] = array(
    'name' => 'edit field_forsteaarsstudent',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_hvitevarer
  $permissions['edit field_hvitevarer'] = array(
    'name' => 'edit field_hvitevarer',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_internett
  $permissions['edit field_internett'] = array(
    'name' => 'edit field_internett',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_kabeltv
  $permissions['edit field_kabeltv'] = array(
    'name' => 'edit field_kabeltv',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_kjokken
  $permissions['edit field_kjokken'] = array(
    'name' => 'edit field_kjokken',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_koordinater
  $permissions['edit field_koordinater'] = array(
    'name' => 'edit field_koordinater',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_kvadratmeter
  $permissions['edit field_kvadratmeter'] = array(
    'name' => 'edit field_kvadratmeter',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_leiepris
  $permissions['edit field_leiepris'] = array(
    'name' => 'edit field_leiepris',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_leiepris_merknader
  $permissions['edit field_leiepris_merknader'] = array(
    'name' => 'edit field_leiepris_merknader',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_leier_aar
  $permissions['edit field_leier_aar'] = array(
    'name' => 'edit field_leier_aar',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_leier_email
  $permissions['edit field_leier_email'] = array(
    'name' => 'edit field_leier_email',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_leier_telefon
  $permissions['edit field_leier_telefon'] = array(
    'name' => 'edit field_leier_telefon',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_leietaker_dato_registrert
  $permissions['edit field_leietaker_dato_registrert'] = array(
    'name' => 'edit field_leietaker_dato_registrert',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_leietaker_dato_tildelt
  $permissions['edit field_leietaker_dato_tildelt'] = array(
    'name' => 'edit field_leietaker_dato_tildelt',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_leietaker_trengerboligfra
  $permissions['edit field_leietaker_trengerboligfra'] = array(
    'name' => 'edit field_leietaker_trengerboligfra',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_max_husleie
  $permissions['edit field_max_husleie'] = array(
    'name' => 'edit field_max_husleie',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_moblering
  $permissions['edit field_moblering'] = array(
    'name' => 'edit field_moblering',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_nummer
  $permissions['edit field_nummer'] = array(
    'name' => 'edit field_nummer',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_onsket_moblering
  $permissions['edit field_onsket_moblering'] = array(
    'name' => 'edit field_onsket_moblering',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_openlayers
  $permissions['edit field_openlayers'] = array(
    'name' => 'edit field_openlayers',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_parkering
  $permissions['edit field_parkering'] = array(
    'name' => 'edit field_parkering',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_studiested
  $permissions['edit field_studiested'] = array(
    'name' => 'edit field_studiested',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_use_adress_field
  $permissions['edit field_use_adress_field'] = array(
    'name' => 'edit field_use_adress_field',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_utleier
  $permissions['edit field_utleier'] = array(
    'name' => 'edit field_utleier',
    'roles' => array(),
  );

  // Exported permission: edit field_utleier_email
  $permissions['edit field_utleier_email'] = array(
    'name' => 'edit field_utleier_email',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_utleier_telefon
  $permissions['edit field_utleier_telefon'] = array(
    'name' => 'edit field_utleier_telefon',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_utleiersadresse
  $permissions['edit field_utleiersadresse'] = array(
    'name' => 'edit field_utleiersadresse',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_utleierspostednr
  $permissions['edit field_utleierspostednr'] = array(
    'name' => 'edit field_utleierspostednr',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_vaskemaskin
  $permissions['edit field_vaskemaskin'] = array(
    'name' => 'edit field_vaskemaskin',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own bolig content
  $permissions['edit own bolig content'] = array(
    'name' => 'edit own bolig content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own exhibits
  $permissions['edit own exhibits'] = array(
    'name' => 'edit own exhibits',
    'roles' => array(
      '0' => 'Admin',
    ),
  );

  // Exported permission: edit own leietaker content
  $permissions['edit own leietaker content'] = array(
    'name' => 'edit own leietaker content',
    'roles' => array(),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(),
  );

  // Exported permission: edit own panel-nodes
  $permissions['edit own panel-nodes'] = array(
    'name' => 'edit own panel-nodes',
    'roles' => array(),
  );

  // Exported permission: edit own story content
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(),
  );

  // Exported permission: edit own utleier content
  $permissions['edit own utleier content'] = array(
    'name' => 'edit own utleier content',
    'roles' => array(),
  );

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(),
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: use PHP for title patterns
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(),
  );

  // Exported permission: use bulk exporter
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(),
  );

  // Exported permission: use page manager
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(),
  );

  // Exported permission: use panels caching features
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(),
  );

  // Exported permission: use panels dashboard
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
  );

  // Exported permission: use panels in place editing
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(),
  );

  // Exported permission: use views exporter
  $permissions['use views exporter'] = array(
    'name' => 'use views exporter',
    'roles' => array(),
  );

  // Exported permission: view all panes
  $permissions['view all panes'] = array(
    'name' => 'view all panes',
    'roles' => array(),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(),
  );

  // Exported permission: view field_adresse
  $permissions['view field_adresse'] = array(
    'name' => 'view field_adresse',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_antallrom
  $permissions['view field_antallrom'] = array(
    'name' => 'view field_antallrom',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_boligtype
  $permissions['view field_boligtype'] = array(
    'name' => 'view field_boligtype',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_boligtype_onsket
  $permissions['view field_boligtype_onsket'] = array(
    'name' => 'view field_boligtype_onsket',
    'roles' => array(),
  );

  // Exported permission: view field_despositum
  $permissions['view field_despositum'] = array(
    'name' => 'view field_despositum',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_egetbad
  $permissions['view field_egetbad'] = array(
    'name' => 'view field_egetbad',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_elektrisitet
  $permissions['view field_elektrisitet'] = array(
    'name' => 'view field_elektrisitet',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_etternavn
  $permissions['view field_etternavn'] = array(
    'name' => 'view field_etternavn',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_forsteaarsstudent
  $permissions['view field_forsteaarsstudent'] = array(
    'name' => 'view field_forsteaarsstudent',
    'roles' => array(),
  );

  // Exported permission: view field_hvitevarer
  $permissions['view field_hvitevarer'] = array(
    'name' => 'view field_hvitevarer',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_internett
  $permissions['view field_internett'] = array(
    'name' => 'view field_internett',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_kabeltv
  $permissions['view field_kabeltv'] = array(
    'name' => 'view field_kabeltv',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_kjokken
  $permissions['view field_kjokken'] = array(
    'name' => 'view field_kjokken',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_koordinater
  $permissions['view field_koordinater'] = array(
    'name' => 'view field_koordinater',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_kvadratmeter
  $permissions['view field_kvadratmeter'] = array(
    'name' => 'view field_kvadratmeter',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_leiepris
  $permissions['view field_leiepris'] = array(
    'name' => 'view field_leiepris',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_leiepris_merknader
  $permissions['view field_leiepris_merknader'] = array(
    'name' => 'view field_leiepris_merknader',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_leier_aar
  $permissions['view field_leier_aar'] = array(
    'name' => 'view field_leier_aar',
    'roles' => array(),
  );

  // Exported permission: view field_leier_email
  $permissions['view field_leier_email'] = array(
    'name' => 'view field_leier_email',
    'roles' => array(),
  );

  // Exported permission: view field_leier_telefon
  $permissions['view field_leier_telefon'] = array(
    'name' => 'view field_leier_telefon',
    'roles' => array(),
  );

  // Exported permission: view field_leietaker_dato_registrert
  $permissions['view field_leietaker_dato_registrert'] = array(
    'name' => 'view field_leietaker_dato_registrert',
    'roles' => array(),
  );

  // Exported permission: view field_leietaker_dato_tildelt
  $permissions['view field_leietaker_dato_tildelt'] = array(
    'name' => 'view field_leietaker_dato_tildelt',
    'roles' => array(),
  );

  // Exported permission: view field_leietaker_trengerboligfra
  $permissions['view field_leietaker_trengerboligfra'] = array(
    'name' => 'view field_leietaker_trengerboligfra',
    'roles' => array(),
  );

  // Exported permission: view field_max_husleie
  $permissions['view field_max_husleie'] = array(
    'name' => 'view field_max_husleie',
    'roles' => array(),
  );

  // Exported permission: view field_moblering
  $permissions['view field_moblering'] = array(
    'name' => 'view field_moblering',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_nummer
  $permissions['view field_nummer'] = array(
    'name' => 'view field_nummer',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_onsket_moblering
  $permissions['view field_onsket_moblering'] = array(
    'name' => 'view field_onsket_moblering',
    'roles' => array(),
  );

  // Exported permission: view field_openlayers
  $permissions['view field_openlayers'] = array(
    'name' => 'view field_openlayers',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_parkering
  $permissions['view field_parkering'] = array(
    'name' => 'view field_parkering',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_studiested
  $permissions['view field_studiested'] = array(
    'name' => 'view field_studiested',
    'roles' => array(),
  );

  // Exported permission: view field_use_adress_field
  $permissions['view field_use_adress_field'] = array(
    'name' => 'view field_use_adress_field',
    'roles' => array(),
  );

  // Exported permission: view field_utleier
  $permissions['view field_utleier'] = array(
    'name' => 'view field_utleier',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_utleier_email
  $permissions['view field_utleier_email'] = array(
    'name' => 'view field_utleier_email',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_utleier_telefon
  $permissions['view field_utleier_telefon'] = array(
    'name' => 'view field_utleier_telefon',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_utleiersadresse
  $permissions['view field_utleiersadresse'] = array(
    'name' => 'view field_utleiersadresse',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_utleierspostednr
  $permissions['view field_utleierspostednr'] = array(
    'name' => 'view field_utleierspostednr',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_vaskemaskin
  $permissions['view field_vaskemaskin'] = array(
    'name' => 'view field_vaskemaskin',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view pane admin links
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
  );

  return $permissions;
}
