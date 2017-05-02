jQuery( document ).ready(function() {

	var editBtnImpression = function(){

		jQuery('#block-print-print-links a').html('<img class="print-icon print-icon-margin" typeof="foaf:Image" src="http://indicateurs-biodiversite.naturefrance.fr/sites/all/modules/print/icons/print_icon.gif" alt="Imprimer la fiche complète" title="Imprimer l\'actualité">Imprimer l\'actualité');

	};

	window.init = function() {

		if(jQuery('body').hasClass('context-actualites')) editBtnImpression();

	}

	init(); // true
});