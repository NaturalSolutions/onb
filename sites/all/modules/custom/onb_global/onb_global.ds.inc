<?php
/**
 * @file
 * onb_global.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function onb_global_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_sousquestion|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_sousquestion';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'fc_title_with_id' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['field_collection_item|field_sousquestion|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_sousquestion|sous_question_gauche';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_sousquestion';
  $ds_fieldsetting->view_mode = 'sous_question_gauche';
  $ds_fieldsetting->settings = array(
    'fc_title_with_id' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['field_collection_item|field_sousquestion|sous_question_gauche'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fiche_indicateur|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fiche_indicateur';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|fiche_indicateur|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fiche_indicateur|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fiche_indicateur';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|fiche_indicateur|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fiche_indicateur|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fiche_indicateur';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|fiche_indicateur|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fiche_indicateur|question_indicateur';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fiche_indicateur';
  $ds_fieldsetting->view_mode = 'question_indicateur';
  $ds_fieldsetting->settings = array(
    'indicateurcolorbox' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:84:"<a class="colorbox-load colorbox-node" href="%node:url">Lire la fiche Indicateur</a>";s:6:"format";s:7:"ds_code";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Accéder à la fiche indicateur',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|fiche_indicateur|question_indicateur'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fiche_indicateur|question_indicateur_impression';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fiche_indicateur';
  $ds_fieldsetting->view_mode = 'question_indicateur_impression';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|fiche_indicateur|question_indicateur_impression'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fiche_indicateur|question_indicateur_ok';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fiche_indicateur';
  $ds_fieldsetting->view_mode = 'question_indicateur_ok';
  $ds_fieldsetting->settings = array(
    'indicateurcolorbox' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:88:"<a class="colorbox-load" rel="iframe" href="%node:url">Lire la fiche de l\'indicateur</a>";s:6:"format";s:7:"ds_code";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Accéder à la fiche de l\'indicateur',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|fiche_indicateur|question_indicateur_ok'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|fiche_indicateur|reference_indicateur';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'fiche_indicateur';
  $ds_fieldsetting->view_mode = 'reference_indicateur';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|fiche_indicateur|reference_indicateur'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|question|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'question';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'fontface',
      ),
    ),
  );
  $export['node|question|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|question|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'question';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|question|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|question|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'question';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|question|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|jeux_d_indicateurs|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'jeux_d_indicateurs';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'thematique_lien_vers_question' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:139:"<a href="/questions/toutes?f[0]=field_jeux_indicateur:%taxonomy_term:tid">Aller vers la liste des questions liées à cette thématique</a>";s:6:"format";s:7:"ds_code";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 1,
      ),
    ),
  );
  $export['taxonomy_term|jeux_d_indicateurs|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|jeux_d_indicateurs|taxonomie_colorbox';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'jeux_d_indicateurs';
  $ds_fieldsetting->view_mode = 'taxonomie_colorbox';
  $ds_fieldsetting->settings = array(
    'taxo_colorbox_description' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:117:"<a class="colorbox-inline" href="?width=500&height=500&inline=true%taxonomy_term:description">%taxonomy_term:name</a>";s:6:"format";s:7:"ds_code";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['taxonomy_term|jeux_d_indicateurs|taxonomie_colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|jeux_d_indicateurs|thematique_lien_question';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'jeux_d_indicateurs';
  $ds_fieldsetting->view_mode = 'thematique_lien_question';
  $ds_fieldsetting->settings = array(
    'thematique_lien_vers_question' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|jeux_d_indicateurs|thematique_lien_question'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|objectifs_snb|objectifs_sans_texte';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'objectifs_snb';
  $ds_fieldsetting->view_mode = 'objectifs_sans_texte';
  $ds_fieldsetting->settings = array(
    'obectif_3caracteres' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:57:"%taxonomy_term:name
<?php print render($term[\'name\']); ?>";s:6:"format";s:7:"ds_code";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['taxonomy_term|objectifs_snb|objectifs_sans_texte'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|objectifs_snb|taxonomie_colorbox';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'objectifs_snb';
  $ds_fieldsetting->view_mode = 'taxonomie_colorbox';
  $ds_fieldsetting->settings = array(
    'taxo_colorbox_description' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:117:"<a class="colorbox-inline" href=\'?width=500&height=500&inline=true%taxonomy_term:description\'>%taxonomy_term:name</a>";s:6:"format";s:7:"ds_code";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['taxonomy_term|objectifs_snb|taxonomie_colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|orientations_strat_giques|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'orientations_strat_giques';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|orientations_strat_giques|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|orientations_strat_giques|taxonomie_colorbox';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'orientations_strat_giques';
  $ds_fieldsetting->view_mode = 'taxonomie_colorbox';
  $ds_fieldsetting->settings = array(
    'taxo_colorbox_description' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:117:"<a class="colorbox-inline" href=\'?width=500&height=500&inline=true%taxonomy_term:description\'>%taxonomy_term:name</a>";s:6:"format";s:7:"ds_code";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
      ),
    ),
  );
  $export['taxonomy_term|orientations_strat_giques|taxonomie_colorbox'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function onb_global_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'fc_title_with_id';
  $ds_field->label = 'FC Title with ID';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id="[field_collection_item:field_sousquestion_titre]"></div>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['fc_title_with_id'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'indicateurcolorbox';
  $ds_field->label = 'indicateurcolorbox';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['indicateurcolorbox'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'lien_thematique';
  $ds_field->label = 'lien thematique';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'bean' => 'bean',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Ex. : h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['lien_thematique'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'obectif_3caracteres';
  $ds_field->label = 'obectif_3caracteres';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['obectif_3caracteres'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'taxo_colorbox_description';
  $ds_field->label = 'taxo_colorbox_description';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['taxo_colorbox_description'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'taxo_colorbox_title';
  $ds_field->label = 'taxo_colorbox_title';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['taxo_colorbox_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'thematique_lien_vers_question';
  $ds_field->label = 'thematique lien vers question';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Ex. : h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['thematique_lien_vers_question'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'title_fieldset';
  $ds_field->label = 'title_fieldset';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['title_fieldset'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function onb_global_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|lien_thematiques_questions|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'lien_thematiques_questions';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['bean|lien_thematiques_questions|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_collecvisuels|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_collecvisuels';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'field_visuels_txt',
      ),
      'left' => array(
        0 => 'field_visuels',
      ),
    ),
    'fields' => array(
      'field_visuels_txt' => 'right',
      'field_visuels' => 'left',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_collecvisuels|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_collecvisuels|impression_field_collection';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_collecvisuels';
  $ds_layout->view_mode = 'impression_field_collection';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_visuels',
        1 => 'field_visuels_txt',
      ),
    ),
    'fields' => array(
      'field_visuels' => 'ds_content',
      'field_visuels_txt' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_collecvisuels|impression_field_collection'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_sousquestion_indicateur|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_sousquestion_indicateur';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'field_niveau_de_pr_sentation',
        1 => 'field_sousquestion_phrasezoom',
      ),
      'left' => array(
        0 => 'field_sousquestion_indic_visuels',
      ),
      'right' => array(
        0 => 'field_sousquestion_indic_nom',
      ),
      'footer' => array(
        0 => 'field_sousquestion_indic_compl',
      ),
    ),
    'fields' => array(
      'field_niveau_de_pr_sentation' => 'header',
      'field_sousquestion_phrasezoom' => 'header',
      'field_sousquestion_indic_visuels' => 'left',
      'field_sousquestion_indic_nom' => 'right',
      'field_sousquestion_indic_compl' => 'footer',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_sousquestion_indicateur|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_sousquestion_indicateur|impression_field_collection';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_sousquestion_indicateur';
  $ds_layout->view_mode = 'impression_field_collection';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'field_niveau_de_pr_sentation',
        1 => 'field_sousquestion_phrasezoom',
      ),
      'left' => array(
        0 => 'field_sousquestion_indic_nom',
        1 => 'field_sousquestion_indic_visuels',
      ),
      'footer' => array(
        0 => 'field_sousquestion_indic_compl',
      ),
    ),
    'fields' => array(
      'field_niveau_de_pr_sentation' => 'header',
      'field_sousquestion_phrasezoom' => 'header',
      'field_sousquestion_indic_nom' => 'left',
      'field_sousquestion_indic_visuels' => 'left',
      'field_sousquestion_indic_compl' => 'footer',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_sousquestion_indicateur|impression_field_collection'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_sousquestion_indicateur|sousquestion_indicateur_impress';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_sousquestion_indicateur';
  $ds_layout->view_mode = 'sousquestion_indicateur_impress';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'field_niveau_de_pr_sentation',
        1 => 'field_sousquestion_phrasezoom',
      ),
      'left' => array(
        0 => 'field_sousquestion_indic_visuels',
      ),
      'right' => array(
        0 => 'field_sousquestion_indic_nom',
      ),
      'footer' => array(
        0 => 'field_sousquestion_indic_compl',
      ),
    ),
    'fields' => array(
      'field_niveau_de_pr_sentation' => 'header',
      'field_sousquestion_phrasezoom' => 'header',
      'field_sousquestion_indic_visuels' => 'left',
      'field_sousquestion_indic_nom' => 'right',
      'field_sousquestion_indic_compl' => 'footer',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_sousquestion_indicateur|sousquestion_indicateur_impress'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_sousquestion|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_sousquestion';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'fc_title_with_id',
        1 => 'field_sousquestion_titre',
        2 => 'field_sousquestiontxt',
        3 => 'field_sousquestion_indicateur',
      ),
    ),
    'fields' => array(
      'fc_title_with_id' => 'ds_content',
      'field_sousquestion_titre' => 'ds_content',
      'field_sousquestiontxt' => 'ds_content',
      'field_sousquestion_indicateur' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_sousquestion|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_sousquestion|sous_question_gauche';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_sousquestion';
  $ds_layout->view_mode = 'sous_question_gauche';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'fc_title_with_id',
      ),
    ),
    'fields' => array(
      'fc_title_with_id' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_sousquestion|sous_question_gauche'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_sousquestion|sous_question_impress';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_sousquestion';
  $ds_layout->view_mode = 'sous_question_impress';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sousquestion_titre',
        1 => 'field_sousquestiontxt',
        2 => 'field_sousquestion_indicateur',
      ),
    ),
    'fields' => array(
      'field_sousquestion_titre' => 'ds_content',
      'field_sousquestiontxt' => 'ds_content',
      'field_sousquestion_indicateur' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_sousquestion|sous_question_impress'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fiche_indicateur|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fiche_indicateur';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_orientations_principales',
        2 => 'group_orientations_objectifs',
        3 => 'group_orientations_principales',
        4 => 'group_objectifs_snb_principaux',
        5 => 'group_objectifs_snb_secondaires',
        6 => 'field_objectifs_snb_principaux',
        7 => 'field_objectifs_snb_secondaires',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_orientations_principales' => 'ds_content',
      'group_orientations_objectifs' => 'ds_content',
      'group_orientations_principales' => 'ds_content',
      'group_objectifs_snb_principaux' => 'ds_content',
      'group_objectifs_snb_secondaires' => 'ds_content',
      'field_objectifs_snb_principaux' => 'ds_content',
      'field_objectifs_snb_secondaires' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|fiche_indicateur|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fiche_indicateur|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fiche_indicateur';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_analyse_frb',
        1 => 'title',
        2 => 'field_intitule_court',
        3 => 'group_presentation_interpret',
        4 => 'group_definition',
        5 => 'group_production',
        6 => 'group_analyse',
        7 => 'group_pistes',
        8 => 'group_analyse_frb',
        9 => 'field_robustesse',
        10 => 'field_robustesse_remarques',
        11 => 'field_precision',
        12 => 'field_sensibilite',
        13 => 'field_efficacite',
        14 => 'field_avantages',
        15 => 'field_definition_indicateur',
        16 => 'field_valeur_cible',
        17 => 'field_limites',
        18 => 'field_accessiblite',
        19 => 'field_valeur_cible_renseignement',
        20 => 'field_homogeneite',
        21 => 'field_type_variable',
        22 => 'field_unite_mesure',
        23 => 'field_fiabilite',
        24 => 'field_relation_objectifs',
        25 => 'field_perennite',
        26 => 'field_continuite_snb',
        27 => 'field_abondance',
        28 => 'field_retro_calcul',
        29 => 'field_retro_calcul_remarques',
        30 => 'field_pistes',
        31 => 'field_relation_indicateurs',
        32 => 'field_pas_tps_disponibilite',
        33 => 'field_pas_tps_restitution',
        34 => 'field_pas_tps_remarques',
        35 => 'field_cout',
        36 => 'field_niveau',
        37 => 'field_echelle_restitution',
        38 => 'field_grain_precision_echelle',
        39 => 'field_indicateur_producteur',
        40 => 'field_origine_source',
        41 => 'field_valeurannee',
        42 => 'field_collecvisuels',
        43 => 'field_methodologie',
        44 => 'field_date_publication',
        45 => 'field_donnees_sources',
        46 => 'field_actu_date',
        47 => 'field_rupture_serie',
        48 => 'field_mod_interpretation',
      ),
      'barre_de_gauche' => array(
        0 => 'field_code',
        1 => 'field_jeux_indicateur',
        2 => 'field_orientations_principales',
        3 => 'field_objectifs_snb_principaux',
        4 => 'field_objectifs_snb_secondaires',
        5 => 'field_milieux_concernes',
        6 => 'group_enbref',
        7 => 'field_type_pression',
        8 => 'field_couveture_geo',
      ),
    ),
    'fields' => array(
      'field_analyse_frb' => 'ds_content',
      'title' => 'ds_content',
      'field_intitule_court' => 'ds_content',
      'group_presentation_interpret' => 'ds_content',
      'field_code' => 'barre_de_gauche',
      'group_definition' => 'ds_content',
      'field_jeux_indicateur' => 'barre_de_gauche',
      'group_production' => 'ds_content',
      'field_orientations_principales' => 'barre_de_gauche',
      'group_analyse' => 'ds_content',
      'field_objectifs_snb_principaux' => 'barre_de_gauche',
      'group_pistes' => 'ds_content',
      'group_analyse_frb' => 'ds_content',
      'field_objectifs_snb_secondaires' => 'barre_de_gauche',
      'field_milieux_concernes' => 'barre_de_gauche',
      'group_enbref' => 'barre_de_gauche',
      'field_type_pression' => 'barre_de_gauche',
      'field_couveture_geo' => 'barre_de_gauche',
      'field_robustesse' => 'ds_content',
      'field_robustesse_remarques' => 'ds_content',
      'field_precision' => 'ds_content',
      'field_sensibilite' => 'ds_content',
      'field_efficacite' => 'ds_content',
      'field_avantages' => 'ds_content',
      'field_definition_indicateur' => 'ds_content',
      'field_valeur_cible' => 'ds_content',
      'field_limites' => 'ds_content',
      'field_accessiblite' => 'ds_content',
      'field_valeur_cible_renseignement' => 'ds_content',
      'field_homogeneite' => 'ds_content',
      'field_type_variable' => 'ds_content',
      'field_unite_mesure' => 'ds_content',
      'field_fiabilite' => 'ds_content',
      'field_relation_objectifs' => 'ds_content',
      'field_perennite' => 'ds_content',
      'field_continuite_snb' => 'ds_content',
      'field_abondance' => 'ds_content',
      'field_retro_calcul' => 'ds_content',
      'field_retro_calcul_remarques' => 'ds_content',
      'field_pistes' => 'ds_content',
      'field_relation_indicateurs' => 'ds_content',
      'field_pas_tps_disponibilite' => 'ds_content',
      'field_pas_tps_restitution' => 'ds_content',
      'field_pas_tps_remarques' => 'ds_content',
      'field_cout' => 'ds_content',
      'field_niveau' => 'ds_content',
      'field_echelle_restitution' => 'ds_content',
      'field_grain_precision_echelle' => 'ds_content',
      'field_indicateur_producteur' => 'ds_content',
      'field_origine_source' => 'ds_content',
      'field_valeurannee' => 'ds_content',
      'field_collecvisuels' => 'ds_content',
      'field_methodologie' => 'ds_content',
      'field_date_publication' => 'ds_content',
      'field_donnees_sources' => 'ds_content',
      'field_actu_date' => 'ds_content',
      'field_rupture_serie' => 'ds_content',
      'field_mod_interpretation' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|fiche_indicateur|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fiche_indicateur|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fiche_indicateur';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_definition_indicateur',
        2 => 'field_intitule_court',
        3 => 'field_actu_date',
        4 => 'field_valeur_cible',
        5 => 'group_enbref_impression',
        6 => 'field_valeur_cible_renseignement',
        7 => 'field_type_variable',
        8 => 'group_presentation',
        9 => 'group_definition',
        10 => 'field_unite_mesure',
        11 => 'group_production',
        12 => 'field_relation_objectifs',
        13 => 'field_continuite_snb',
        14 => 'group_analyse',
        15 => 'field_retro_calcul',
        16 => 'group_pistes_groupe',
        17 => 'field_retro_calcul_remarques',
        18 => 'group_analyse_frb',
        19 => 'field_code',
        20 => 'field_relation_indicateurs',
        21 => 'field_pas_tps_disponibilite',
        22 => 'field_jeux_indicateur',
        23 => 'field_orientations_principales',
        24 => 'field_pas_tps_remarques',
        25 => 'field_pas_tps_restitution',
        26 => 'field_cout',
        27 => 'field_objectifs_snb_principaux',
        28 => 'field_robustesse',
        29 => 'field_robustesse_remarques',
        30 => 'field_objectifs_snb_secondaires',
        31 => 'field_niveau',
        32 => 'field_milieux_concernes',
        33 => 'field_precision',
        34 => 'field_echelle_restitution',
        35 => 'field_grain_precision_echelle',
        36 => 'field_type_dpsir',
        37 => 'field_sensibilite',
        38 => 'field_type_pression',
        39 => 'field_pistes',
        40 => 'field_efficacite',
        41 => 'field_couveture_geo',
        42 => 'field_avantages',
        43 => 'field_limites',
        44 => 'field_accessiblite',
        45 => 'field_homogeneite',
        46 => 'field_fiabilite',
        47 => 'field_perennite',
        48 => 'field_abondance',
        49 => 'field_indicateur_producteur',
        50 => 'field_collecvisuels',
        51 => 'field_origine_source',
        52 => 'field_donnees_sources',
        53 => 'field_methodologie',
        54 => 'field_rupture_serie',
        55 => 'field_valeurannee',
        56 => 'field_mod_interpretation',
        57 => 'field_date_publication',
        58 => 'field_analyse_frb',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_definition_indicateur' => 'ds_content',
      'field_intitule_court' => 'ds_content',
      'field_actu_date' => 'ds_content',
      'field_valeur_cible' => 'ds_content',
      'group_enbref_impression' => 'ds_content',
      'field_valeur_cible_renseignement' => 'ds_content',
      'field_type_variable' => 'ds_content',
      'group_presentation' => 'ds_content',
      'group_definition' => 'ds_content',
      'field_unite_mesure' => 'ds_content',
      'group_production' => 'ds_content',
      'field_relation_objectifs' => 'ds_content',
      'field_continuite_snb' => 'ds_content',
      'group_analyse' => 'ds_content',
      'field_retro_calcul' => 'ds_content',
      'group_pistes_groupe' => 'ds_content',
      'field_retro_calcul_remarques' => 'ds_content',
      'group_analyse_frb' => 'ds_content',
      'field_code' => 'ds_content',
      'field_relation_indicateurs' => 'ds_content',
      'field_pas_tps_disponibilite' => 'ds_content',
      'field_jeux_indicateur' => 'ds_content',
      'field_orientations_principales' => 'ds_content',
      'field_pas_tps_remarques' => 'ds_content',
      'field_pas_tps_restitution' => 'ds_content',
      'field_cout' => 'ds_content',
      'field_objectifs_snb_principaux' => 'ds_content',
      'field_robustesse' => 'ds_content',
      'field_robustesse_remarques' => 'ds_content',
      'field_objectifs_snb_secondaires' => 'ds_content',
      'field_niveau' => 'ds_content',
      'field_milieux_concernes' => 'ds_content',
      'field_precision' => 'ds_content',
      'field_echelle_restitution' => 'ds_content',
      'field_grain_precision_echelle' => 'ds_content',
      'field_type_dpsir' => 'ds_content',
      'field_sensibilite' => 'ds_content',
      'field_type_pression' => 'ds_content',
      'field_pistes' => 'ds_content',
      'field_efficacite' => 'ds_content',
      'field_couveture_geo' => 'ds_content',
      'field_avantages' => 'ds_content',
      'field_limites' => 'ds_content',
      'field_accessiblite' => 'ds_content',
      'field_homogeneite' => 'ds_content',
      'field_fiabilite' => 'ds_content',
      'field_perennite' => 'ds_content',
      'field_abondance' => 'ds_content',
      'field_indicateur_producteur' => 'ds_content',
      'field_collecvisuels' => 'ds_content',
      'field_origine_source' => 'ds_content',
      'field_donnees_sources' => 'ds_content',
      'field_methodologie' => 'ds_content',
      'field_rupture_serie' => 'ds_content',
      'field_valeurannee' => 'ds_content',
      'field_mod_interpretation' => 'ds_content',
      'field_date_publication' => 'ds_content',
      'field_analyse_frb' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|fiche_indicateur|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fiche_indicateur|question_indicateur';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fiche_indicateur';
  $ds_layout->view_mode = 'question_indicateur';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'indicateurcolorbox',
        1 => 'node_link',
        2 => 'field_relation_objectifs',
        3 => 'title',
        4 => 'field_valeurannee',
        5 => 'field_intitule_court',
        6 => 'field_mod_interpretation',
      ),
    ),
    'fields' => array(
      'indicateurcolorbox' => 'ds_content',
      'node_link' => 'ds_content',
      'field_relation_objectifs' => 'ds_content',
      'title' => 'ds_content',
      'field_valeurannee' => 'ds_content',
      'field_intitule_court' => 'ds_content',
      'field_mod_interpretation' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|fiche_indicateur|question_indicateur'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fiche_indicateur|question_indicateur_impression';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fiche_indicateur';
  $ds_layout->view_mode = 'question_indicateur_impression';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_intitule_court',
        2 => 'field_valeurannee',
        3 => 'field_mod_interpretation',
        4 => 'field_relation_objectifs',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_intitule_court' => 'ds_content',
      'field_valeurannee' => 'ds_content',
      'field_mod_interpretation' => 'ds_content',
      'field_relation_objectifs' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|fiche_indicateur|question_indicateur_impression'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fiche_indicateur|question_indicateur_ok';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fiche_indicateur';
  $ds_layout->view_mode = 'question_indicateur_ok';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_intitule_court',
        2 => 'field_valeurannee',
        3 => 'group_modalite_interpretation',
        4 => 'group_relation_obj',
        5 => 'field_mod_interpretation',
        6 => 'field_relation_objectifs',
        7 => 'indicateurcolorbox',
        8 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_intitule_court' => 'ds_content',
      'field_valeurannee' => 'ds_content',
      'group_modalite_interpretation' => 'ds_content',
      'group_relation_obj' => 'ds_content',
      'field_mod_interpretation' => 'ds_content',
      'field_relation_objectifs' => 'ds_content',
      'indicateurcolorbox' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|fiche_indicateur|question_indicateur_ok'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|fiche_indicateur|reference_indicateur';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'fiche_indicateur';
  $ds_layout->view_mode = 'reference_indicateur';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_intitule_court',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_intitule_court' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|fiche_indicateur|reference_indicateur'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_page_image',
        1 => 'title',
        2 => 'links',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_page_image' => 'ds_content',
      'title' => 'ds_content',
      'links' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|question|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'question';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'field_presentation',
        1 => 'field_questionvisuel',
      ),
      'left' => array(
        0 => 'field_question_code',
        1 => 'field_jeux_indicateur',
        2 => 'field_type_dpsir',
        3 => 'field_fiche_synthetique',
        4 => 'field_orientations_principales',
        5 => 'field_objectifs_snb_principaux',
      ),
      'right' => array(
        0 => 'field_objets_indicateurs',
        1 => 'field_sousquestion',
      ),
    ),
    'fields' => array(
      'field_presentation' => 'header',
      'field_question_code' => 'left',
      'field_jeux_indicateur' => 'left',
      'field_type_dpsir' => 'left',
      'field_fiche_synthetique' => 'left',
      'field_orientations_principales' => 'left',
      'field_objectifs_snb_principaux' => 'left',
      'field_objets_indicateurs' => 'right',
      'field_sousquestion' => 'right',
      'field_questionvisuel' => 'header',
    ),
    'classes' => array(),
  );
  $export['node|question|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|question|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'question';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_questionvisuel',
        2 => 'field_presentation',
        3 => 'field_objets_indicateurs',
        4 => 'field_sousquestion',
      ),
      'barre_de_gauche_question' => array(
        0 => 'field_question_code',
        1 => 'field_jeux_indicateur',
        2 => 'field_type_dpsir',
        3 => 'field_orientations_principales',
        4 => 'field_objectifs_snb_principaux',
      ),
      'barre_de_gauche_question_fiche_s' => array(
        0 => 'field_documents_associes',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_questionvisuel' => 'ds_content',
      'field_presentation' => 'ds_content',
      'field_objets_indicateurs' => 'ds_content',
      'field_sousquestion' => 'ds_content',
      'field_question_code' => 'barre_de_gauche_question',
      'field_jeux_indicateur' => 'barre_de_gauche_question',
      'field_type_dpsir' => 'barre_de_gauche_question',
      'field_orientations_principales' => 'barre_de_gauche_question',
      'field_objectifs_snb_principaux' => 'barre_de_gauche_question',
      'field_documents_associes' => 'barre_de_gauche_question_fiche_s',
    ),
    'classes' => array(),
  );
  $export['node|question|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|question|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'question';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_questionvisuel',
        2 => 'field_presentation',
        3 => 'field_objets_indicateurs',
        4 => 'field_sousquestion',
      ),
      'barre_de_gauche_question_impress' => array(
        0 => 'field_question_code',
        1 => 'field_type_dpsir',
        2 => 'field_orientations_principales',
        3 => 'field_objectifs_snb_principaux',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_questionvisuel' => 'ds_content',
      'field_presentation' => 'ds_content',
      'field_objets_indicateurs' => 'ds_content',
      'field_sousquestion' => 'ds_content',
      'field_question_code' => 'barre_de_gauche_question_impress',
      'field_type_dpsir' => 'barre_de_gauche_question_impress',
      'field_orientations_principales' => 'barre_de_gauche_question_impress',
      'field_objectifs_snb_principaux' => 'barre_de_gauche_question_impress',
    ),
    'classes' => array(),
  );
  $export['node|question|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|question|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'question';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_questionvisuel',
      ),
      'right' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'field_questionvisuel' => 'left',
      'title' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|question|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|jeux_d_indicateurs|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'jeux_d_indicateurs';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_visuel',
        1 => 'description',
        2 => 'thematique_lien_vers_question',
      ),
      'barre_de_gauche_thematique' => array(
        0 => 'field_statut_de_publication',
        1 => 'field_date_publication_jeu',
      ),
    ),
    'fields' => array(
      'field_visuel' => 'ds_content',
      'description' => 'ds_content',
      'thematique_lien_vers_question' => 'ds_content',
      'field_statut_de_publication' => 'barre_de_gauche_thematique',
      'field_date_publication_jeu' => 'barre_de_gauche_thematique',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|jeux_d_indicateurs|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|jeux_d_indicateurs|taxonomie_colorbox';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'jeux_d_indicateurs';
  $ds_layout->view_mode = 'taxonomie_colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'taxo_colorbox_description',
      ),
    ),
    'fields' => array(
      'taxo_colorbox_description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|jeux_d_indicateurs|taxonomie_colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|jeux_d_indicateurs|thematique_lien_question';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'jeux_d_indicateurs';
  $ds_layout->view_mode = 'thematique_lien_question';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'thematique_lien_vers_question',
      ),
    ),
    'fields' => array(
      'thematique_lien_vers_question' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|jeux_d_indicateurs|thematique_lien_question'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|objectifs_snb|objectifs_sans_texte';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'objectifs_snb';
  $ds_layout->view_mode = 'objectifs_sans_texte';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'obectif_3caracteres',
      ),
    ),
    'fields' => array(
      'obectif_3caracteres' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|objectifs_snb|objectifs_sans_texte'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|objectifs_snb|taxonomie_colorbox';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'objectifs_snb';
  $ds_layout->view_mode = 'taxonomie_colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'taxo_colorbox_description',
      ),
    ),
    'fields' => array(
      'taxo_colorbox_description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|objectifs_snb|taxonomie_colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|orientations_strat_giques|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'orientations_strat_giques';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|orientations_strat_giques|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|orientations_strat_giques|taxonomie_colorbox';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'orientations_strat_giques';
  $ds_layout->view_mode = 'taxonomie_colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'taxo_colorbox_description',
      ),
    ),
    'fields' => array(
      'taxo_colorbox_description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|orientations_strat_giques|taxonomie_colorbox'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function onb_global_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'impression_field_collection';
  $ds_view_mode->label = 'Impression Field Collection';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['impression_field_collection'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'objectifs_sans_texte';
  $ds_view_mode->label = 'objectifs - sans texte';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['objectifs_sans_texte'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'print';
  $ds_view_mode->label = 'Print';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['print'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'question_indicateur';
  $ds_view_mode->label = 'question_indicateur';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['question_indicateur'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'question_indicateur_impression';
  $ds_view_mode->label = 'question_indicateur_impression';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['question_indicateur_impression'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'question_indicateur_ok';
  $ds_view_mode->label = 'question_indicateur_ok';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['question_indicateur_ok'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'reference_indicateur';
  $ds_view_mode->label = 'reference_indicateur';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['reference_indicateur'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sous_question_gauche';
  $ds_view_mode->label = 'Sous question - Gauche';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['sous_question_gauche'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sous_question_impress';
  $ds_view_mode->label = 'sous_question_impress';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['sous_question_impress'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sousquestion_indicateur_impress';
  $ds_view_mode->label = 'sousquestion_indicateur_impress';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['sousquestion_indicateur_impress'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'taxonomie_colorbox';
  $ds_view_mode->label = 'taxonomie_colorbox';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['taxonomie_colorbox'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser2';
  $ds_view_mode->label = 'teaser2';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['teaser2'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'thematique_lien_question';
  $ds_view_mode->label = 'Thematique lien question';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['thematique_lien_question'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'visuels_indicateurs';
  $ds_view_mode->label = 'Visuels indicateurs';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['visuels_indicateurs'] = $ds_view_mode;

  return $export;
}
