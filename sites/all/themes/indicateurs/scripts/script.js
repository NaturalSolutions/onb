jQuery( document ).ready(function() {

	var printOneActu = function(){

		jQuery('.view-recherche-actualite .views-row').each(function(index, el) {

			jQuery(this).find('.print-btn').click(function(event) {

				jQuery(this).parents('.views-row ').addClass('toPrint');

				window.print();

			});
		})

	};

	window.init = function() {

		if(jQuery('body').hasClass('context-actualites')){

			printOneActu();

		}

	}

	init(); // true
});