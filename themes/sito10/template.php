<?php
// $Id: template.php,v 1.17.2.1 2009/02/13 06:47:44 johnalbin Exp $

/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. You can add new regions for block content, modify
 *   or override Drupal's theme functions, intercept or make additional
 *   variables available to your theme, and create custom PHP logic. For more
 *   information, please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/theme-guide
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   The Drupal theme system uses special theme functions to generate HTML
 *   output automatically. Often we wish to customize this HTML output. To do
 *   this, we have to override the theme function. You have to first find the
 *   theme function that generates the output, and then "catch" it and modify it
 *   here. The easiest way to do it is to copy the original function in its
 *   entirety and paste it here, changing the prefix from theme_ to STARTERKIT_.
 *   For example:
 *
 *     original: theme_breadcrumb()
 *     theme override: STARTERKIT_breadcrumb()
 *
 *   where STARTERKIT is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_breadcrumb() function.
 *
 *   If you would like to override any of the theme functions used in Zen core,
 *   you should first look at how Zen core implements those functions:
 *     theme_breadcrumbs()      in zen/template.php
 *     theme_menu_item_link()   in zen/template.php
 *     theme_menu_local_tasks() in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called template suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node-forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and template suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440
 *   and http://drupal.org/node/190815#template-suggestions
 */


/*
 * Add any conditional stylesheets you will need for this sub-theme.
 *
 * To add stylesheets that ALWAYS need to be included, you should add them to
 * your .info file instead. Only use this section if you are including
 * stylesheets based on certain conditions.
 */
/* -- Delete this line if you want to use and modify this code
// Example: optionally add a fixed width CSS file.
if (theme_get_setting('STARTERKIT_fixed')) {
  drupal_add_css(path_to_theme() . '/layout-fixed.css', 'theme', 'all');
}
// */


/**
 * Implementation of HOOK_theme().
 */
function sito09_theme(&$existing, $type, $theme, $path) {
  $hooks = zen_theme($existing, $type, $theme, $path);
  // Add your theme hooks like this:
  /*
  $hooks['hook_name_here'] = array( // Details go here );
  */
  // @TODO: Needs detailed comments. Patches welcome!
  return $hooks;
}

/**
 * Override or insert variables into all templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered (name of the .tpl.php file.)
 */

function sito10_preprocess(&$vars, $hook) {
  
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */

function sito10_preprocess_page(&$vars, $hook) {
  //print_r($vars['body_classes']);
  $tree=menu_tree_all_data('primary-links');
  //print_r($tree);
  _mark_active_trail($tree);
  $vars['primary_links'] = menu_tree_output($tree);

}
function _mark_active_trail(&$tree){
	$path=$_GET['q'];
	$query=db_query('SELECT vid FROM node WHERE nid = %d LIMIT 1',arg(1));
	$node=db_fetch_object($query);

	//$node=node_load(arg(1));
	$terms=taxonomy_node_get_terms($node);
	$first_term=array_pop($terms);
	if($first_term->vid==2){
		$tid=$first_term->tid;
	}

	foreach($tree as $item => &$menu_item){
		$menu_item['link']['localized_options']['attributes']['title']=$menu_item['link']['link_title'];
		//$menu_item['link']['localized_options']['attributes']['class']='active';
		
		$link_path=explode('/',$menu_item['link']['link_path']);
		//print_r($menu_item);
		if($link_path[0]=='node' && is_numeric($link_path[1])){
			$link_nid=$link_path[1];
			$sub_query=db_query('SELECT vid FROM node WHERE nid = %d LIMIT 1',$link_nid);
			$link_node=db_fetch_object($sub_query);
			
			$link_terms=taxonomy_node_get_terms($link_node);
			//print_R($link_terms);
			$first_link_term=array_pop($link_terms);
     // drupal_set_message("arg1: ".arg(1)." tid: ".$tid." linktitle: ".$menu_item['link']['link_title']);
      $barnehager=array(3,9,55,4,11,10,12,60);
      if((in_array($tid, $barnehager) || arg(1)==6482) &&($menu_item['link']['link_title']=='Barnehage' || $menu_item['link']['link_title'] =='Søknad' || $menu_item['link']['link_title'] == 'priser')){
        $menu_item['link']['localized_options']['attributes']['class']='active';
      }
      $idrett=array(7,37,48,35,33,59,34,32,36);
      if((in_array($tid, $idrett) || arg(1)==6484) &&($menu_item['link']['link_title']=='Trening' || $menu_item['link']['link_title'] =='Kraft' || $menu_item['link']['link_title'] == 'booking'|| $menu_item['link']['link_title'] == 'timeplan')){
        $menu_item['link']['localized_options']['attributes']['class']='active';
      }
      $bolig=array(6,62,13,15,56,16,17,14,19,20,18,21,38,22);
      if((in_array($tid, $bolig) || arg(1)==1057) &&($menu_item['link']['link_title'] =='Bolig' || $menu_item['link']['link_title'] == 'Hybler'|| $menu_item['link']['link_title'] == 'leiligheter')){
        $menu_item['link']['localized_options']['attributes']['class']='active';
      }       
			if($first_link_term->tid==$tid && !is_null($tid)){
				//drupal_set_message($menu_item['link']['link_title'].' local nid: '.$link_nid.' local_vid:'.$link_node->vid.' tid:'.$tid.' local tid:'.$first_link_term->tid);
				$menu_item['link']['localized_options']['attributes']['class']='active';
			}
			
		}
		if(is_array($menu_item['below'])>0){
			_mark_active_trail($menu_item['below']);
		}
	}

}

// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_node(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_comment(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_block(&$vars, $hook) {
  $vars['sample_variable'] = t('Lorem ipsum.');
}
// */

/*
function sito10_preprocess_ddblock_cycle_block_content(&$vars) {
  if ($vars['output_type'] == 'view_fields') {
    $content = array();
    // Add slider_items for the template
    // If you use the devel module uncomment the following line to see the theme variables
    // dsm($vars['settings']['view_name']);
    // dsm($vars['content'][0]);
    // If you don't use the devel module uncomment the following line to see the theme variables
    // drupal_set_message('<pre>' . var_export($vars['settings']['view_name'], true) . '</pre>');
    // drupal_set_message('<pre>' . var_export($vars['content'][0], true) . '</pre>');
    if ($vars['settings']['view_name'] == 'slider') {
      if (!empty($vars['content'])) {
        foreach ($vars['content'] as $key1 => $result) {
          // add slide_image variable
          if (isset($result->node_data_field_pager_item_text_field_image_fid)) {
            // get image id
            $fid = $result->node_data_field_pager_item_text_field_image_fid;
            // get path to image
            $filepath = db_result(db_query("SELECT filepath FROM {files} WHERE fid = %d", $fid));
            //  use imagecache (imagecache, preset_name, file_path, alt, title, array of attributes)
            if (module_exists('imagecache') && is_array(imagecache_presets()) && $vars['imgcache_slide'] <> '<none>'){
              $slider_items[$key1]['slide_image'] =
              theme('imagecache',
                    $vars['imgcache_slide'],
                    $filepath,
                    check_plain($result->node_title));
            }
            else {
              $slider_items[$key1]['slide_image'] =
                '<img src="' . base_path() . $filepath .
                '" alt="' . check_plain($result->node_title) .
                '"/>';
            }
          }
          // add slide_text variable
          if (isset($result->node_data_field_pager_item_text_field_slide_text_value)) {
            $slider_items[$key1]['slide_text'] =  check_markup($result->node_data_field_pager_item_text_field_slide_text_value);
          }
          // add slide_title variable
          if (isset($result->node_title)) {
            $slider_items[$key1]['slide_title'] =  check_plain($result->node_title);
          }
          // add slide_read_more variable and slide_node variable
          if (isset($result->nid)) {
            $slider_items[$key1]['slide_read_more'] =  l('Read more...', 'node/' . $result->nid);
            $slider_items[$key1]['slide_node'] =  base_path() . 'node/' . $result->nid;
          }
        }
      }
    }
    $vars['slider_items'] = $slider_items;
  }
}
/**
 * Override or insert variables into the ddblock_cycle_pager_content templates.
 *   Used to convert variables from view_fields  to pager_items template variables
 *  Only used for custom pager items
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 *
 */
/*
function sito10_preprocess_ddblock_cycle_pager_content(&$vars) {
  if (($vars['output_type'] == 'view_fields') && ($vars['pager_settings']['pager'] == 'custom-pager')){
    $content = array();
    // Add pager_items for the template
    // If you use the devel module uncomment the following lines to see the theme variables
    // dsm($vars['pager_settings']['view_name']);
    // dsm($vars['content'][0]);
    // If you don't use the devel module uncomment the following lines to see the theme variables
    // drupal_set_message('<pre>' . var_export($vars['pager_settings'], true) . '</pre>');
    // drupal_set_message('<pre>' . var_export($vars['content'][0], true) . '</pre>');
    if ($vars['pager_settings']['view_name'] == 'slider') {
      if (!empty($vars['content'])) {
        foreach ($vars['content'] as $key1 => $result) {
          // add pager_item_image variable
          if (isset($result->node_data_field_pager_item_text_field_image_fid)) {
            $fid = $result->node_data_field_pager_item_text_field_image_fid;
            $filepath = db_result(db_query("SELECT filepath FROM {files} WHERE fid = %d", $fid));
            //  use imagecache (imagecache, preset_name, file_path, alt, title, array of attributes)
            if (module_exists('imagecache') &&
                is_array(imagecache_presets()) &&
                $vars['imgcache_pager_item'] <> '<none>'){
              $pager_items[$key1]['image'] =
                theme('imagecache',
                      $vars['pager_settings']['imgcache_pager_item'],
                      $filepath,
                      check_plain($result->node_data_field_pager_item_text_field_pager_item_text_value));
            }
            else {
              $pager_items[$key1]['image'] =
                '<img src="' . base_path() . $filepath .
                '" alt="' . check_plain($result->node_data_field_pager_item_text_field_pager_item_text_value) .
                '"/>';
            }
          }
          // add pager_item _text variable
          if (isset($result->node_data_field_pager_item_text_field_pager_item_text_value)) {
            $pager_items[$key1]['text'] =  check_plain($result->node_data_field_pager_item_text_field_pager_item_text_value);
          }
        }
      }
    }
    $vars['pager_items'] = $pager_items;
  }
}
*/
function sito10_menu_item_link($link) {
  if (empty($link['localized_options'])) {
    $link['localized_options'] = array();
  }
//print_r($link);
//print_r($_GET['q']);
  return l($link['title'], $link['href'], $link['localized_options']);
}