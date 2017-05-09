jQuery( document ).ready(function() {

	var editBtnImpression = function(){

		jQuery('#block-print-print-links a').html('<img class="print-icon print-icon-margin" typeof="foaf:Image" src="http://indicateurs-biodiversite.naturefrance.fr/sites/all/modules/print/icons/print_icon.gif" alt="Imprimer la fiche complète" title="Imprimer l\'actualité">Imprimer l\'actualité');

	};

	// Fix JS in wait to find in config Drupal how to have complete breadcrum
	var addbreadcrumActualite = function(){

		jQuery('.breadcrumb').append(' » <a href="http://indicateurs-biodiversite.naturefrance.fr/actualites/toutes" title="Retrouver toutes les actualités liées aux publications de l\'ONB et à l\'évolution de ce site">L\'actualité</a>')

	};

	// Fix JS in wait to find in config Drupal how to have dom complete
	var fixBugOeil = function(){

		jQuery('a.cboxElement').click(function(event) {
			/* Act on the event */
			var text = jQuery(this).attr('href');
			text = text.split('?width=500&height=500&inline=true')[1];

			setTimeout(addText, 1500);

			function addText() {
				jQuery('#cboxLoadedContent').append(text);
			}

		});

	};

	window.init = function() {

		if(jQuery('body').hasClass('context-actualites')) editBtnImpression();

		// Fix JS in wait to find in config Drupal how to have complete breadcrum
		if(jQuery('body').hasClass('node-type-actualite')) addbreadcrumActualite();

		// Fix JS in wait to find in config Drupal how to have dom complete
		if(jQuery('body').hasClass('node-type-question')) fixBugOeil();
		if(jQuery('body').hasClass('node-type-fiche-indicateur')) fixBugOeil();

	}

	init(); // true
});