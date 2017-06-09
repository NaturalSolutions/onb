<?php
/**
 * @file
 * onb_global.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function onb_global_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_fiche_ressource_bibliographique';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = 1;
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'collapsiblock_default_state';
  $strongarm->value = 3;
  $export['collapsiblock_default_state'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'collapsiblock_settings';
  $strongarm->value = array(
    'block-facetapi-jugyl43OZdfGX6R3k5meeF1KhIYZt2dl' => 1,
    'block-views-recherche-actualite-block-1' => 1,
    'block-facetapi-5PJZvOhKN1WCbQmELrQjWYWBUah5UQYp' => 1,
    'block-facetapi-OkyjI0cN3JZuY77oDfOcmyEMrALdHbro' => 1,
    'block-facetapi-3lTwMC5PVStMfwVIVo860u5kQBG4eQKo' => 3,
    'block-facetapi-2VJ8pkIbxvsRMDPMMBxW7Js5UQwFzdI5' => 3,
    'block-facetapi-qHkLlWWHvZedkTRbfBhaefsoE1aCYinL' => 3,
    'block-facetapi-iBmdtOA6tLf1TxWZ6z7GHHMJZok1xfpN' => 3,
    'block-block-1' => '1',
    'block-ds-extras-barre-de-gauche' => 1,
    'block-facetapi-zJW12ifaWLGVfq1Iot3Ncl3DGmGaPiJq' => 3,
    'block-facetapi-jbnMBFs4msbpxVc3vgYx2bbVtR1lm4QM' => 3,
    'block-facetapi-elAtZQS3y2moNjP82yifaBhIgfen0Iwj' => 3,
    'block-ds-extras-barre-de-gauche-question' => 1,
    'block-current-search-question' => 1,
    'block-block-2' => '1',
    'block-facetapi-zQB2U5nTCxyIoEbKzsPEePi8Y9UlJNtM' => 3,
    'block-current-search-clone-of-standard' => 1,
    'block-current-search-standard' => 1,
    'block-block-3' => '1',
    'block-menu-block-1' => '1',
    'block-block-4' => 1,
    'block-facetapi-qIKfIl3fzLn7s6sYLnlpIAnMOifVQCbE' => 3,
    'block-block-7' => 1,
    'block-block-5' => '3',
    'block-block-6' => '1',
    'block-facetapi-mz1U7vEhTOGB4H2dC0zmfwGvT31f0Fwp' => 3,
    'block-block-8' => 2,
    'block-system-main' => 1,
    'block-block-10' => 1,
    'block-ds-extras-barre-de-gauche-question-fiche-s' => 1,
    'block-facetapi-d0bp4OQSE2q0vtCzwYPNhhvUzTccy1U6' => 3,
    'block-nice-menus-1' => '1',
    'block-menu-block-2' => '1',
    'block-facetapi-eu6vN512fqAsYV1y7yANyYUq71V8U9I2' => 3,
    'block-facetapi-8C1JGy9U5JwO2jylR0FTyxNCtD1kGQMO' => 3,
    'block-facetapi-BYtTIDsMiwLQyV1FpOE4A8vyl5UDjGvM' => 1,
    'block-facetapi-Ps7TNGjqNuYITL1WWq9MqTtN6cH7HXnQ' => 1,
    'block-ds-extras-barre-de-gauche-thematique' => 1,
    'block-facetapi-Otv7RdLf1y1TB1lCVtWocv8ry8OtswLQ' => 3,
    'block-views-relations-block-1' => 1,
    'block-views-relations-block-2' => 1,
    'block-facetapi-vDQ4ArGTU9uhM0FTXpDbAA9obMysq2DH' => 3,
    'block-block-11' => '1',
    'block-facetapi-fKeETSMo2wFzNypWf1D4iD6E9FGsjQa1' => 2,
    'block-facetapi-uh114tgpzyuTf7QTaLrgbskK2IDReJ1y' => 3,
    'block-facetapi-Y3Ml4151d6BxE6M1ArWBOUSB1DTK2Obr' => 3,
    'block-facetapi-1PFPsSdQ1oEEDvWm0FDBZrlA8YUBd9xN' => 3,
    'block-facetapi-pOr55Bx1UDk595Yd0nNveGRjdDfo651V' => 3,
    'block-facetapi-LSI7jZWvqfi8MbFKzT02JOrqfFrjuHpw' => 3,
    'block-facetapi-ryQChgBW1gs9cHvN0NhB70XOPfSy0g2Y' => 3,
    'block-facetapi-JKQatLJ3o3ev1dIdqGLuGrZYRpqbL0QQ' => 1,
    'block-nice-menus-2' => 1,
    'block-facetapi-byttidsmiwlqyv1fpoe4a8vyl5udjgvm' => '3',
    'block-facetapi-ps7tngjqnuyitl1wwq9mqttn6ch7hxnq' => '3',
    'block-facetapi-jugyl43ozdfgx6r3k5meef1khiyzt2dl' => '3',
    'block-facetapi-5pjzvohkn1wcbqmelrqjwywbuah5uqyp' => '3',
    'block-facetapi-jkqatlj3o3ev1didqglugrzyrpqbl0qq' => '3',
    'block-views-calendar-block-1' => '1',
    'block-locale-language' => '1',
    'block-print-print-links' => '1',
    'block-facetapi-mz1u7vehtogb4h2dc0zmfwgvt31f0fwp' => '3',
    'block-facetapi-qikfil3fzln7s6sylnlpianmoifvqcbe' => '3',
    'block-facetapi-zqb2u5ntcxyioebkzspeepi8y9uljntm' => '3',
    'block-facetapi-qhkllwwhvzedktrbfbhaefsoe1acyinl' => '3',
    'block-facetapi-3ltwmc5pvstmfwvivo860u5kqbg4eqko' => '3',
    'block-facetapi-ibmdtoa6tlf1txwz6z7ghhmjzok1xfpn' => '3',
    'block-facetapi-uh114tgpzyutf7qtalrgbskk2idrej1y' => '3',
    'block-facetapi-1pfpssdq1oeedvwm0fdbzrla8yubd9xn' => '3',
    'block-facetapi-d0bp4oqse2q0vtczwypnhhvuztccy1u6' => '3',
    'block-facetapi-zjw12ifawlgvfq1iot3ncl3dgmgapijq' => '3',
    'block-facetapi-jbnmbfs4msbpxvc3vgyx2bbvtr1lm4qm' => '3',
    'block-facetapi-8c1jgy9u5jwo2jylr0ftyxnctd1kgqmo' => '3',
    'block-menu-block-3' => '1',
    'block-menu-block-4' => '1',
    'block-views-calendrier-block-1' => '1',
    'block-facetapi-2nqgdplv05knsanhczebmyncr7km2wou' => '3',
  );
  $export['collapsiblock_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'collapsiblock_slide_speed';
  $strongarm->value = 200;
  $export['collapsiblock_slide_speed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'collapsiblock_slide_type';
  $strongarm->value = 1;
  $export['collapsiblock_slide_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_fixed';
  $strongarm->value = 1;
  $export['colorbox_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_use_iso8601';
  $strongarm->value = 0;
  $export['date_api_use_iso8601'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Berlin';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_first_day';
  $strongarm->value = '1';
  $export['date_first_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_annee';
  $strongarm->value = 'Y';
  $export['date_format_annee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_jour';
  $strongarm->value = 'd/m/Y';
  $export['date_format_jour'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, j F, Y - H:i';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'j F, Y - H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_DAY';
  $strongarm->value = 'F j, Y';
  $export['date_format_search_api_facetapi_DAY'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_HOUR';
  $strongarm->value = 'H:__';
  $export['date_format_search_api_facetapi_HOUR'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_MINUTE';
  $strongarm->value = 'H:i';
  $export['date_format_search_api_facetapi_MINUTE'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_MONTH';
  $strongarm->value = 'F Y';
  $export['date_format_search_api_facetapi_MONTH'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_SECOND';
  $strongarm->value = 'H:i:S';
  $export['date_format_search_api_facetapi_SECOND'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_search_api_facetapi_YEAR';
  $strongarm->value = 'Y';
  $export['date_format_search_api_facetapi_YEAR'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'd/m/Y - H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_without_year';
  $strongarm->value = 'l, F j';
  $export['date_views_day_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_with_year';
  $strongarm->value = 'l, F j, Y';
  $export['date_views_day_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_without_year';
  $strongarm->value = 'F';
  $export['date_views_month_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_with_year';
  $strongarm->value = 'F Y';
  $export['date_views_month_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_without_year';
  $strongarm->value = 'F j';
  $export['date_views_week_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_with_year';
  $strongarm->value = 'F j, Y';
  $export['date_views_week_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_field_group';
  $strongarm->value = array(
    'group_analyse|node|fiche_indicateur|form' => FALSE,
    'group_qualite|node|fiche_indicateur|form' => FALSE,
    'group_avantages|node|fiche_indicateur|form' => FALSE,
    'group_orientations_principales|node|fiche_indicateur|form' => FALSE,
    'group_objectifs_snb_principaux|node|fiche_indicateur|form' => FALSE,
    'group_definition|node|fiche_indicateur|form' => FALSE,
    'group_breve_definition|node|fiche_indicateur|form' => FALSE,
    'group_orientations_objectifs|node|fiche_indicateur|form' => FALSE,
    'group_objectifs_snb_secondaires|node|fiche_indicateur|form' => FALSE,
    'group_relation_objectifs|node|fiche_indicateur|form' => FALSE,
    'group_limites|node|fiche_indicateur|form' => FALSE,
    'group_pistes|node|fiche_indicateur|form' => FALSE,
    'group_pistes_groupe|node|fiche_indicateur|form' => FALSE,
    'group_type_dpsir|node|fiche_indicateur|form' => TRUE,
    'group_type_pression|node|fiche_indicateur|form' => FALSE,
    'group_milieux_concernes|node|fiche_indicateur|form' => FALSE,
    'group_couverture_geo|node|fiche_indicateur|form' => FALSE,
    'group_echelle_restitution|node|fiche_indicateur|form' => FALSE,
    'group_grain_precision_echelle|node|fiche_indicateur|form' => FALSE,
    'group_type_variable|node|fiche_indicateur|form' => FALSE,
    'group_unite_mesure|node|fiche_indicateur|form' => FALSE,
    'group_valeur_cible|node|fiche_indicateur|form' => FALSE,
    'group_continuite_snb|node|fiche_indicateur|form' => FALSE,
    'group_retro_calcul|node|fiche_indicateur|form' => FALSE,
    'group_relation_indicateurs|node|fiche_indicateur|form' => FALSE,
    'group_production|node|fiche_indicateur|form' => FALSE,
    'group_producteur|node|fiche_indicateur|form' => FALSE,
    'group_visuels|node|fiche_indicateur|form' => FALSE,
    'group_presentation|node|fiche_indicateur|form' => FALSE,
    'group_origine_source|node|fiche_indicateur|form' => FALSE,
    'group_methodologie|node|fiche_indicateur|form' => FALSE,
    'group_pas_tps_disponibilite|node|fiche_indicateur|form' => FALSE,
    'group_pas_tps_restitution|node|fiche_indicateur|form' => FALSE,
    'group_date_publication|node|fiche_indicateur|form' => FALSE,
    'group_rupture_serie|node|fiche_indicateur|form' => FALSE,
    'group_mod_interpretation|node|fiche_indicateur|form' => FALSE,
    'group_definition|node|fiche_indicateur|default' => FALSE,
    'group_objets_indicateurs|node|question|form' => FALSE,
    'group_valeurannee|node|fiche_indicateur|form' => FALSE,
    'group_definition|node|fiche_indicateur|full' => FALSE,
    'group_production|node|fiche_indicateur|full' => FALSE,
    'group_presentation_interpret|node|fiche_indicateur|full' => FALSE,
    'group_analyse|node|fiche_indicateur|full' => FALSE,
    'group_pistes|node|fiche_indicateur|full' => FALSE,
    'group_analyse|node|fiche_indicateur|default' => FALSE,
    'group_qualite|node|fiche_indicateur|default' => FALSE,
    'group_avantages|node|fiche_indicateur|default' => FALSE,
    'group_orientations_principales|node|fiche_indicateur|default' => FALSE,
    'group_objectifs_snb_principaux|node|fiche_indicateur|default' => FALSE,
    'group_breve_definition|node|fiche_indicateur|default' => FALSE,
    'group_orientations_objectifs|node|fiche_indicateur|default' => FALSE,
    'group_objectifs_snb_secondaires|node|fiche_indicateur|default' => FALSE,
    'group_relation_objectifs|node|fiche_indicateur|default' => FALSE,
    'group_limites|node|fiche_indicateur|default' => FALSE,
    'group_pistes|node|fiche_indicateur|default' => FALSE,
    'group_pistes_groupe|node|fiche_indicateur|default' => FALSE,
    'group_type_dpsir|node|fiche_indicateur|default' => FALSE,
    'group_type_pression|node|fiche_indicateur|default' => FALSE,
    'group_milieux_concernes|node|fiche_indicateur|default' => FALSE,
    'group_couverture_geo|node|fiche_indicateur|default' => FALSE,
    'group_echelle_restitution|node|fiche_indicateur|default' => FALSE,
    'group_grain_precision_echelle|node|fiche_indicateur|default' => FALSE,
    'group_type_variable|node|fiche_indicateur|default' => FALSE,
    'group_unite_mesure|node|fiche_indicateur|default' => FALSE,
    'group_valeur_cible|node|fiche_indicateur|default' => FALSE,
    'group_continuite_snb|node|fiche_indicateur|default' => FALSE,
    'group_retro_calcul|node|fiche_indicateur|default' => FALSE,
    'group_relation_indicateurs|node|fiche_indicateur|default' => FALSE,
    'group_production|node|fiche_indicateur|default' => FALSE,
    'group_producteur|node|fiche_indicateur|default' => FALSE,
    'group_visuels|node|fiche_indicateur|default' => FALSE,
    'group_presentation|node|fiche_indicateur|default' => FALSE,
    'group_origine_source|node|fiche_indicateur|default' => FALSE,
    'group_methodologie|node|fiche_indicateur|default' => FALSE,
    'group_pas_tps_disponibilite|node|fiche_indicateur|default' => FALSE,
    'group_pas_tps_restitution|node|fiche_indicateur|default' => FALSE,
    'group_date_publication|node|fiche_indicateur|default' => FALSE,
    'group_rupture_serie|node|fiche_indicateur|default' => FALSE,
    'group_mod_interpretation|node|fiche_indicateur|default' => FALSE,
    'group_valeurannee|node|fiche_indicateur|default' => FALSE,
    'group_analyse|node|fiche_indicateur|print' => FALSE,
    'group_qualite|node|fiche_indicateur|print' => FALSE,
    'group_avantages|node|fiche_indicateur|print' => FALSE,
    'group_orientations_principales|node|fiche_indicateur|print' => FALSE,
    'group_objectifs_snb_principaux|node|fiche_indicateur|print' => FALSE,
    'group_definition|node|fiche_indicateur|print' => FALSE,
    'group_breve_definition|node|fiche_indicateur|print' => FALSE,
    'group_orientations_objectifs|node|fiche_indicateur|print' => FALSE,
    'group_objectifs_snb_secondaires|node|fiche_indicateur|print' => FALSE,
    'group_relation_objectifs|node|fiche_indicateur|print' => FALSE,
    'group_limites|node|fiche_indicateur|print' => FALSE,
    'group_pistes|node|fiche_indicateur|print' => FALSE,
    'group_pistes_groupe|node|fiche_indicateur|print' => FALSE,
    'group_type_dpsir|node|fiche_indicateur|print' => FALSE,
    'group_type_pression|node|fiche_indicateur|print' => FALSE,
    'group_milieux_concernes|node|fiche_indicateur|print' => FALSE,
    'group_couverture_geo|node|fiche_indicateur|print' => FALSE,
    'group_echelle_restitution|node|fiche_indicateur|print' => FALSE,
    'group_grain_precision_echelle|node|fiche_indicateur|print' => FALSE,
    'group_type_variable|node|fiche_indicateur|print' => FALSE,
    'group_unite_mesure|node|fiche_indicateur|print' => FALSE,
    'group_valeur_cible|node|fiche_indicateur|print' => FALSE,
    'group_continuite_snb|node|fiche_indicateur|print' => FALSE,
    'group_retro_calcul|node|fiche_indicateur|print' => FALSE,
    'group_relation_indicateurs|node|fiche_indicateur|print' => FALSE,
    'group_production|node|fiche_indicateur|print' => FALSE,
    'group_producteur|node|fiche_indicateur|print' => FALSE,
    'group_visuels|node|fiche_indicateur|print' => FALSE,
    'group_presentation|node|fiche_indicateur|print' => FALSE,
    'group_origine_source|node|fiche_indicateur|print' => FALSE,
    'group_methodologie|node|fiche_indicateur|print' => FALSE,
    'group_pas_tps_disponibilite|node|fiche_indicateur|print' => FALSE,
    'group_pas_tps_restitution|node|fiche_indicateur|print' => FALSE,
    'group_date_publication|node|fiche_indicateur|print' => FALSE,
    'group_rupture_serie|node|fiche_indicateur|print' => FALSE,
    'group_mod_interpretation|node|fiche_indicateur|print' => FALSE,
    'group_valeurannee|node|fiche_indicateur|print' => FALSE,
    'group_sousquestion_details|field_collection_item|field_sousquestion_indicateur|form' => TRUE,
    'group_sousquestion_indic_phrase|field_collection_item|field_sousquestion_indicateur|form' => FALSE,
    'group_sousquestion_indic_visuels|field_collection_item|field_sousquestion_indicateur|form' => FALSE,
    'group_sousquestion_indic_compl|field_collection_item|field_sousquestion_indicateur|form' => FALSE,
    'group_sousquestion_indicateurs|field_collection_item|field_sousquestion|form' => FALSE,
    'group_sousquestion_indicateur|field_collection_item|field_sousquestion|form' => FALSE,
    'group_analyse|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_qualite|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_avantages|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_orientations_principales|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_objectifs_snb_principaux|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_definition|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_breve_definition|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_orientations_objectifs|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_objectifs_snb_secondaires|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_relation_objectifs|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_limites|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_pistes|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_pistes_groupe|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_type_dpsir|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_type_pression|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_milieux_concernes|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_couverture_geo|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_echelle_restitution|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_grain_precision_echelle|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_type_variable|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_unite_mesure|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_valeur_cible|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_continuite_snb|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_retro_calcul|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_relation_indicateurs|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_production|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_producteur|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_visuels|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_presentation|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_origine_source|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_methodologie|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_pas_tps_disponibilite|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_pas_tps_restitution|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_date_publication|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_rupture_serie|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_mod_interpretation|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_valeurannee|node|fiche_indicateur|question_indicateur' => FALSE,
    'group_modalite_interpretation|node|fiche_indicateur|question_indicateur_ok' => FALSE,
    'group_enbref|node|fiche_indicateur|full' => FALSE,
    'group_relation_obj|node|fiche_indicateur|question_indicateur_ok' => FALSE,
    'group_obj_snb|node|fiche_indicateur|form' => TRUE,
    'group_obj_cdb|node|fiche_indicateur|form' => TRUE,
    'group_cdb|node|fiche_indicateur|form' => FALSE,
    'group_sueb|node|fiche_indicateur|form' => FALSE,
    'group_analyse_frb|node|fiche_indicateur|form' => FALSE,
    'group_anal_frb|node|fiche_indicateur|form' => TRUE,
    'group_analyse_frb|node|fiche_indicateur|full' => FALSE,
    'group_cdb|node|fiche_indicateur|print' => FALSE,
    'group_sueb|node|fiche_indicateur|print' => FALSE,
    'group_analyse_frb|node|fiche_indicateur|print' => FALSE,
    'group_anal_frb|node|fiche_indicateur|print' => FALSE,
    'group_enbref_impression|node|fiche_indicateur|print' => FALSE,
    'group_jeu|node|fiche_indicateur|form' => FALSE,
    'group_references_ressource|node|fiche_ressource_bibliographique|form' => FALSE,
    'group_perimetre|node|fiche_ressource_bibliographique|form' => FALSE,
    'group_activites|node|fiche_ressource_bibliographique|form' => FALSE,
    'group_ref_peri_activites|node|fiche_ressource_bibliographique|form' => FALSE,
  );
  $export['default_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_file_type';
  $strongarm->value = array(
    'application' => TRUE,
  );
  $export['default_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_nodes_main';
  $strongarm->value = '10';
  $export['default_nodes_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_debug_visible_div';
  $strongarm->value = 0;
  $export['disable_messages_debug_visible_div'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_enable';
  $strongarm->value = 1;
  $export['disable_messages_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_enable_debug';
  $strongarm->value = 0;
  $export['disable_messages_enable_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_exclude_users';
  $strongarm->value = '';
  $export['disable_messages_exclude_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_filter_by_page';
  $strongarm->value = 0;
  $export['disable_messages_filter_by_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_ignore_case';
  $strongarm->value = 1;
  $export['disable_messages_ignore_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_ignore_patterns';
  $strongarm->value = '';
  $export['disable_messages_ignore_patterns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_ignore_regex';
  $strongarm->value = array();
  $export['disable_messages_ignore_regex'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_messages_page_filter_paths';
  $strongarm->value = '';
  $export['disable_messages_page_filter_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_contextual';
  $strongarm->value = 0;
  $export['ds_extras_contextual'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra';
  $strongarm->value = 0;
  $export['ds_extras_fields_extra'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra_list';
  $strongarm->value = '';
  $export['ds_extras_fields_extra_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_template';
  $strongarm->value = 0;
  $export['ds_extras_field_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hide_page_title';
  $strongarm->value = 0;
  $export['ds_extras_hide_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_region_blocks';
  $strongarm->value = array(
    'barre_de_gauche' => array(
      'title' => 'Barre de gauche',
      'info' => 'node_fiche_indicateur_full',
    ),
    'barre_de_gauche_question' => array(
      'title' => 'Barre de gauche question',
      'info' => 'node_question_full',
    ),
    'barre_de_gauche_question_impress' => array(
      'title' => 'Barre de gauche question impression',
      'info' => 'node_question_print',
    ),
    'barre_de_gauche_question_fiche_s' => array(
      'title' => 'Barre de gauche question fiche synthetique',
      'info' => 'node_question_full',
    ),
    'barre_de_gauche_thematique' => array(
      'title' => 'Barre de gauche thematique',
      'info' => 'taxonomy_term_jeux_d_indicateurs_full',
    ),
    'barre_de_gauche_impression' => array(
      'title' => 'Barre de gauche - impression',
      'info' => 'node_fiche_indicateur_print',
    ),
  );
  $export['ds_extras_region_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_region_to_block';
  $strongarm->value = 1;
  $export['ds_extras_region_to_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_revision_view_mode';
  $strongarm->value = 0;
  $export['ds_extras_revision_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_field';
  $strongarm->value = 0;
  $export['ds_extras_switch_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_view_mode';
  $strongarm->value = 0;
  $export['ds_extras_switch_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_vd';
  $strongarm->value = 0;
  $export['ds_extras_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'event_calendar_node_type';
  $strongarm->value = 'event_calendar';
  $export['event_calendar_node_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert';
  $strongarm->value = 0;
  $export['extlink_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert_text';
  $strongarm->value = 'This link will take you to an external web site.';
  $export['extlink_alert_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_class';
  $strongarm->value = 'ext';
  $export['extlink_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_css_exclude';
  $strongarm->value = '';
  $export['extlink_css_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_css_explicit';
  $strongarm->value = '';
  $export['extlink_css_explicit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_exclude';
  $strongarm->value = '';
  $export['extlink_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_img_class';
  $strongarm->value = 0;
  $export['extlink_img_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_include';
  $strongarm->value = '';
  $export['extlink_include'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_mailto_class';
  $strongarm->value = 'mailto';
  $export['extlink_mailto_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_subdomains';
  $strongarm->value = 1;
  $export['extlink_subdomains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_target';
  $strongarm->value = '_blank';
  $export['extlink_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:search_api@search_fiches_biblio';
  $strongarm->value = -1;
  $export['facetapi:block_cache:search_api@search_fiches_biblio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings';
  $strongarm->value = '';
  $export['field_bundle_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__lien_thematiques_questions';
  $strongarm->value = array(
    'view_modes' => array(
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'default' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-9',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__lien_thematiques_questions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_analyse_frb';
  $strongarm->value = array(
    'view_modes' => array(
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'sousquestion_indicateur_impress' => array(
        'custom_settings' => FALSE,
      ),
      'sous_question_impress' => array(
        'custom_settings' => FALSE,
      ),
      'visuels_indicateurs' => array(
        'custom_settings' => FALSE,
      ),
      'impression_field_collection' => array(
        'custom_settings' => TRUE,
      ),
      'sous_question_gauche' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_analyse_frb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_collecvisuels';
  $strongarm->value = array(
    'view_modes' => array(
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'visuels_indicateurs' => array(
        'custom_settings' => TRUE,
      ),
      'sousquestion_indicateur_impress' => array(
        'custom_settings' => FALSE,
      ),
      'sous_question_impress' => array(
        'custom_settings' => FALSE,
      ),
      'visuel_indicateur_page' => array(
        'custom_settings' => FALSE,
      ),
      'impression_field_collection' => array(
        'custom_settings' => TRUE,
      ),
      'sous_question_gauche' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_collecvisuels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_definitions';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser2' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'impression_field_collection' => array(
        'custom_settings' => FALSE,
      ),
      'sousquestion_indicateur_impress' => array(
        'custom_settings' => FALSE,
      ),
      'sous_question_gauche' => array(
        'custom_settings' => FALSE,
      ),
      'sous_question_impress' => array(
        'custom_settings' => FALSE,
      ),
      'visuels_indicateurs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_definitions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_sousquestion';
  $strongarm->value = array(
    'view_modes' => array(
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'visuels_indicateurs' => array(
        'custom_settings' => FALSE,
      ),
      'sous_question_impress' => array(
        'custom_settings' => TRUE,
      ),
      'sousquestion_indicateur_impress' => array(
        'custom_settings' => FALSE,
      ),
      'sous_question_gauche' => array(
        'custom_settings' => TRUE,
      ),
      'impression_field_collection' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'questions_liees_indicateurs_entity_view_2' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'sous_question_impress' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'sous_question_gauche' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'impression_field_collection' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_sousquestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_sousquestion_indicateur';
  $strongarm->value = array(
    'view_modes' => array(
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'visuels_indicateurs' => array(
        'custom_settings' => FALSE,
      ),
      'sousquestion_indicateur_impress' => array(
        'custom_settings' => TRUE,
      ),
      'sous_question_impress' => array(
        'custom_settings' => FALSE,
      ),
      'impression_field_collection' => array(
        'custom_settings' => TRUE,
      ),
      'sous_question_gauche' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'reverse_entity_entity_view_1' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'sousquestion_indicateur_impress' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'impression_field_collection' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_sousquestion_indicateur'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_valeurannee';
  $strongarm->value = array(
    'view_modes' => array(
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'visuels_indicateurs' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_valeurannee'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__default';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__auteur_e';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__auteur_e'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__fiche_ressource_bibliographique';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__jeux_d_indicateurs';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'objectifs_sans_texte' => array(
        'custom_settings' => FALSE,
      ),
      'taxonomie_colorbox' => array(
        'custom_settings' => TRUE,
      ),
      'thematique_lien_question' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '6',
        ),
        'name' => array(
          'weight' => '0',
        ),
        'description' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'entityreference_view_widget' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'taxonomie_colorbox' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'thematique_lien_question' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'print' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__jeux_d_indicateurs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__objectifs_snb';
  $strongarm->value = array(
    'view_modes' => array(
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'taxonomie_colorbox' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'objectifs_sans_texte' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'taxonomie_colorbox' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'objectifs_sans_texte' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__objectifs_snb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__orientations_strat_giques';
  $strongarm->value = array(
    'view_modes' => array(
      'entityreference_view_widget' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'taxonomie_colorbox' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'taxonomie_colorbox' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__orientations_strat_giques'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__thematiquetest';
  $strongarm->value = array();
  $export['field_bundle_settings_taxonomy_term__thematiquetest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-field_continuite_snb';
  $strongarm->value = array(
    'save_lineage' => '0',
    'enforce_deepest' => '0',
    'resizable' => '1',
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 0,
      'title' => 'Toutes les sélections',
      'limit' => '0',
      'reset_hs' => '1',
      'sort' => 1,
    ),
    'editability' => array(
      'status' => 0,
      'item_types' => array(
        0 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => '0',
    ),
    'entity_count' => array(
      'enabled' => 0,
      'require_entity' => 0,
      'settings' => array(
        'count_children' => 0,
        'entity_types' => array(
          'comment' => array(
            'count_comment' => array(
              'comment_node_actualite' => 0,
              'comment_node_fiche_indicateur' => 0,
              'comment_node_page' => 0,
              'comment_node_producteur' => 0,
              'comment_node_question' => 0,
            ),
          ),
          'field_collection_item' => array(
            'count_field_collection_item' => array(
              'field_collecvisuels' => 0,
              'field_sousquestion' => 0,
              'field_sousquestion_indicateur' => 0,
              'field_valeurannee' => 0,
              'field_analyse_frb' => 0,
              'field_definitions' => 0,
            ),
          ),
          'node' => array(
            'count_node' => array(
              'actualite' => 'actualite',
              'fiche_indicateur' => 'fiche_indicateur',
              'page' => 'page',
              'producteur' => 'producteur',
              'question' => 'question',
            ),
          ),
          'file' => array(
            'count_file' => array(
              'audio' => 0,
              'document' => 0,
              'image' => 0,
              'video' => 0,
            ),
          ),
          'taxonomy_term' => array(
            'count_taxonomy_term' => array(
              'tags' => 0,
              'orientations_strat_giques' => 0,
              'piste_d_indicateur' => 0,
              'objectifs_snb' => 0,
              'type_dpsir' => 0,
              'couverture_g_ographique' => 0,
              'd_clinaisons_locales' => 0,
              'sensibilit_' => 0,
              'continuit_du_jeu_national' => 0,
              'type_de_pr_sentation' => 0,
              'qualit_' => 0,
              'disponibilite' => 0,
              'type_de_pression' => 0,
              'milieux' => 0,
              'echelle' => 0,
              'type_de_variable' => 0,
              'unit_de_mesure' => 0,
              'indicateurs_quivalents' => 0,
              'pas_de_temps' => 0,
              'rupture_de_s_rie' => 0,
              'niveau_d_appropriation' => 0,
              'media_folders' => 0,
              'mots_cl_s' => 0,
              'jeux_d_indicateurs' => 0,
              'biais' => 0,
              'cdb' => 0,
              'sueb' => 0,
              'statut_de_publication' => 0,
              'type_de_th_matique' => 0,
              'headline' => 0,
              'thematiquetest' => 0,
              'sigle' => 0,
              'thematique' => 0,
              'glossaire' => 0,
            ),
          ),
          'user' => array(
            'count_user' => array(
              'user' => 0,
            ),
          ),
          'rules_config' => array(
            'count_rules_config' => array(
              'rules_config' => 0,
            ),
          ),
        ),
      ),
    ),
    'animation_delay' => 400,
    'special_items' => array(),
    'render_flat_select' => 0,
    'config_id' => 'taxonomy-field_continuite_snb',
  );
  $export['hs_config_taxonomy-field_continuite_snb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-field_relation_indicateurs';
  $strongarm->value = array(
    'save_lineage' => '0',
    'enforce_deepest' => '0',
    'resizable' => '0',
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 1,
      'title' => 'All selections',
      'limit' => '0',
      'reset_hs' => '1',
      'sort' => 1,
    ),
    'editability' => array(
      'status' => 1,
      'item_types' => array(
        0 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => '0',
    ),
    'entity_count' => array(
      'enabled' => 0,
      'require_entity' => 0,
      'settings' => array(
        'count_children' => 0,
        'entity_types' => array(
          'comment' => array(
            'count_comment' => array(
              'comment_node_actualite' => 0,
              'comment_node_fiche_indicateur' => 0,
              'comment_node_page' => 0,
              'comment_node_producteur' => 0,
              'comment_node_question' => 0,
            ),
          ),
          'field_collection_item' => array(
            'count_field_collection_item' => array(
              'field_collecvisuels' => 0,
              'field_sousquestion' => 0,
              'field_sousquestion_indicateur' => 0,
              'field_valeurannee' => 0,
              'field_analyse_frb' => 0,
              'field_definitions' => 0,
            ),
          ),
          'node' => array(
            'count_node' => array(
              'actualite' => 'actualite',
              'fiche_indicateur' => 'fiche_indicateur',
              'page' => 'page',
              'producteur' => 'producteur',
              'question' => 'question',
            ),
          ),
          'file' => array(
            'count_file' => array(
              'audio' => 0,
              'document' => 0,
              'image' => 0,
              'video' => 0,
            ),
          ),
          'taxonomy_term' => array(
            'count_taxonomy_term' => array(
              'tags' => 0,
              'orientations_strat_giques' => 0,
              'piste_d_indicateur' => 0,
              'objectifs_snb' => 0,
              'type_dpsir' => 0,
              'couverture_g_ographique' => 0,
              'd_clinaisons_locales' => 0,
              'sensibilit_' => 0,
              'continuit_du_jeu_national' => 0,
              'type_de_pr_sentation' => 0,
              'qualit_' => 0,
              'disponibilite' => 0,
              'type_de_pression' => 0,
              'milieux' => 0,
              'echelle' => 0,
              'type_de_variable' => 0,
              'unit_de_mesure' => 0,
              'indicateurs_quivalents' => 0,
              'pas_de_temps' => 0,
              'rupture_de_s_rie' => 0,
              'niveau_d_appropriation' => 0,
              'media_folders' => 0,
              'mots_cl_s' => 0,
              'jeux_d_indicateurs' => 0,
              'biais' => 0,
              'cdb' => 0,
              'sueb' => 0,
              'statut_de_publication' => 0,
              'type_de_th_matique' => 0,
              'headline' => 0,
              'thematiquetest' => 0,
              'sigle' => 0,
              'thematique' => 0,
              'glossaire' => 0,
            ),
          ),
          'user' => array(
            'count_user' => array(
              'user' => 0,
            ),
          ),
          'rules_config' => array(
            'count_rules_config' => array(
              'rules_config' => 0,
            ),
          ),
        ),
      ),
    ),
    'animation_delay' => 400,
    'special_items' => array(),
    'render_flat_select' => 0,
    'config_id' => 'taxonomy-field_relation_indicateurs',
  );
  $export['hs_config_taxonomy-field_relation_indicateurs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-field_unite_mesure';
  $strongarm->value = array(
    'save_lineage' => '0',
    'enforce_deepest' => '0',
    'resizable' => '0',
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 0,
      'title' => 'All selections',
      'limit' => '0',
      'reset_hs' => '1',
      'sort' => 1,
    ),
    'editability' => array(
      'status' => 1,
      'item_types' => array(
        0 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => '1',
    ),
    'entity_count' => array(
      'enabled' => 0,
      'require_entity' => 0,
      'settings' => array(
        'count_children' => 0,
        'entity_types' => array(
          'comment' => array(
            'count_comment' => array(
              'comment_node_actualite' => 0,
              'comment_node_fiche_indicateur' => 0,
              'comment_node_page' => 0,
              'comment_node_producteur' => 0,
              'comment_node_question' => 0,
            ),
          ),
          'field_collection_item' => array(
            'count_field_collection_item' => array(
              'field_collecvisuels' => 0,
              'field_sousquestion' => 0,
              'field_sousquestion_indicateur' => 0,
              'field_valeurannee' => 0,
              'field_analyse_frb' => 0,
              'field_definitions' => 0,
            ),
          ),
          'node' => array(
            'count_node' => array(
              'actualite' => 'actualite',
              'fiche_indicateur' => 'fiche_indicateur',
              'page' => 'page',
              'producteur' => 'producteur',
              'question' => 'question',
            ),
          ),
          'file' => array(
            'count_file' => array(
              'audio' => 0,
              'document' => 0,
              'image' => 0,
              'video' => 0,
            ),
          ),
          'taxonomy_term' => array(
            'count_taxonomy_term' => array(
              'tags' => 0,
              'orientations_strat_giques' => 0,
              'piste_d_indicateur' => 0,
              'objectifs_snb' => 0,
              'type_dpsir' => 0,
              'couverture_g_ographique' => 0,
              'd_clinaisons_locales' => 0,
              'sensibilit_' => 0,
              'continuit_du_jeu_national' => 0,
              'type_de_pr_sentation' => 0,
              'qualit_' => 0,
              'disponibilite' => 0,
              'type_de_pression' => 0,
              'milieux' => 0,
              'echelle' => 0,
              'type_de_variable' => 0,
              'unit_de_mesure' => 0,
              'indicateurs_quivalents' => 0,
              'pas_de_temps' => 0,
              'rupture_de_s_rie' => 0,
              'niveau_d_appropriation' => 0,
              'media_folders' => 0,
              'mots_cl_s' => 0,
              'jeux_d_indicateurs' => 0,
              'biais' => 0,
              'cdb' => 0,
              'sueb' => 0,
              'statut_de_publication' => 0,
              'type_de_th_matique' => 0,
              'headline' => 0,
              'thematiquetest' => 0,
              'sigle' => 0,
              'thematique' => 0,
              'glossaire' => 0,
            ),
          ),
          'user' => array(
            'count_user' => array(
              'user' => 0,
            ),
          ),
          'rules_config' => array(
            'count_rules_config' => array(
              'rules_config' => 0,
            ),
          ),
        ),
      ),
    ),
    'animation_delay' => 400,
    'special_items' => array(),
    'render_flat_select' => 0,
    'config_id' => 'taxonomy-field_unite_mesure',
  );
  $export['hs_config_taxonomy-field_unite_mesure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_hide_translation_links';
  $strongarm->value = 1;
  $export['i18n_hide_translation_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_default_language_for_event_calendar';
  $strongarm->value = '-- current --';
  $export['i18n_node_default_language_for_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_default_language_for_fiche_ressource_bibliographique';
  $strongarm->value = '-- current --';
  $export['i18n_node_default_language_for_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_default_language_none';
  $strongarm->value = '0';
  $export['i18n_node_default_language_none'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_event_calendar';
  $strongarm->value = '1';
  $export['i18n_node_extended_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_fiche_ressource_bibliographique';
  $strongarm->value = '1';
  $export['i18n_node_extended_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_event_calendar';
  $strongarm->value = array(
    0 => 'current',
  );
  $export['i18n_node_options_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_fiche_ressource_bibliographique';
  $strongarm->value = array(
    0 => 'current',
  );
  $export['i18n_node_options_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_allowed_formats';
  $strongarm->value = array(
    'full_html' => 'full_html',
    'filtered_html' => 'filtered_html',
    'plain_text' => 'plain_text',
    'ds_code' => 0,
  );
  $export['i18n_string_allowed_formats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_source_language';
  $strongarm->value = 'en';
  $export['i18n_string_source_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_auteur_e';
  $strongarm->value = array();
  $export['i18n_sync_node_type_auteur_e'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_event_calendar';
  $strongarm->value = array();
  $export['i18n_sync_node_type_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_fiche_ressource_bibliographique';
  $strongarm->value = array();
  $export['i18n_sync_node_type_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagefield_crop_info';
  $strongarm->value = array(
    34 => array(
      'x' => '0',
      'y' => '181',
      'width' => '848',
      'height' => '283',
    ),
    38 => array(
      'x' => '0',
      'y' => '302',
      'width' => '1280',
      'height' => '465',
    ),
    220 => array(
      'x' => '0',
      'y' => '1032',
      'width' => '4064',
      'height' => '1471',
    ),
    222 => array(
      'x' => '0',
      'y' => '471',
      'width' => '4288',
      'height' => '1552',
    ),
    224 => array(
      'x' => '0',
      'y' => '222',
      'width' => '4288',
      'height' => '1552',
    ),
    228 => array(
      'x' => '0',
      'y' => '59',
      'width' => '800',
      'height' => '289',
    ),
    234 => array(
      'x' => '0',
      'y' => '297',
      'width' => '2288',
      'height' => '828',
    ),
    236 => array(
      'x' => '0',
      'y' => '144',
      'width' => '4256',
      'height' => '1540',
    ),
    218 => array(
      'x' => '0',
      'y' => '658',
      'width' => '4064',
      'height' => '1471',
    ),
    457 => array(
      'x' => '0',
      'y' => '463',
      'width' => '3562',
      'height' => '1289',
    ),
    455 => array(
      'x' => '3',
      'y' => '0',
      'width' => '766',
      'height' => '277',
    ),
    459 => array(
      'x' => '0',
      'y' => '0',
      'width' => '4288',
      'height' => '1552',
    ),
    530 => array(
      'x' => '0',
      'y' => '621',
      'width' => '4256',
      'height' => '1540',
    ),
    458 => array(
      'x' => '0',
      'y' => '617',
      'width' => '4064',
      'height' => '1471',
    ),
    456 => array(
      'x' => '0',
      'y' => '68',
      'width' => '4279',
      'height' => '1543',
    ),
    453 => array(
      'x' => '0',
      'y' => '98',
      'width' => '3072',
      'height' => '1112',
    ),
    454 => array(
      'x' => '0',
      'y' => '272',
      'width' => '4256',
      'height' => '1540',
    ),
    541 => array(
      'x' => '0',
      'y' => '245',
      'width' => '640',
      'height' => '231',
    ),
    451 => array(
      'x' => '0',
      'y' => '0',
      'width' => '4256',
      'height' => '1540',
    ),
    544 => array(
      'x' => '0',
      'y' => '0',
      'width' => '4288',
      'height' => '1552',
    ),
    547 => array(
      'x' => '0',
      'y' => '136',
      'width' => '4256',
      'height' => '1540',
    ),
    550 => array(
      'x' => '0',
      'y' => '476',
      'width' => '4256',
      'height' => '1540',
    ),
    552 => array(
      'x' => '0',
      'y' => '482',
      'width' => '2977',
      'height' => '1077',
    ),
    554 => array(
      'x' => '0',
      'y' => '817',
      'width' => '4256',
      'height' => '1540',
    ),
    556 => array(
      'x' => '0',
      'y' => '493',
      'width' => '4256',
      'height' => '1540',
    ),
    558 => array(
      'x' => '0',
      'y' => '629',
      'width' => '4256',
      'height' => '1540',
    ),
    560 => array(
      'x' => '0',
      'y' => '553',
      'width' => '1600',
      'height' => '579',
    ),
    563 => array(
      'x' => '0',
      'y' => '241',
      'width' => '2048',
      'height' => '741',
    ),
    567 => array(
      'x' => '0',
      'y' => '715',
      'width' => '3472',
      'height' => '1256',
    ),
    569 => array(
      'x' => '0',
      'y' => '831',
      'width' => '4288',
      'height' => '1552',
    ),
    571 => array(
      'x' => '0',
      'y' => '729',
      'width' => '3645',
      'height' => '1319',
    ),
    573 => array(
      'x' => '0',
      'y' => '1220',
      'width' => '4041',
      'height' => '1462',
    ),
    613 => array(
      'x' => '0',
      'y' => '84',
      'width' => '640',
      'height' => '231',
    ),
    617 => array(
      'x' => '0',
      'y' => '410',
      'width' => '2304',
      'height' => '834',
    ),
    622 => array(
      'x' => '0',
      'y' => '608',
      'width' => '2304',
      'height' => '834',
    ),
    624 => array(
      'x' => '0',
      'y' => '238',
      'width' => '4256',
      'height' => '1540',
    ),
    835 => array(
      'x' => '0',
      'y' => '304',
      'width' => '900',
      'height' => '325',
    ),
    839 => array(
      'x' => '-79',
      'y' => '102',
      'width' => '719',
      'height' => '259',
    ),
    841 => array(
      'x' => '0',
      'y' => '66',
      'width' => '1500',
      'height' => '543',
    ),
    845 => array(
      'x' => '0',
      'y' => '225',
      'width' => '1500',
      'height' => '543',
    ),
    847 => array(
      'x' => '0',
      'y' => '303',
      'width' => '1500',
      'height' => '543',
    ),
    219 => array(
      'x' => '0',
      'y' => '626',
      'width' => '2048',
      'height' => '741',
    ),
    1457 => array(
      'x' => '20',
      'y' => '152',
      'width' => '960',
      'height' => '260',
    ),
    1550 => array(
      'x' => '0',
      'y' => '564',
      'width' => '1920',
      'height' => '695',
    ),
    1553 => array(
      'x' => '0',
      'y' => '468',
      'width' => '1920',
      'height' => '695',
    ),
    1555 => array(
      'x' => '0',
      'y' => '195',
      'width' => '1920',
      'height' => '695',
    ),
    1557 => array(
      'x' => '0',
      'y' => '165',
      'width' => '1920',
      'height' => '695',
    ),
    1559 => array(
      'x' => '0',
      'y' => '541',
      'width' => '1920',
      'height' => '695',
    ),
    1565 => array(
      'x' => '0',
      'y' => '217',
      'width' => '1280',
      'height' => '463',
    ),
    1569 => array(
      'x' => '0',
      'y' => '322',
      'width' => '1920',
      'height' => '695',
    ),
    1571 => array(
      'x' => '0',
      'y' => '523',
      'width' => '4288',
      'height' => '1552',
    ),
    1847 => array(
      'x' => '0',
      'y' => '0',
      'width' => '960',
      'height' => '259',
    ),
    1854 => array(
      'x' => '0',
      'y' => '0',
      'width' => '960',
      'height' => '259',
    ),
    1900 => array(
      'x' => '0',
      'y' => '178',
      'width' => '4256',
      'height' => '1540',
    ),
    1902 => array(
      'x' => '0',
      'y' => '927',
      'width' => '4256',
      'height' => '1540',
    ),
    1904 => array(
      'x' => '0',
      'y' => '325',
      'width' => '4288',
      'height' => '1552',
    ),
    1906 => array(
      'x' => '0',
      'y' => '297',
      'width' => '3920',
      'height' => '1419',
    ),
    1908 => array(
      'x' => '0',
      'y' => '493',
      'width' => '4256',
      'height' => '1540',
    ),
    1910 => array(
      'x' => '0',
      'y' => '1285',
      'width' => '4256',
      'height' => '1540',
    ),
    1912 => array(
      'x' => '0',
      'y' => '1023',
      'width' => '3737',
      'height' => '1352',
    ),
    1914 => array(
      'x' => '0',
      'y' => '909',
      'width' => '4288',
      'height' => '1552',
    ),
    1924 => array(
      'x' => '0',
      'y' => '969',
      'width' => '4288',
      'height' => '1552',
    ),
    1930 => array(
      'x' => '0',
      'y' => '729',
      'width' => '4006',
      'height' => '1450',
    ),
    1932 => array(
      'x' => '0',
      'y' => '478',
      'width' => '1856',
      'height' => '671',
    ),
    1934 => array(
      'x' => '0',
      'y' => '131',
      'width' => '3872',
      'height' => '1401',
    ),
    1960 => array(
      'x' => '0',
      'y' => '861',
      'width' => '3264',
      'height' => '881',
    ),
    1962 => array(
      'x' => '0',
      'y' => '748',
      'width' => '3858',
      'height' => '1041',
    ),
    1984 => array(
      'x' => '40',
      'y' => '1',
      'width' => '919',
      'height' => '259',
    ),
  );
  $export['imagefield_crop_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => 0,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
          'crop' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Sample profile',
      'usertab' => 1,
      'filesize' => 1,
      'quota' => 2,
      'tuquota' => 0,
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => 1,
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
          'crop' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  );
  $export['imce_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array(
    5 => array(
      'weight' => '0',
      'public_pid' => 0,
      'private_pid' => 0,
    ),
    4 => array(
      'weight' => '0',
      'public_pid' => '1',
      'private_pid' => 0,
    ),
    3 => array(
      'weight' => '0',
      'public_pid' => '1',
      'private_pid' => 0,
    ),
    2 => array(
      'weight' => 11,
      'public_pid' => 0,
      'private_pid' => 0,
    ),
    1 => array(
      'weight' => 12,
      'public_pid' => 0,
      'private_pid' => 0,
    ),
  );
  $export['imce_roles_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_absurls';
  $strongarm->value = 0;
  $export['imce_settings_absurls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_disable_private';
  $strongarm->value = 1;
  $export['imce_settings_disable_private'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_replace';
  $strongarm->value = '0';
  $export['imce_settings_replace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_textarea';
  $strongarm->value = '';
  $export['imce_settings_textarea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_thumb_method';
  $strongarm->value = 'scale_and_crop';
  $export['imce_settings_thumb_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_auteur_e';
  $strongarm->value = '0';
  $export['language_content_type_auteur_e'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_event_calendar';
  $strongarm->value = '2';
  $export['language_content_type_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fiche_ressource_bibliographique';
  $strongarm->value = '2';
  $export['language_content_type_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_thematique';
  $strongarm->value = 0;
  $export['language_content_type_thematique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 2;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => '0',
    'javascript' => 'SztkfNQuZ47ibN1VaxPzWp0Mkb2RJ4oMhYhV4OjZmnM',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
    'locale-browser' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_browser',
      ),
      'file' => 'includes/locale.inc',
      'cache' => 0,
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language';
  $strongarm->value = array(
    'locale-url' => -10,
    'locale-session' => -6,
    'locale-user' => -9,
    'locale-browser' => -7,
    'language-default' => -8,
  );
  $export['locale_language_providers_weight_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = FALSE;
  $export['maintenance_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode_message';
  $strongarm->value = 'Indicateurs ONB est en cours de maintenance. Nous serons de retour très bientôt. Merci de votre patience.';
  $export['maintenance_mode_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 493,
    4 => 490,
    5 => 255,
    6 => 253,
    7 => 252,
    8 => 251,
    9 => 250,
    10 => 247,
    11 => 246,
    12 => 245,
    13 => 242,
    14 => 241,
    15 => 238,
    16 => 234,
    17 => 127,
    18 => 126,
    19 => 125,
    20 => 124,
    21 => 123,
    22 => 122,
    23 => 121,
    24 => 120,
    25 => 119,
    26 => 118,
    27 => 117,
    28 => 112,
    29 => 63,
    30 => 62,
    31 => 61,
    32 => 60,
    33 => 59,
    34 => 58,
    35 => 56,
    36 => 44,
    37 => 31,
    38 => 30,
    39 => 29,
    40 => 28,
    41 => 26,
    42 => 24,
    43 => 23,
    44 => 21,
    45 => 15,
    46 => 14,
    47 => 13,
    48 => 12,
    49 => 11,
    50 => 10,
    51 => 7,
    52 => 6,
    53 => 5,
    54 => 4,
    55 => 3,
    56 => 2,
    57 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_auteur_e';
  $strongarm->value = array();
  $export['menu_options_auteur_e'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event_calendar';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fiche_ressource_bibliographique';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_thematique';
  $strongarm->value = array();
  $export['menu_options_thematique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_auteur_e';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_auteur_e'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event_calendar';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fiche_ressource_bibliographique';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_thematique';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_thematique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_position_active_link_display';
  $strongarm->value = 'parent';
  $export['menu_position_active_link_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_actualite';
  $strongarm->value = 1;
  $export['node_export_reset_changed_actualite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_fiche_indicateur';
  $strongarm->value = 1;
  $export['node_export_reset_changed_fiche_indicateur'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_page';
  $strongarm->value = 1;
  $export['node_export_reset_changed_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_producteur';
  $strongarm->value = 1;
  $export['node_export_reset_changed_producteur'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_question';
  $strongarm->value = 1;
  $export['node_export_reset_changed_question'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_auteur_e';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_auteur_e'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event_calendar';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fiche_ressource_bibliographique';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_thematique';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_thematique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_auteur_e';
  $strongarm->value = '1';
  $export['node_preview_auteur_e'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event_calendar';
  $strongarm->value = '0';
  $export['node_preview_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fiche_ressource_bibliographique';
  $strongarm->value = '1';
  $export['node_preview_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_auteur_e';
  $strongarm->value = 0;
  $export['node_submitted_auteur_e'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event_calendar';
  $strongarm->value = 0;
  $export['node_submitted_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fiche_ressource_bibliographique';
  $strongarm->value = 0;
  $export['node_submitted_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_thematique';
  $strongarm->value = 0;
  $export['node_submitted_thematique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_auteur_e';
  $strongarm->value = '[node:field-nom] [node:field-prenom]';
  $export['page_title_type_auteur_e'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_auteur_e_showfield';
  $strongarm->value = 0;
  $export['page_title_type_auteur_e_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_fiche_ressource_bibliographique';
  $strongarm->value = '';
  $export['page_title_type_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_fiche_ressource_bibliographique_showfield';
  $strongarm->value = 0;
  $export['page_title_type_fiche_ressource_bibliographique_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_fiche_ressource_bibliographique';
  $strongarm->value = 1;
  $export['print_display_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_fiche_ressource_bibliographique';
  $strongarm->value = 1;
  $export['print_display_urllist_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_display_comment_fiche_ressource_bibliographique';
  $strongarm->value = 0;
  $export['print_pdf_display_comment_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_display_fiche_ressource_bibliographique';
  $strongarm->value = 1;
  $export['print_pdf_display_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_pdf_display_urllist_fiche_ressource_bibliographique';
  $strongarm->value = 1;
  $export['print_pdf_display_urllist_fiche_ressource_bibliographique'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = '';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = '';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'FR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/11';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'admindrupal@espaces-naturels.fr';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_categories_depth';
  $strongarm->value = 'all';
  $export['site_map_categories_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_css';
  $strongarm->value = 0;
  $export['site_map_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_forum_threshold';
  $strongarm->value = -1;
  $export['site_map_forum_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_message';
  $strongarm->value = array(
    'value' => '',
    'format' => 'full_html',
  );
  $export['site_map_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_page_title';
  $strongarm->value = 'Plan du site';
  $export['site_map_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_rss_depth';
  $strongarm->value = 'all';
  $export['site_map_rss_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_rss_front';
  $strongarm->value = 'rss.xml';
  $export['site_map_rss_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_count';
  $strongarm->value = 1;
  $export['site_map_show_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_front';
  $strongarm->value = 0;
  $export['site_map_show_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_menus';
  $strongarm->value = array(
    'main-menu' => 'main-menu',
    'devel' => 0,
    'management' => 0,
    'menu-menu-secondaire' => 0,
    'navigation' => 0,
    'user-menu' => 0,
  );
  $export['site_map_show_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_rss_links';
  $strongarm->value = 0;
  $export['site_map_show_rss_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_vocabularies';
  $strongarm->value = array(
    26 => 0,
    9 => 0,
    6 => 0,
    7 => 0,
    12 => 0,
    15 => 0,
    1 => 0,
    19 => 0,
    25 => 0,
    23 => 0,
    14 => 0,
    24 => 0,
    22 => 0,
    4 => 0,
    2 => 0,
    20 => 0,
    3 => 0,
    11 => 0,
    21 => 0,
    8 => 0,
    10 => 0,
    13 => 0,
    16 => 0,
    5 => 0,
    17 => 0,
  );
  $export['site_map_show_vocabularies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_term_threshold';
  $strongarm->value = 0;
  $export['site_map_term_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Indicateurs ONB';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Les indicateurs de l\'Observatoire National de la Biodiversité';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_module_list';
  $strongarm->value = array(
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_translate_langcode_fr',
      2 => 'i18n_string_allowed_formats',
      3 => 'i18n_string_source_language',
      4 => 'i18n_string_debug',
    ),
  );
  $export['variable_module_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_realm_list_language';
  $strongarm->value = array(
    0 => 'site_name',
    1 => 'site_slogan',
    2 => 'site_frontpage',
    3 => 'site_403',
    4 => 'site_404',
    5 => 'maintenance_mode_message',
    6 => 'date_first_day',
    7 => 'user_default_timezone',
    8 => 'user_mail_register_admin_created_[mail_part]',
    9 => 'user_mail_register_no_approval_required_[mail_part]',
    10 => 'user_mail_register_pending_approval_[mail_part]',
    11 => 'user_mail_password_reset_[mail_part]',
    12 => 'user_mail_status_activated_[mail_part]',
    13 => 'user_mail_status_blocked_[mail_part]',
    14 => 'user_mail_cancel_confirm_[mail_part]',
    15 => 'user_mail_status_canceled_[mail_part]',
  );
  $export['variable_realm_list_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_block_hashes';
  $strongarm->value = array();
  $export['views_block_hashes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'indicateurs' => TRUE,
    'indicateurs_apparait_question' => TRUE,
    'recherche_thematique' => TRUE,
    'glossaire' => TRUE,
    'media_default' => TRUE,
    'reverse_entity' => TRUE,
    'admin_views_node' => TRUE,
    'admin_views_user' => TRUE,
    'admin_views_file' => TRUE,
    'calendar' => TRUE,
    'event_calendar' => TRUE,
    'recherche_fiches_biblio' => TRUE,
  );
  $export['views_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_exposed_filter_any_label';
  $strongarm->value = 'new_any';
  $export['views_exposed_filter_any_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_localization_plugin';
  $strongarm->value = 'i18nstrings';
  $export['views_localization_plugin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_show_additional_queries';
  $strongarm->value = 0;
  $export['views_show_additional_queries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_always_live_preview';
  $strongarm->value = 1;
  $export['views_ui_always_live_preview'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_basic';
  $strongarm->value = array(
    'recherche_glossaire' => array(
      0 => 'page',
    ),
    'references_bibliographiques' => array(
      0 => 'page',
    ),
    'recherche_indicateurs' => array(
      0 => 'page',
      1 => 'tableau1',
      2 => 'tableau3',
      3 => 'tableau2',
      4 => 'tableau4',
    ),
    'recherche_questions' => array(
      0 => 'page',
      1 => 'page_2',
      2 => 'page_5',
      3 => 'page_1',
      4 => 'page_4',
      5 => 'page_3',
      6 => 'page_9',
      7 => 'page_8',
    ),
    'recherche_thematiques' => array(
      0 => 'page',
    ),
    'tableau_croise_indicateurs' => array(
      0 => 'page',
      1 => 'page_1',
      2 => 'page_2',
      3 => 'page_3',
      4 => 'page_4',
    ),
  );
  $export['views_ui_basic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_basic_fields';
  $strongarm->value = array(
    'header' => 'header',
  );
  $export['views_ui_basic_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_custom_theme';
  $strongarm->value = '_default';
  $export['views_ui_custom_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_display_embed';
  $strongarm->value = 0;
  $export['views_ui_display_embed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_advanced_column';
  $strongarm->value = 0;
  $export['views_ui_show_advanced_column'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_advanced_help_warning';
  $strongarm->value = 1;
  $export['views_ui_show_advanced_help_warning'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_listing_filters';
  $strongarm->value = 0;
  $export['views_ui_show_listing_filters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_master_display';
  $strongarm->value = 1;
  $export['views_ui_show_master_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_performance_statistics';
  $strongarm->value = 0;
  $export['views_ui_show_performance_statistics'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_preview_information';
  $strongarm->value = 1;
  $export['views_ui_show_preview_information'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_sql_query';
  $strongarm->value = 1;
  $export['views_ui_show_sql_query'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_ui_show_sql_query_where';
  $strongarm->value = 'above';
  $export['views_ui_show_sql_query_where'] = $strongarm;

  return $export;
}
