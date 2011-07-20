<?php

/**
 * Implementation of hook_views_default_views().
 */
function site_sito_content_types_views_default_views() {
  $views = array();

  // Exported view: boliger
  $view = new view;
  $view->name = 'boliger';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 3.0-alpha1;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Adresse';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Antall rom (field_antallrom) */
  $handler->display->display_options['fields']['field_antallrom_value']['id'] = 'field_antallrom_value';
  $handler->display->display_options['fields']['field_antallrom_value']['table'] = 'node_data_field_antallrom';
  $handler->display->display_options['fields']['field_antallrom_value']['field'] = 'field_antallrom_value';
  $handler->display->display_options['fields']['field_antallrom_value']['label'] = 'Antall rom';
  $handler->display->display_options['fields']['field_antallrom_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_antallrom_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_antallrom_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_antallrom_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_antallrom_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_antallrom_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_antallrom_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_antallrom_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_antallrom_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_antallrom_value']['link_to_node'] = 0;
  /* Field: Content: Boligtype (field_boligtype) */
  $handler->display->display_options['fields']['field_boligtype_value']['id'] = 'field_boligtype_value';
  $handler->display->display_options['fields']['field_boligtype_value']['table'] = 'node_data_field_boligtype';
  $handler->display->display_options['fields']['field_boligtype_value']['field'] = 'field_boligtype_value';
  $handler->display->display_options['fields']['field_boligtype_value']['label'] = 'Boligtype';
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['link_to_node'] = 0;
  /* Field: Content: Kvadratmeter (field_kvadratmeter) */
  $handler->display->display_options['fields']['field_kvadratmeter_value']['id'] = 'field_kvadratmeter_value';
  $handler->display->display_options['fields']['field_kvadratmeter_value']['table'] = 'node_data_field_kvadratmeter';
  $handler->display->display_options['fields']['field_kvadratmeter_value']['field'] = 'field_kvadratmeter_value';
  $handler->display->display_options['fields']['field_kvadratmeter_value']['label'] = 'Kvadratmeter';
  $handler->display->display_options['fields']['field_kvadratmeter_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_kvadratmeter_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_kvadratmeter_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_kvadratmeter_value']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_kvadratmeter_value']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['field_kvadratmeter_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_kvadratmeter_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_kvadratmeter_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_kvadratmeter_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_kvadratmeter_value']['link_to_node'] = 0;
  /* Field: Content: Møblering? (field_moblering) */
  $handler->display->display_options['fields']['field_moblering_value']['id'] = 'field_moblering_value';
  $handler->display->display_options['fields']['field_moblering_value']['table'] = 'node_data_field_moblering';
  $handler->display->display_options['fields']['field_moblering_value']['field'] = 'field_moblering_value';
  $handler->display->display_options['fields']['field_moblering_value']['label'] = 'Møblering?';
  $handler->display->display_options['fields']['field_moblering_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_moblering_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_moblering_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_moblering_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_moblering_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_moblering_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_moblering_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_moblering_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_moblering_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_moblering_value']['link_to_node'] = 0;
  /* Field: Content: Adresse (field_adresse) */
  $handler->display->display_options['fields']['field_adresse_value']['id'] = 'field_adresse_value';
  $handler->display->display_options['fields']['field_adresse_value']['table'] = 'node_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse_value']['field'] = 'field_adresse_value';
  $handler->display->display_options['fields']['field_adresse_value']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_adresse_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['link_to_node'] = 0;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Leiepris pr måned (field_leiepris) */
  $handler->display->display_options['fields']['field_leiepris_value']['id'] = 'field_leiepris_value';
  $handler->display->display_options['fields']['field_leiepris_value']['table'] = 'node_data_field_leiepris';
  $handler->display->display_options['fields']['field_leiepris_value']['field'] = 'field_leiepris_value';
  $handler->display->display_options['fields']['field_leiepris_value']['label'] = 'Leiepris pr måned';
  $handler->display->display_options['fields']['field_leiepris_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_leiepris_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_leiepris_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_leiepris_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_leiepris_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_leiepris_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_leiepris_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_leiepris_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_leiepris_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_leiepris_value']['link_to_node'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bolig' => 'bolig',
  );
  
/* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'exhibit_bolig_feed');
  $handler->display->display_options['style_plugin'] = 'exhibit_json';
  $handler->display->display_options['row_plugin'] = 'node_exhibit';
  $handler->display->display_options['path'] = 'bolig/boliger.json';

  $views[$view->name] = $view;

  // Exported view: mine_boliger
  $view = new view;
  $view->name = 'mine_boliger';
  $view->description = 'Liste over mine boliger';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 3.0-alpha1;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Mine boliger */
  $handler = $view->new_display('default', 'Mine boliger', 'default');
  $handler->display->display_options['title'] = 'Mine boliger';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_adresse_value' => 'field_adresse_value',
    'field_boligtype_value' => 'field_boligtype_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_adresse_value' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
    'field_boligtype_value' => array(
      'sortable' => 0,
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  /* Field: Content: Adresse (field_adresse) */
  $handler->display->display_options['fields']['field_adresse_value']['id'] = 'field_adresse_value';
  $handler->display->display_options['fields']['field_adresse_value']['table'] = 'node_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse_value']['field'] = 'field_adresse_value';
  $handler->display->display_options['fields']['field_adresse_value']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_adresse_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_adresse_value']['link_to_node'] = 0;
  /* Field: Content: Boligtype (field_boligtype) */
  $handler->display->display_options['fields']['field_boligtype_value']['id'] = 'field_boligtype_value';
  $handler->display->display_options['fields']['field_boligtype_value']['table'] = 'node_data_field_boligtype';
  $handler->display->display_options['fields']['field_boligtype_value']['field'] = 'field_boligtype_value';
  $handler->display->display_options['fields']['field_boligtype_value']['label'] = 'Boligtype';
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_boligtype_value']['link_to_node'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  /* Field: Node: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  /* Argument: Content: Utleier (field_utleier) */
  $handler->display->display_options['arguments']['field_utleier_uid']['id'] = 'field_utleier_uid';
  $handler->display->display_options['arguments']['field_utleier_uid']['table'] = 'node_data_field_utleier';
  $handler->display->display_options['arguments']['field_utleier_uid']['field'] = 'field_utleier_uid';
  $handler->display->display_options['arguments']['field_utleier_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_utleier_uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_utleier_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_utleier_uid']['validate_type'] = 'user';
  $handler->display->display_options['arguments']['field_utleier_uid']['validate_options']['restrict_roles'] = 0;
  $handler->display->display_options['arguments']['field_utleier_uid']['validate_fail'] = 'empty';
  $handler->display->display_options['arguments']['field_utleier_uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_utleier_uid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bolig' => 'bolig',
  );
  
/* Display: Mine boliger view */
  $handler = $view->new_display('page', 'Mine boliger view', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    '2' => 2,
  );
  $handler->display->display_options['path'] = 'mine_boliger';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mine boliger';
  $handler->display->display_options['menu']['weight'] = '0';
  
/* Display: user_profile_view */
  $handler = $view->new_display('block', 'user_profile_view', 'view_user_boliger');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Boliger lagt ut';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Content: Utleier (field_utleier) */
  $handler->display->display_options['arguments']['field_utleier_uid']['id'] = 'field_utleier_uid';
  $handler->display->display_options['arguments']['field_utleier_uid']['table'] = 'node_data_field_utleier';
  $handler->display->display_options['arguments']['field_utleier_uid']['field'] = 'field_utleier_uid';
  $handler->display->display_options['arguments']['field_utleier_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_utleier_uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_utleier_uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_utleier_uid']['validate_type'] = 'user';
  $handler->display->display_options['arguments']['field_utleier_uid']['validate_options']['restrict_roles'] = 0;
  $handler->display->display_options['arguments']['field_utleier_uid']['validate_fail'] = 'empty';
  $handler->display->display_options['arguments']['field_utleier_uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_utleier_uid']['not'] = 0;

  $views[$view->name] = $view;

  return $views;
}
