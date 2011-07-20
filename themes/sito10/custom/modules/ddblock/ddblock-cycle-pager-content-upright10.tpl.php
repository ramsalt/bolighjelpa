<?php
// $Id$ 

/*!
 * Dynamic display block module template (Drupal 6): upright10 - pager template
 * (c) Copyright Phelsa Information Technology, 2011. All rights reserved.
 * Version 1.0 ( 02-MAR-2011 )
 * Licenced under GPL license
 * http://www.gnu.org/licenses/gpl.html
 */

/**
 * @file
 * Dynamic display block module template: upright10 - pager template
 * - Number pager
 *
 * Available variables:
 * - $delta: Block number of the block.
 * - $pager: Type of pager to add
 * - $pager_position: position of the slider (top | bottom) 
 *
 * notes: don't change the ID names, they are used by the jQuery script.
 */
?>
<?php if ($pager_position == 'bottom'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
<!-- number pager -->
<div id="ddblock-<?php print $pager ."-". $delta ?>" class="<?php print $pager ?> ddblock-pager clear-block">
 <?php $item_counter=1; ?>
 <ul>
  <?php foreach ($pager_items as $item): ?>
   <li class="number-pager-item">
    <a href="#" class="pager-link" title="click to navigate to topic">
     <?php print $item_counter; ?>
    </a>
   </li>
   <?php $item_counter++;?>
  <?php endforeach; ?>
 </ul>
</div> 
<div class="number-pager-pre-<?php print $pager_position; ?> "></div>
<?php if ($pager_position == 'top'): ?>
 <div class="spacer-horizontal"><b></b></div>
<?php endif; ?>
