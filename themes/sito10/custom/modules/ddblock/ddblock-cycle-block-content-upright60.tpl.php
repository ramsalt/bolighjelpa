<?php
// $Id$

/*!
 * Dynamic display block module template (Drupal 6): upright60 - content template
 * (c) Copyright Phelsa Information Technology, 2011. All rights reserved.
 * Version 1.0 ( 02-MAR-2011 )
 * Licenced under GPL license
 * http://www.gnu.org/licenses/gpl.html
 */

/**
 * @file
 * Dynamic display block module template: upright60 - content template
 *
 * Available variables:
 * - $origin: From which module comes the block.
 * - $delta: Block number of the block.
 *
 * - $template: template name
 * - $output_type: type of content
 *
 * - $slider_items: array with slidecontent
 * - $slide_text_position of the text in the slider (top | right | bottom | left)
 * - $slide_direction: direction of the text in the slider (horizontal | vertical )
 * - 
 * - $pager_content: Themed pager content
 * - $pager_position: position of the pager (top | bottom)
 *
 * notes: don't change the ID names, they are used by the jQuery script.
 */
// add Cascading style sheet
drupal_add_css($directory .'/custom/modules/ddblock/' . $template . '/ddblock-cycle-'. $template . '.css', 'template', 'all', FALSE);
?>
<!-- dynamic display block slideshow -->
<div id="ddblock-<?php print $delta ?>" class="ddblock-cycle-<?php print $template ?> clear-block">
 <div class="container clear-block border">
  <div class="container-inner clear-block border">
   <?php if ($pager_position == "top") : ?>
    <!-- scrollable pager images --> 
    <?php print $pager_content ?>
   <?php endif; ?>
   <!-- slider content -->
   <div class="slider clear-block border">
    <div class="slider-inner clear-block border">
     <?php if ($output_type == 'view_fields') : ?>
      <?php foreach ($slider_items as $slider_item): ?>
       <div class="slide clear-block border">
        <div class="slide-inner clear-block border">
         <?php print $slider_item['slide_image']; ?>
         <?php if ($slide_text == 1) :?>
          <div class="slide-text slide-text-<?php print $slide_direction ?> slide-text-<?php print $slide_text_position ?> clear-block border">
           <div class="slide-text-inner clear-block border">
            <?php if ($slider_item['slide_title']) :?>
             <div class="slide-title slide-title-<?php print $slide_direction ?> clear-block border">
              <div class="slide-title-inner clear-block border">
               <h2><?php print $slider_item['slide_title'] ?></h2>
              </div> <!-- slide-title-inner-->
             </div>  <!-- slide-title-->
            <?php endif; ?>
            <?php if ($slider_item['slide_text']) :?>
             <div class="slide-body-<?php print $slide_direction ?> clear-block border">
              <div class="slide-body-inner clear-block border">
               <p><?php print $slider_item['slide_text'] ?></p>
              </div> <!-- slide-body-inner-->
             </div>  <!-- slide-body-->
            <?php endif; ?>
            <?php if ($slider_item['slide_read_more']) :?>
             <div class="slide-read-more slide-read-more-<?php print $slide_direction ?> clear-block border">
              <p><?php print $slider_item['slide_read_more'] ?></p>
	           </div><!-- slide-read-more-->
            <?php endif; ?>
           </div> <!-- slide-text-inner-->
          </div>  <!-- slide-text-->
         <?php endif; ?>
        </div> <!-- slide-inner-->
       </div>  <!-- slide-->
      <?php endforeach; ?>
     <?php endif; ?>
    </div> <!-- slider-inner-->
   </div>  <!-- slider-->
   <?php if ($pager_position == "bottom") : ?>
    <!-- scrollable pager images--> 
    <?php print $pager_content ?>
   <?php endif; ?>
  </div> <!-- container-inner-->
 </div> <!--container-->
</div> <!--  template -->
