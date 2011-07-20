<?php
// $Id$ 

/*!
 * Dynamic display block module template (Drupal 6): upright60 - pager template
 * (c) Copyright Phelsa Information Technology, 2011. All rights reserved.
 * Version 1.0 ( 02-MAR-2011 )
 * Licenced under GPL license
 * http://www.gnu.org/licenses/gpl.html
 */

/**
 * @file
 * Dynamic display block module template: upright60 - pager template
 * - Scrollable pager with images
 *
 * Available variables:
 * - $ddblock_pager_settings['delta']: Block number of the block.
 * - $ddblock_pager_settings['pager']: Type of pager to add
 * - $ddblock_pager_settings['pager2']: Add prev/next pager
 * - $ddblock_pager_settings['pager_position']: position of the slider (top | bottom) 
 * - $ddblock_pager_items: array with pager_items
 *
 * notes: don't change the ID names, they are used by the jQuery script.
 */
 
// jquery_plugin_add('scrollable');
 $base = drupal_get_path('module', 'ddblock');
 drupal_add_js($base . '/js/tools.scrollable-1.0.5.min.js', 'theme');
?>

<?php if ($pager_position == 'bottom'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>

<!-- navigator --> 
<div class="navi"></div> 

<!-- custom "prev" link --> 
<div class="prev"></div> 

<!-- scrollable pager -->
<div id="ddblock-scrollable-pager-<?php print $delta ?>" class="<?php print $pager ?> ddblock-scrollable-pager clear-block border">
 <div class="items <?php print $pager ?>-inner clear-block border">
  <?php if ($pager_items): ?>
   <?php $item_counter=1; ?>
   <?php foreach ($pager_items as $pager_item): ?>
    <div class="<?php print $pager ?>-item <?php print $pager ?>-item-<?php print $item_counter ?>">
      <a href="#" title="navigate to topic" class="pager-link"><?php print $pager_item['image'];?></a>
    </div> <!-- /custom-pager-item -->
    <?php $item_counter++; ?>
   <?php endforeach; ?>
  <?php endif; ?>
 </div> <!-- /pager-inner-->
</div>  <!-- /scrollable pager-->

<!-- custom "next" link --> 
<div class="next"></div>
<?php if ($pager_position == 'top'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
