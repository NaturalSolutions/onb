<?php
/**
 * @file
 * glossaire.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function glossaire_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'recherche_glossaire';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_glossaire';
  $view->human_name = 'Recherche glossaire';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Glossaire';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_definitions' => 'field_definitions',
    'description' => 'description',
    'field_first_letter' => 'field_first_letter',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_definitions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_letter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Indexed Terme de taxonomie: Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed Terme de taxonomie: Vocabulaire */
  $handler->display->display_options['fields']['vocabulary']['id'] = 'vocabulary';
  $handler->display->display_options['fields']['vocabulary']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['fields']['vocabulary']['field'] = 'vocabulary';
  $handler->display->display_options['fields']['vocabulary']['label'] = '';
  $handler->display->display_options['fields']['vocabulary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vocabulary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vocabulary']['link_to_entity'] = 0;
  /* Field: Indexed Terme de taxonomie: Définitions */
  $handler->display->display_options['fields']['field_definitions']['id'] = 'field_definitions';
  $handler->display->display_options['fields']['field_definitions']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['fields']['field_definitions']['field'] = 'field_definitions';
  $handler->display->display_options['fields']['field_definitions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_definitions']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_definitions']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_definitions']['display'] = 'view';
  $handler->display->display_options['fields']['field_definitions']['view_mode'] = 'teaser2';
  $handler->display->display_options['fields']['field_definitions']['bypass_access'] = 0;
  /* Field: Indexed Terme de taxonomie: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['text'] = '<span class="[vocabulary]">[description]</span>';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['link_to_entity'] = 0;
  /* Field: Définitions: Thématique (indexed) */
  $handler->display->display_options['fields']['field_definitions_field_thematique']['id'] = 'field_definitions_field_thematique';
  $handler->display->display_options['fields']['field_definitions_field_thematique']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['fields']['field_definitions_field_thematique']['field'] = 'field_definitions_field_thematique';
  $handler->display->display_options['fields']['field_definitions_field_thematique']['label'] = '';
  $handler->display->display_options['fields']['field_definitions_field_thematique']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_definitions_field_thematique']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_definitions_field_thematique']['list']['mode'] = 'list';
  $handler->display->display_options['fields']['field_definitions_field_thematique']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_definitions_field_thematique']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_definitions_field_thematique']['bypass_access'] = 0;
  /* Field: Global: Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="rouge">[name]<br\\></div>
<div class="noir">[field_definitions]<span class="descrip">[description]</span><br\\></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Terme de taxonomie: Nom */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Terme de taxonomie: Nom */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'not empty';
  $handler->display->display_options['filters']['name']['group'] = 1;
  /* Filter criterion: Indexed Terme de taxonomie: Vocabulaire */
  $handler->display->display_options['filters']['vocabulary']['id'] = 'vocabulary';
  $handler->display->display_options['filters']['vocabulary']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['filters']['vocabulary']['field'] = 'vocabulary';
  $handler->display->display_options['filters']['vocabulary']['value'] = '44';
  $handler->display->display_options['filters']['vocabulary']['group'] = 2;
  $handler->display->display_options['filters']['vocabulary']['expose']['operator_id'] = 'vocabulary_op';
  $handler->display->display_options['filters']['vocabulary']['expose']['label'] = 'Vocabulaire';
  $handler->display->display_options['filters']['vocabulary']['expose']['operator'] = 'vocabulary_op';
  $handler->display->display_options['filters']['vocabulary']['expose']['identifier'] = 'vocabulary';
  $handler->display->display_options['filters']['vocabulary']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Indexed Terme de taxonomie: Vocabulaire */
  $handler->display->display_options['filters']['vocabulary_1']['id'] = 'vocabulary_1';
  $handler->display->display_options['filters']['vocabulary_1']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['filters']['vocabulary_1']['field'] = 'vocabulary';
  $handler->display->display_options['filters']['vocabulary_1']['value'] = '48';
  $handler->display->display_options['filters']['vocabulary_1']['group'] = 2;
  $handler->display->display_options['filters']['vocabulary_1']['expose']['operator_id'] = 'vocabulary_1_op';
  $handler->display->display_options['filters']['vocabulary_1']['expose']['label'] = 'Vocabulaire';
  $handler->display->display_options['filters']['vocabulary_1']['expose']['operator'] = 'vocabulary_1_op';
  $handler->display->display_options['filters']['vocabulary_1']['expose']['identifier'] = 'vocabulary_1';
  $handler->display->display_options['filters']['vocabulary_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Indexed Terme de taxonomie: Language de l'élément */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><big>Qu\'est-ce qu\'une donnée d\'inventaire ? Un indicateur ?&nbsp; Le droit de propriété intellectuelle ? Que signifient GBIF, ZICO ?</big></p><p><big>Les travaux du SINP et de l\'ONB ont rapidement montré l\'importance&nbsp; d\'une terminologie précise pour avancer avec l\'ensemble des acteurs en prévenant les quiproquos et autres malentendus. Il est également utile de retrouver facilement la signification d</big><big>es sigles et acronymes utilisés : organismes, politiques, projets..</big></p><p><big>Il peut exister plusieurs définitions pour un même terme ou expression. Par exemple "<em>base de données</em>" possède une définition informatique ("<em>un regroupement ordonné d\'informations numérisées</em>") mais également juridique ("<em>toute collection d\'informations, numériques ou non</em>"). Les mots, termes et expressions du glossaire sont répartis en 4 thèmes :</big></p><ul><li><div><big>les mots des <strong>systèmes d\'information</strong> : donnée, observation, fournisseur de données... ;</big></div></li><li><div><big>les mots des <strong>observatoires</strong> : indicateur, pertinence, périmètre, sensibilité... ;</big></div></li><li><div><big>les mots du <strong>statut juridique</strong> : droit <em>sui generis</em>, propriété intellectuelle... ;</big></div></li><li><div><big>les mots de la <strong>biodiversité</strong> : espèce, habitat, milieu...</big></div></li></ul><p>Les mots du glossaire déjà intégrés sont signalés (cf ci-dessus) dans le site par un surlignage en pointillé.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Terme de taxonomie: Nom */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'not empty';
  $handler->display->display_options['filters']['name']['group'] = 1;
  /* Filter criterion: Indexed Terme de taxonomie: Vocabulaire */
  $handler->display->display_options['filters']['vocabulary']['id'] = 'vocabulary';
  $handler->display->display_options['filters']['vocabulary']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['filters']['vocabulary']['field'] = 'vocabulary';
  $handler->display->display_options['filters']['vocabulary']['value'] = '44';
  $handler->display->display_options['filters']['vocabulary']['group'] = 2;
  $handler->display->display_options['filters']['vocabulary']['expose']['operator_id'] = 'vocabulary_op';
  $handler->display->display_options['filters']['vocabulary']['expose']['label'] = 'Vocabulaire';
  $handler->display->display_options['filters']['vocabulary']['expose']['operator'] = 'vocabulary_op';
  $handler->display->display_options['filters']['vocabulary']['expose']['identifier'] = 'vocabulary';
  $handler->display->display_options['filters']['vocabulary']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Indexed Terme de taxonomie: Vocabulaire */
  $handler->display->display_options['filters']['vocabulary_1']['id'] = 'vocabulary_1';
  $handler->display->display_options['filters']['vocabulary_1']['table'] = 'search_api_index_search_glossaire';
  $handler->display->display_options['filters']['vocabulary_1']['field'] = 'vocabulary';
  $handler->display->display_options['filters']['vocabulary_1']['value'] = '48';
  $handler->display->display_options['filters']['vocabulary_1']['group'] = 2;
  $handler->display->display_options['filters']['vocabulary_1']['expose']['operator_id'] = 'vocabulary_1_op';
  $handler->display->display_options['filters']['vocabulary_1']['expose']['label'] = 'Vocabulaire';
  $handler->display->display_options['filters']['vocabulary_1']['expose']['operator'] = 'vocabulary_1_op';
  $handler->display->display_options['filters']['vocabulary_1']['expose']['identifier'] = 'vocabulary_1';
  $handler->display->display_options['filters']['vocabulary_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'glossaire';
  $export['recherche_glossaire'] = $view;

  return $export;
}
