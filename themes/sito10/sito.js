/**
 * @author Ole Mahtte Scheie Anti
 */

Drupal.behaviors.sito10 = function (context) {
	$('#edit-search-theme-form-1').bind('focus', function() {
	  $('#search-box').addClass('focuson');
	  $('#search-box').addClass('perma');
	  
	  $('#edit-submit-1').attr('src', 'sites/all/themes/sito10/images/sok_lupe_on.png');
	  $('#edit-search-theme-form-1').attr('size', '25');
	});
	/*
	$('#edit-search-theme-form-1').bind('focusout', function() {
	  $('#search-box').removeClass('focuson');
	  $('#edit-submit-1').attr('src', 'sites/all/themes/sito10/images/sok_lupe.png');
	});
	*/
	$('#search-box').bind('mouseover', function() {
	  $('#search-box').addClass('focuson');
	  $('#edit-submit-1').attr('src', 'sites/all/themes/sito10/images/sok_lupe_on.png');
	  $('#edit-search-theme-form-1').attr('size', '25');
	});
	$('#search-box').bind('mouseout', function() {
		if($('#search-box').hasClass('perma')){
			
		}else{
	  		$('#search-box').removeClass('focuson');
	  		$('#edit-submit-1').attr('src', 'sites/all/themes/sito10/images/sok_lupe.png'); 
	  	}
	});

};