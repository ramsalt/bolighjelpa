<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function site_sito_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function site_sito_content_types_node_info() {
  $items = array(
    'bolig' => array(
      'name' => t('Bolig'),
      'module' => 'features',
      'description' => t('Leilighet, hybel eller plass i kollektiv i SiTø eller på det lokale utleieboligmarkedet i Tromsø'),
      'has_title' => '1',
      'title_label' => t('Bolig'),
      'has_body' => '1',
      'body_label' => t('Beskrivelse'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'leietaker' => array(
      'name' => t('Boligsøker'),
      'module' => 'features',
      'description' => t('Person som søker sted å bo'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'utleier' => array(
      'name' => t('Utleier'),
      'module' => 'features',
      'description' => t('Person eller organisasjon som leier ut, eller som er ansvarlig kontaktperson'),
      'has_title' => '1',
      'title_label' => t('Utleiers navn'),
      'has_body' => '1',
      'body_label' => t('Informasjon om ledig(e) boliger. '),
      'min_word_count' => '0',
      'help' => t('Opplysninger som bør oppgis:
<ul><li> adresse 
<li> antall boliger som leies ut
<li> leiepris pr måned, og despositum
<li> antall kvadratmeter boligareal
<li> beskrivelse av boligen
<li> ledig fra dato </ul>

Årlig kostnad for å benytte seg av Bolighjelpas tjenester :  
<ul>
<li> Annonsering av boligen (alle typer bolig) <strong> kr. 400.-</strong>
<li> Bearbeiding og utarbeidelse av prospekt <strong> kr. 300.-</strong>
<li> Annet arbeide ved utleie av boligen <strong> kr. 250.-</strong>
</ul>
'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function site_sito_content_types_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
