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

		// FR
		jQuery('body.i18n-fr span.views-slideshow-controls-text-next a').text('Plus anciennes');
		jQuery('body.i18n-fr span.views-slideshow-controls-text-previous a').text('Plus récents');

		// EN
		jQuery('body.i18n-en span.views-slideshow-controls-text-next a').text('Older');
		jQuery('body.i18n-en span.views-slideshow-controls-text-previous a').text('Most Recent');

	}

	var alterHPLabels = function(){

		// EN
		jQuery('body.i18n-en section.block-calendrier-block-1 h2').text('Calendar');
		jQuery('body.i18n-en section.block-recherche-actualite-block-1 h2').text('News');
		jQuery('body.i18n-en div.view-display-id-block_1 div.view-footer a').html('<a href="en/actualites/all">Find all our news</a>');

	}

	var alterLabelSearch = function(){

		jQuery('body.i18n-fr .form-item-type > label').text('Du ou des type(s)');
		jQuery('body.i18n-fr .form-item-language > label').text('Langue');
		jQuery('body.i18n-fr .form-item-language-en > label').text('Anglais');
		jQuery('body.i18n-fr .form-item-language-fr > label').text('Français');
		jQuery('body.i18n-fr .form-type-checkboxes.form-item-type .form-item-type-actualite > label').text('Actualité');

	}

	var setFixedBlockImprim = function(){

		// when scrolling
		jQuery(window).scroll(function (event) {

			if( jQuery('.block-views-relations-block-2').hasClass('floating-block-active') ){

				jQuery('#block-print-print-links').addClass('blockFloat-0 floating-block-active');
				jQuery('#block-block-11').addClass('blockFloat-0 floating-block-active');

			}

		});

		// when clic on anchor
		jQuery('.view-relations a').click(function(event) {

			if( jQuery('.block-views-relations-block-2').hasClass('floating-block-active') ){

				jQuery('#block-print-print-links').addClass('blockFloat-0 floating-block-active');
				jQuery('#block-block-11').addClass('blockFloat-0 floating-block-active');

			}

		});

		// on first loading page
		if( jQuery('.block-views-relations-block-2').hasClass('floating-block-active') ){

			jQuery('#block-print-print-links').addClass('blockFloat-0 floating-block-active');
			jQuery('#block-block-11').addClass('blockFloat-0 floating-block-active');

		}

	}


	window.init = function() {

		if(jQuery('body').hasClass('context-actualites')) editBtnImpression();

		// Fix JS in wait to find in config Drupal how to have complete breadcrum
		if(jQuery('body').hasClass('node-type-actualite')) addbreadcrumActualite();

		// Fix JS in wait to find in config Drupal how to have dom complete
		if(jQuery('body').hasClass('node-type-question')) {

			fixBugOeil();
			setFixedBlockImprim();

		}
		if(jQuery('body').hasClass('node-type-fiche-indicateur')) fixBugOeil();

		if(jQuery('body').hasClass('front')) {
			alterActuView();
			alterHPLabels();
		}

		if(jQuery('body').hasClass('node-type-actualite')) alterActuView();

		if(jQuery('body').hasClass('page-search-node')) alterLabelSearch();

	}

	init(); // true
});