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

	var alterActuView = function(){

		jQuery('span.views-slideshow-controls-text-next a').text('Plus anciennes');
		jQuery('span.views-slideshow-controls-text-previous a').text('Plus récents');

	}

	var alterLabelSearch = function(){

		jQuery('.form-item-type > label').text('Seulement du ou des type(s)');
		jQuery('.form-item-language > label').text('Langue');
		jQuery('.form-item-language-en > label').text('Anglais');
		jQuery('.form-item-language-fr > label').text('Français');

	}

	window.init = function() {

		if(jQuery('body').hasClass('context-actualites')) editBtnImpression();

		// Fix JS in wait to find in config Drupal how to have complete breadcrum
		if(jQuery('body').hasClass('node-type-actualite')) addbreadcrumActualite();

		// Fix JS in wait to find in config Drupal how to have dom complete
		if(jQuery('body').hasClass('node-type-question')) fixBugOeil();
		if(jQuery('body').hasClass('node-type-fiche-indicateur')) fixBugOeil();

		if(jQuery('body').hasClass('front')) alterActuView();
		if(jQuery('body').hasClass('node-type-actualite')) alterActuView();

		if(jQuery('body').hasClass('page-search-node')) alterLabelSearch();

	}

	init(); // true
});