<?php
/**
 * @file
 * onb_global.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function onb_global_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activites|node|fiche_ressource_bibliographique|form';
  $field_group->group_name = 'group_activites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_ressource_bibliographique';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ref_peri_activites';
  $field_group->data = array(
    'label' => 'Activités',
    'weight' => '11',
    'children' => array(
      0 => 'field_objectifs_missions',
      1 => 'field_biens_services_produits',
      2 => 'field_beneficiaires',
      3 => 'field_projets',
      4 => 'field_nb_indicateurs_used',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_activites|node|fiche_ressource_bibliographique|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_anal_frb|node|fiche_indicateur|print';
  $field_group->group_name = 'group_anal_frb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyse FRB',
    'weight' => '23',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-anal-frb field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_anal_frb|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analyse_frb|node|fiche_indicateur|form';
  $field_group->group_name = 'group_analyse_frb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyse FRB',
    'weight' => '12',
    'children' => array(
      0 => 'field_analyse_frb',
      1 => 'field_date_de_derni_re_modificat',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Analyse FRB',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-analyse-frb field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_fiche_indicateur_form_group_analyse_frb',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_analyse_frb|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analyse_frb|node|fiche_indicateur|full';
  $field_group->group_name = 'group_analyse_frb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyse FRB',
    'weight' => '7',
    'children' => array(
      0 => 'field_analyse_frb',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Analyse FRB',
      'instance_settings' => array(
        'classes' => ' group-analyse-frb field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_analyse_frb|node|fiche_indicateur|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analyse_frb|node|fiche_indicateur|print';
  $field_group->group_name = 'group_analyse_frb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyse FRB',
    'weight' => '9',
    'children' => array(
      0 => 'field_analyse_frb',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Analyse FRB',
      'instance_settings' => array(
        'classes' => ' group-analyse-frb field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_fiche_indicateur_print_group_analyse_frb',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_analyse_frb|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analyse|node|fiche_indicateur|default';
  $field_group->group_name = 'group_analyse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyse de l\'indicateur',
    'weight' => '11',
    'children' => array(
      0 => 'group_qualite',
      1 => 'group_avantages',
      2 => 'group_limites',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Analyse de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-analyse field-group-tabs',
      ),
    ),
  );
  $field_groups['group_analyse|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analyse|node|fiche_indicateur|form';
  $field_group->group_name = 'group_analyse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyse de l\'indicateur',
    'weight' => '10',
    'children' => array(
      0 => 'group_qualite',
      1 => 'group_avantages',
      2 => 'group_limites',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => ' group-analyse field-group-accordion',
      ),
    ),
  );
  $field_groups['group_analyse|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analyse|node|fiche_indicateur|full';
  $field_group->group_name = 'group_analyse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyse de l\'indicateur',
    'weight' => '5',
    'children' => array(
      0 => 'field_robustesse',
      1 => 'field_precision',
      2 => 'field_avantages',
      3 => 'field_sensibilite',
      4 => 'field_accessiblite',
      5 => 'field_homogeneite',
      6 => 'field_fiabilite',
      7 => 'field_perennite',
      8 => 'field_abondance',
      9 => 'field_efficacite',
      10 => 'field_limites',
      11 => 'field_robustesse_remarques',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Analyse de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-analyse field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_analyse|node|fiche_indicateur|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analyse|node|fiche_indicateur|print';
  $field_group->group_name = 'group_analyse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyse de l\'indicateur',
    'weight' => '7',
    'children' => array(
      0 => 'field_robustesse',
      1 => 'field_precision',
      2 => 'field_avantages',
      3 => 'field_sensibilite',
      4 => 'field_accessiblite',
      5 => 'field_homogeneite',
      6 => 'field_fiabilite',
      7 => 'field_perennite',
      8 => 'field_abondance',
      9 => 'field_efficacite',
      10 => 'field_limites',
      11 => 'field_robustesse_remarques',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Analyse de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-analyse field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_fiche_indicateur_print_group_analyse',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_analyse|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analyse|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_analyse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Analyse de l\'indicateur',
    'weight' => '13',
    'children' => array(
      0 => 'group_qualite',
      1 => 'group_avantages',
      2 => 'group_limites',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Analyse de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-analyse field-group-tabs',
      ),
    ),
  );
  $field_groups['group_analyse|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avantages|node|fiche_indicateur|default';
  $field_group->group_name = 'group_avantages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_analyse';
  $field_group->data = array(
    'label' => 'Principaux avantages',
    'weight' => '47',
    'children' => array(
      0 => 'field_avantages',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-avantages field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_avantages|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avantages|node|fiche_indicateur|form';
  $field_group->group_name = 'group_avantages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_analyse';
  $field_group->data = array(
    'label' => 'Principaux avantages',
    'weight' => '47',
    'children' => array(
      0 => 'field_avantages',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Principaux avantages',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-avantages field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_avantages|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avantages|node|fiche_indicateur|print';
  $field_group->group_name = 'group_avantages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Principaux avantages',
    'weight' => '31',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-avantages field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_avantages|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_avantages|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_avantages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_analyse';
  $field_group->data = array(
    'label' => 'Principaux avantages',
    'weight' => '47',
    'children' => array(
      0 => 'field_avantages',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-avantages field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_avantages|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_breve_definition|node|fiche_indicateur|default';
  $field_group->group_name = 'group_breve_definition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Brève définition',
    'weight' => '18',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-breve-definition field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_breve_definition|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_breve_definition|node|fiche_indicateur|form';
  $field_group->group_name = 'group_breve_definition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Brève définition',
    'weight' => '38',
    'children' => array(
      0 => 'field_definition_indicateur',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Brève définition',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-breve-definition field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_breve_definition|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_breve_definition|node|fiche_indicateur|print';
  $field_group->group_name = 'group_breve_definition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Brève définition',
    'weight' => '24',
    'children' => array(
      0 => 'group_relation_objectifs',
      1 => 'group_pas_tps_disponibilite',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-breve-definition field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_breve_definition|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_breve_definition|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_breve_definition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Brève définition',
    'weight' => '38',
    'children' => array(
      0 => 'field_definition',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-breve-definition field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_breve_definition|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cdb|node|fiche_indicateur|form';
  $field_group->group_name = 'group_cdb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'CDB',
    'weight' => '11',
    'children' => array(
      0 => 'field_axe_et_objectifs_cdb',
      1 => 'field_objectifs_cdb',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'CDB',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-cdb field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_cdb|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cdb|node|fiche_indicateur|print';
  $field_group->group_name = 'group_cdb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CDB',
    'weight' => '17',
    'children' => array(
      0 => 'field_axe_et_objectifs_cdb',
      1 => 'field_objectifs_cdb',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'CDB',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-cdb field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cdb|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_continuite_snb|node|fiche_indicateur|default';
  $field_group->group_name = 'group_continuite_snb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Continuité du jeu national SNB',
    'weight' => '30',
    'children' => array(
      0 => 'field_continuite_snb',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-continuite-snb field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_continuite_snb|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_continuite_snb|node|fiche_indicateur|form';
  $field_group->group_name = 'group_continuite_snb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Continuité du jeu national SNB',
    'weight' => '51',
    'children' => array(
      0 => 'field_continuite_snb',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Continuité du jeu national SNB',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-continuite-snb field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_continuite_snb|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_continuite_snb|node|fiche_indicateur|print';
  $field_group->group_name = 'group_continuite_snb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Continuité du jeu national SNB',
    'weight' => '38',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-continuite-snb field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_continuite_snb|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_continuite_snb|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_continuite_snb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Continuité du jeu national SNB',
    'weight' => '50',
    'children' => array(
      0 => 'field_continuite_snb',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-continuite-snb field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_continuite_snb|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_couverture_geo|node|fiche_indicateur|default';
  $field_group->group_name = 'group_couverture_geo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Couverture géographique',
    'weight' => '22',
    'children' => array(
      0 => 'field_couveture_geo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-couverture-geo field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_couverture_geo|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_couverture_geo|node|fiche_indicateur|form';
  $field_group->group_name = 'group_couverture_geo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Couverture géographique',
    'weight' => '42',
    'children' => array(
      0 => 'field_couveture_geo',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Couverture géographique',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-couverture-geo field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_couverture_geo|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_couverture_geo|node|fiche_indicateur|print';
  $field_group->group_name = 'group_couverture_geo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_type_dpsir';
  $field_group->data = array(
    'label' => 'Couverture géographique',
    'weight' => '38',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-couverture-geo field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_couverture_geo|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_couverture_geo|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_couverture_geo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Couverture géographique',
    'weight' => '42',
    'children' => array(
      0 => 'field_couveture_geo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-couverture-geo field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_couverture_geo|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_publication|node|fiche_indicateur|default';
  $field_group->group_name = 'group_date_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Date de publication de la première valeur de la série',
    'weight' => '13',
    'children' => array(
      0 => 'field_date_publication',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-date-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_date_publication|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_publication|node|fiche_indicateur|form';
  $field_group->group_name = 'group_date_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Date de publication de la première valeur de la série',
    'weight' => '13',
    'children' => array(
      0 => 'field_date_publication',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Date de publication de la première valeur de la série',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-date-publication field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_date_publication|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_publication|node|fiche_indicateur|print';
  $field_group->group_name = 'group_date_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date de publication de la première valeur de la série',
    'weight' => '40',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-date-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_date_publication|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_publication|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_date_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Date de publication de la première valeur de la série',
    'weight' => '13',
    'children' => array(
      0 => 'field_date_publication',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-date-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_date_publication|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_definition|node|fiche_indicateur|default';
  $field_group->group_name = 'group_definition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Définition, contexte et principales caractéristiques de l\'indicateur',
    'weight' => '14',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-definition field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_definition|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_definition|node|fiche_indicateur|form';
  $field_group->group_name = 'group_definition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Définition, contexte et principales caractéristiques de l\'indicateur',
    'weight' => '7',
    'children' => array(
      0 => 'group_breve_definition',
      1 => 'group_relation_objectifs',
      2 => 'group_type_dpsir',
      3 => 'group_type_pression',
      4 => 'group_milieux_concernes',
      5 => 'group_couverture_geo',
      6 => 'group_echelle_restitution',
      7 => 'group_grain_precision_echelle',
      8 => 'group_type_variable',
      9 => 'group_unite_mesure',
      10 => 'group_valeur_cible',
      11 => 'group_continuite_snb',
      12 => 'group_retro_calcul',
      13 => 'group_relation_indicateurs',
      14 => 'group_pas_tps_restitution',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => ' group-definition field-group-accordion',
      ),
    ),
  );
  $field_groups['group_definition|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_definition|node|fiche_indicateur|full';
  $field_group->group_name = 'group_definition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Définition, contexte et principales caractéristiques de l\'indicateur',
    'weight' => '3',
    'children' => array(
      0 => 'field_relation_objectifs',
      1 => 'field_echelle_restitution',
      2 => 'field_grain_precision_echelle',
      3 => 'field_type_variable',
      4 => 'field_unite_mesure',
      5 => 'field_valeur_cible',
      6 => 'field_valeur_cible_renseignement',
      7 => 'field_continuite_snb',
      8 => 'field_retro_calcul',
      9 => 'field_retro_calcul_remarques',
      10 => 'field_relation_indicateurs',
      11 => 'field_pas_tps_disponibilite',
      12 => 'field_pas_tps_restitution',
      13 => 'field_pas_tps_remarques',
      14 => 'field_cout',
      15 => 'field_niveau',
      16 => 'field_definition_indicateur',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Définition, contexte et principales caractéristiques de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-definition field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_definition|node|fiche_indicateur|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_definition|node|fiche_indicateur|print';
  $field_group->group_name = 'group_definition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Définition, contexte et principales caractéristiques de l\'indicateur',
    'weight' => '5',
    'children' => array(
      0 => 'field_relation_objectifs',
      1 => 'field_echelle_restitution',
      2 => 'field_grain_precision_echelle',
      3 => 'field_type_variable',
      4 => 'field_unite_mesure',
      5 => 'field_valeur_cible',
      6 => 'field_valeur_cible_renseignement',
      7 => 'field_continuite_snb',
      8 => 'field_retro_calcul',
      9 => 'field_retro_calcul_remarques',
      10 => 'field_relation_indicateurs',
      11 => 'field_pas_tps_disponibilite',
      12 => 'field_pas_tps_restitution',
      13 => 'field_pas_tps_remarques',
      14 => 'field_cout',
      15 => 'field_niveau',
      16 => 'field_definition_indicateur',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Définition, contexte et principales caractéristiques de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-definition field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_fiche_indicateur_print_group_definition',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_definition|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_definition|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_definition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Définition, contexte et principales caractéristiques de l\'indicateur',
    'weight' => '10',
    'children' => array(
      0 => 'group_breve_definition',
      1 => 'group_relation_objectifs',
      2 => 'group_type_dpsir',
      3 => 'group_type_pression',
      4 => 'group_milieux_concernes',
      5 => 'group_couverture_geo',
      6 => 'group_echelle_restitution',
      7 => 'group_grain_precision_echelle',
      8 => 'group_type_variable',
      9 => 'group_unite_mesure',
      10 => 'group_valeur_cible',
      11 => 'group_continuite_snb',
      12 => 'group_retro_calcul',
      13 => 'group_relation_indicateurs',
      14 => 'group_pas_tps_restitution',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-definition field-group-tabs',
      ),
    ),
  );
  $field_groups['group_definition|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_echelle_restitution|node|fiche_indicateur|default';
  $field_group->group_name = 'group_echelle_restitution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Echelle(s) territoriale(s) de restitution',
    'weight' => '24',
    'children' => array(
      0 => 'field_echelle_restitution',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-echelle-restitution field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_echelle_restitution|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_echelle_restitution|node|fiche_indicateur|form';
  $field_group->group_name = 'group_echelle_restitution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Echelle(s) territoriale(s) de restitution',
    'weight' => '44',
    'children' => array(
      0 => 'field_echelle_restitution',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Echelle(s) territoriale(s) de restitution',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-echelle-restitution field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_echelle_restitution|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_echelle_restitution|node|fiche_indicateur|print';
  $field_group->group_name = 'group_echelle_restitution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Echelle(s) territoriale(s) de restitution',
    'weight' => '29',
    'children' => array(
      0 => 'group_relation_indicateurs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-echelle-restitution field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_echelle_restitution|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_echelle_restitution|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_echelle_restitution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Echelle(s) territoriale(s) de restitution',
    'weight' => '44',
    'children' => array(
      0 => 'field_echelle_restitution',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-echelle-restitution field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_echelle_restitution|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_enbref_impression|node|fiche_indicateur|print';
  $field_group->group_name = 'group_enbref_impression';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En bref',
    'weight' => '3',
    'children' => array(
      0 => 'field_orientations_principales',
      1 => 'field_objectifs_snb_principaux',
      2 => 'field_objectifs_snb_secondaires',
      3 => 'field_code',
      4 => 'field_type_dpsir',
      5 => 'field_type_pression',
      6 => 'field_milieux_concernes',
      7 => 'field_couveture_geo',
      8 => 'field_jeux_indicateur',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En bref',
      'instance_settings' => array(
        'classes' => ' group-enbref-impression field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_fiche_indicateur_print_group_enbref_impression',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_enbref_impression|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_enbref|node|fiche_indicateur|full';
  $field_group->group_name = 'group_enbref';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En Bref',
    'weight' => '8',
    'children' => array(
      0 => 'field_orientations_principales',
      1 => 'field_objectifs_snb_principaux',
      2 => 'field_objectifs_snb_secondaires',
      3 => 'field_code',
      4 => 'field_type_pression',
      5 => 'field_milieux_concernes',
      6 => 'field_couveture_geo',
      7 => 'field_jeux_indicateur',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-enbref field-group-div',
        'id' => 'node_fiche_indicateur_full_group_enbref',
      ),
    ),
  );
  $field_groups['group_enbref|node|fiche_indicateur|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grain_precision_echelle|node|fiche_indicateur|default';
  $field_group->group_name = 'group_grain_precision_echelle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grain(s) de précision d\'échelle',
    'weight' => '25',
    'children' => array(
      0 => 'field_grain_precision_echelle',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Grain(s) de précision d\'échelle',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-grain-precision-echelle field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_grain_precision_echelle|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grain_precision_echelle|node|fiche_indicateur|form';
  $field_group->group_name = 'group_grain_precision_echelle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Grain(s) de précision d\'échelle',
    'weight' => '45',
    'children' => array(
      0 => 'field_grain_precision_echelle',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Grain(s) de précision d\'échelle',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-grain-precision-echelle field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_grain_precision_echelle|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grain_precision_echelle|node|fiche_indicateur|print';
  $field_group->group_name = 'group_grain_precision_echelle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grain(s) de précision d\'échelle',
    'weight' => '30',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Grain(s) de précision d\'échelle',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-grain-precision-echelle field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_grain_precision_echelle|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grain_precision_echelle|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_grain_precision_echelle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Grain(s) de précision d\'échelle',
    'weight' => '45',
    'children' => array(
      0 => 'field_grain_precision_echelle',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Grain(s) de précision d\'échelle',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-grain-precision-echelle field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_grain_precision_echelle|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_jeu|node|fiche_indicateur|form';
  $field_group->group_name = 'group_jeu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Jeu(x) d\'indicateurs',
    'weight' => '7',
    'children' => array(
      0 => 'field_jeux_indicateur',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-jeu field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_jeu|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_limites|node|fiche_indicateur|default';
  $field_group->group_name = 'group_limites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_analyse';
  $field_group->data = array(
    'label' => 'Principales limites',
    'weight' => '48',
    'children' => array(
      0 => 'field_limites',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-limites field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_limites|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_limites|node|fiche_indicateur|form';
  $field_group->group_name = 'group_limites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_analyse';
  $field_group->data = array(
    'label' => 'Principales limites',
    'weight' => '48',
    'children' => array(
      0 => 'field_limites',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Principales limites',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-limites field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_limites|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_limites|node|fiche_indicateur|print';
  $field_group->group_name = 'group_limites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Principales limites',
    'weight' => '32',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-limites field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_limites|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_limites|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_limites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_analyse';
  $field_group->data = array(
    'label' => 'Principales limites',
    'weight' => '48',
    'children' => array(
      0 => 'field_limites',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-limites field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_limites|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_methodologie|node|fiche_indicateur|default';
  $field_group->group_name = 'group_methodologie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Méthodologie de construction',
    'weight' => '16',
    'children' => array(
      0 => 'field_methodologie',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-methodologie field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_methodologie|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_methodologie|node|fiche_indicateur|form';
  $field_group->group_name = 'group_methodologie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Méthodologie de construction',
    'weight' => '16',
    'children' => array(
      0 => 'field_methodologie',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Méthodologie de construction',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-methodologie field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_methodologie|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_methodologie|node|fiche_indicateur|print';
  $field_group->group_name = 'group_methodologie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Méthodologie de construction',
    'weight' => '43',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-methodologie field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_methodologie|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_methodologie|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_methodologie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Méthodologie de construction',
    'weight' => '16',
    'children' => array(
      0 => 'field_methodologie',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-methodologie field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_methodologie|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_milieux_concernes|node|fiche_indicateur|default';
  $field_group->group_name = 'group_milieux_concernes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Milieu(x) concerné(s)',
    'weight' => '23',
    'children' => array(
      0 => 'field_milieux_concernes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-milieux-concernes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_milieux_concernes|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_milieux_concernes|node|fiche_indicateur|form';
  $field_group->group_name = 'group_milieux_concernes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Milieu(x) concerné(s)',
    'weight' => '43',
    'children' => array(
      0 => 'field_milieux_concernes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Milieu(x) concerné(s)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-milieux-concernes field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_milieux_concernes|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_milieux_concernes|node|fiche_indicateur|print';
  $field_group->group_name = 'group_milieux_concernes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_type_dpsir';
  $field_group->data = array(
    'label' => 'Milieu(x) concerné(s)',
    'weight' => '39',
    'children' => array(
      0 => 'group_retro_calcul',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-milieux-concernes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_milieux_concernes|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_milieux_concernes|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_milieux_concernes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Milieu(x) concerné(s)',
    'weight' => '43',
    'children' => array(
      0 => 'field_milieux_concernes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-milieux-concernes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_milieux_concernes|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mod_interpretation|node|fiche_indicateur|default';
  $field_group->group_name = 'group_mod_interpretation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_presentation';
  $field_group->data = array(
    'label' => 'Modalités d\'interprétation de l\'indicateur',
    'weight' => '43',
    'children' => array(
      0 => 'field_mod_interpretation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mod-interpretation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_mod_interpretation|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mod_interpretation|node|fiche_indicateur|form';
  $field_group->group_name = 'group_mod_interpretation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_presentation';
  $field_group->data = array(
    'label' => 'Modalités d\'interprétation de l\'indicateur',
    'weight' => '43',
    'children' => array(
      0 => 'field_mod_interpretation',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Modalités d\'interprétation de l\'indicateur',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-mod-interpretation field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_mod_interpretation|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mod_interpretation|node|fiche_indicateur|print';
  $field_group->group_name = 'group_mod_interpretation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modalités d\'interprétation de l\'indicateur',
    'weight' => '27',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mod-interpretation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_mod_interpretation|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mod_interpretation|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_mod_interpretation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_presentation';
  $field_group->data = array(
    'label' => 'Modalités d\'interprétation de l\'indicateur',
    'weight' => '43',
    'children' => array(
      0 => 'field_mod_interpretation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-mod-interpretation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_mod_interpretation|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modalite_interpretation|node|fiche_indicateur|question_indicateur_ok';
  $field_group->group_name = 'group_modalite_interpretation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur_ok';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modalités d\'interprétation de l\'indicateur',
    'weight' => '3',
    'children' => array(
      0 => 'field_mod_interpretation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Modalités d\'interprétation de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-modalite-interpretation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_modalite_interpretation|node|fiche_indicateur|question_indicateur_ok'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objectifs_snb_principaux|node|fiche_indicateur|default';
  $field_group->group_name = 'group_objectifs_snb_principaux';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Objectif(s) concerné(s) principalement',
    'weight' => '4',
    'children' => array(
      0 => 'field_objectifs_snb_principaux',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-objectifs-snb-principaux field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_objectifs_snb_principaux|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objectifs_snb_principaux|node|fiche_indicateur|form';
  $field_group->group_name = 'group_objectifs_snb_principaux';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Objectif(s) concerné(s) principalement',
    'weight' => '9',
    'children' => array(
      0 => 'field_objectifs_snb_principaux',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Objectif(s) concerné(s) principalement',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-objectifs-snb-principaux field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_objectifs_snb_principaux|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objectifs_snb_principaux|node|fiche_indicateur|print';
  $field_group->group_name = 'group_objectifs_snb_principaux';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Objectif(s) concerné(s) principalement',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-objectifs-snb-principaux field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_objectifs_snb_principaux|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objectifs_snb_principaux|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_objectifs_snb_principaux';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Objectif(s) concerné(s) principalement',
    'weight' => '4',
    'children' => array(
      0 => 'field_objectifs_snb_principaux',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-objectifs-snb-principaux field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_objectifs_snb_principaux|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objectifs_snb_secondaires|node|fiche_indicateur|default';
  $field_group->group_name = 'group_objectifs_snb_secondaires';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Objectif(s) concerné(s) secondairement',
    'weight' => '5',
    'children' => array(
      0 => 'field_objectifs_snb_secondaires',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-objectifs-snb-secondaires field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_objectifs_snb_secondaires|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objectifs_snb_secondaires|node|fiche_indicateur|form';
  $field_group->group_name = 'group_objectifs_snb_secondaires';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Objectif(s) concerné(s) secondairement',
    'weight' => '10',
    'children' => array(
      0 => 'field_objectifs_snb_secondaires',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Objectif(s) concerné(s) secondairement',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-objectifs-snb-secondaires field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_objectifs_snb_secondaires|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objectifs_snb_secondaires|node|fiche_indicateur|print';
  $field_group->group_name = 'group_objectifs_snb_secondaires';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Objectif(s) concerné(s) secondairement',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-objectifs-snb-secondaires field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_objectifs_snb_secondaires|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objectifs_snb_secondaires|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_objectifs_snb_secondaires';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Objectif(s) concerné(s) secondairement',
    'weight' => '5',
    'children' => array(
      0 => 'field_objectifs_snb_secondaires',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-objectifs-snb-secondaires field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_objectifs_snb_secondaires|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_objets_indicateurs|node|question|form';
  $field_group->group_name = 'group_objets_indicateurs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'question';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Objets et indicateurs',
    'weight' => '8',
    'children' => array(
      0 => 'field_objets_indicateurs',
      1 => 'field_sousquestion',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-objets-indicateurs field-group-tabs',
      ),
    ),
  );
  $field_groups['group_objets_indicateurs|node|question|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orientations_objectifs|node|fiche_indicateur|default';
  $field_group->group_name = 'group_orientations_objectifs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Orientation(s) et Objectif(s)',
    'weight' => '1',
    'children' => array(
      0 => 'group_orientations_principales',
      1 => 'group_objectifs_snb_principaux',
      2 => 'group_objectifs_snb_secondaires',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-orientations-objectifs field-group-tabs',
      ),
    ),
  );
  $field_groups['group_orientations_objectifs|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orientations_objectifs|node|fiche_indicateur|form';
  $field_group->group_name = 'group_orientations_objectifs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Orientation(s) et Objectif(s)',
    'weight' => '6',
    'children' => array(
      0 => 'group_orientations_principales',
      1 => 'group_objectifs_snb_principaux',
      2 => 'group_objectifs_snb_secondaires',
      3 => 'group_cdb',
      4 => 'group_sueb',
      5 => 'group_jeu',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => ' group-orientations-objectifs field-group-accordion',
      ),
    ),
  );
  $field_groups['group_orientations_objectifs|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orientations_objectifs|node|fiche_indicateur|print';
  $field_group->group_name = 'group_orientations_objectifs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Orientation(s) et Objectif(s)',
    'weight' => '16',
    'children' => array(
      0 => 'group_orientations_principales',
      1 => 'group_objectifs_snb_principaux',
      2 => 'group_objectifs_snb_secondaires',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-orientations-objectifs field-group-tabs',
      ),
    ),
  );
  $field_groups['group_orientations_objectifs|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orientations_objectifs|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_orientations_objectifs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Orientation(s) et Objectif(s)',
    'weight' => '9',
    'children' => array(
      0 => 'group_orientations_principales',
      1 => 'group_objectifs_snb_principaux',
      2 => 'group_objectifs_snb_secondaires',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-orientations-objectifs field-group-tabs',
      ),
    ),
  );
  $field_groups['group_orientations_objectifs|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orientations_principales|node|fiche_indicateur|default';
  $field_group->group_name = 'group_orientations_principales';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Orientation(s) stratégique(s) concernée(s)',
    'weight' => '3',
    'children' => array(
      0 => 'field_orientations_principales',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-orientations-principales field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_orientations_principales|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orientations_principales|node|fiche_indicateur|form';
  $field_group->group_name = 'group_orientations_principales';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Orientation(s) stratégique(s) concernée(s)',
    'weight' => '8',
    'children' => array(
      0 => 'field_orientations_principales',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Orientation(s) stratégique(s) concernée(s)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-orientations-principales field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_orientations_principales|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orientations_principales|node|fiche_indicateur|print';
  $field_group->group_name = 'group_orientations_principales';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Orientation(s) stratégique(s) concernée(s)',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-orientations-principales field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_orientations_principales|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_orientations_principales|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_orientations_principales';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'Orientation(s) stratégique(s) concernée(s)',
    'weight' => '3',
    'children' => array(
      0 => 'field_orientations_principales',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-orientations-principales field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_orientations_principales|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_origine_source|node|fiche_indicateur|default';
  $field_group->group_name = 'group_origine_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Origine et description des données sources',
    'weight' => '15',
    'children' => array(
      0 => 'field_origine_source',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-origine-source field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_origine_source|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_origine_source|node|fiche_indicateur|form';
  $field_group->group_name = 'group_origine_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Origine et description des données sources',
    'weight' => '15',
    'children' => array(
      0 => 'field_origine_source',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Origine et description des données sources',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-origine-source field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_origine_source|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_origine_source|node|fiche_indicateur|print';
  $field_group->group_name = 'group_origine_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Origine et description des données sources',
    'weight' => '42',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-origine-source field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_origine_source|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_origine_source|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_origine_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Origine et description des données sources',
    'weight' => '15',
    'children' => array(
      0 => 'field_origine_source',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-origine-source field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_origine_source|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pas_tps_disponibilite|node|fiche_indicateur|default';
  $field_group->group_name = 'group_pas_tps_disponibilite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Pas de temps de disponibilité des valeurs',
    'weight' => '17',
    'children' => array(
      0 => 'field_pas_tps_disponibilite',
      1 => 'field_pas_tps_remarques',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pas-tps-disponibilite field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pas_tps_disponibilite|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pas_tps_disponibilite|node|fiche_indicateur|form';
  $field_group->group_name = 'group_pas_tps_disponibilite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Pas de temps de disponibilité des valeurs',
    'weight' => '17',
    'children' => array(
      0 => 'field_pas_tps_disponibilite',
      1 => 'field_pas_tps_remarques',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Pas de temps de disponibilité des valeurs',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-pas-tps-disponibilite field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_pas_tps_disponibilite|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pas_tps_disponibilite|node|fiche_indicateur|print';
  $field_group->group_name = 'group_pas_tps_disponibilite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_breve_definition';
  $field_group->data = array(
    'label' => 'Pas de temps de disponibilité des valeurs',
    'weight' => '35',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pas-tps-disponibilite field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pas_tps_disponibilite|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pas_tps_disponibilite|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_pas_tps_disponibilite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Pas de temps de disponibilité des valeurs',
    'weight' => '17',
    'children' => array(
      0 => 'field_pas_tps_disponibilite',
      1 => 'field_pas_tps_remarques',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pas-tps-disponibilite field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pas_tps_disponibilite|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pas_tps_restitution|node|fiche_indicateur|default';
  $field_group->group_name = 'group_pas_tps_restitution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pas de temps de restitution',
    'weight' => '26',
    'children' => array(
      0 => 'field_pas_tps_restitution',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pas-tps-restitution field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pas_tps_restitution|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pas_tps_restitution|node|fiche_indicateur|form';
  $field_group->group_name = 'group_pas_tps_restitution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Pas de temps de restitution',
    'weight' => '46',
    'children' => array(
      0 => 'field_pas_tps_restitution',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Pas de temps de restitution',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-pas-tps-restitution field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_pas_tps_restitution|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pas_tps_restitution|node|fiche_indicateur|print';
  $field_group->group_name = 'group_pas_tps_restitution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pas de temps de restitution',
    'weight' => '33',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pas-tps-restitution field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pas_tps_restitution|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pas_tps_restitution|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_pas_tps_restitution';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Pas de temps de restitution',
    'weight' => '46',
    'children' => array(
      0 => 'field_pas_tps_restitution',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pas-tps-restitution field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pas_tps_restitution|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_perimetre|node|fiche_ressource_bibliographique|form';
  $field_group->group_name = 'group_perimetre';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_ressource_bibliographique';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ref_peri_activites';
  $field_group->data = array(
    'label' => 'Périmètre',
    'weight' => '10',
    'children' => array(
      0 => 'field_perimetre_geo',
      1 => 'field_perimetre_geo_precisions',
      2 => 'field_perimetre_thematique_nat',
      3 => 'field_perimetre_sectoriel',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_perimetre|node|fiche_ressource_bibliographique|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pistes_groupe|node|fiche_indicateur|default';
  $field_group->group_name = 'group_pistes_groupe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pistes de travail et d\'amélioration',
    'weight' => '12',
    'children' => array(
      0 => 'group_pistes',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-pistes-groupe field-group-tabs',
      ),
    ),
  );
  $field_groups['group_pistes_groupe|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pistes_groupe|node|fiche_indicateur|form';
  $field_group->group_name = 'group_pistes_groupe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pistes de travail et d\'amélioration',
    'weight' => '11',
    'children' => array(
      0 => 'group_pistes',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => ' group-pistes-groupe field-group-accordion',
      ),
    ),
  );
  $field_groups['group_pistes_groupe|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pistes_groupe|node|fiche_indicateur|print';
  $field_group->group_name = 'group_pistes_groupe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pistes de travail et d\'amélioration',
    'weight' => '8',
    'children' => array(
      0 => 'field_pistes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Pistes de travail et d\'amélioration',
      'instance_settings' => array(
        'classes' => ' group-pistes-groupe field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_fiche_indicateur_print_group_pistes_groupe',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pistes_groupe|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pistes_groupe|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_pistes_groupe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pistes de travail et d\'amélioration',
    'weight' => '14',
    'children' => array(
      0 => 'group_pistes',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-pistes-groupe field-group-tabs',
      ),
    ),
  );
  $field_groups['group_pistes_groupe|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pistes|node|fiche_indicateur|default';
  $field_group->group_name = 'group_pistes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_pistes_groupe';
  $field_group->data = array(
    'label' => 'Pistes de travail et d\'amélioration',
    'weight' => '6',
    'children' => array(
      0 => 'field_pistes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pistes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pistes|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pistes|node|fiche_indicateur|form';
  $field_group->group_name = 'group_pistes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pistes_groupe';
  $field_group->data = array(
    'label' => 'Pistes de travail et d\'amélioration',
    'weight' => '6',
    'children' => array(
      0 => 'field_pistes',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Pistes de travail et d\'amélioration',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-pistes field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_pistes|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pistes|node|fiche_indicateur|full';
  $field_group->group_name = 'group_pistes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pistes de travail et d\'améliorations',
    'weight' => '6',
    'children' => array(
      0 => 'field_pistes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Pistes de travail et d\'améliorations',
      'instance_settings' => array(
        'classes' => ' group-pistes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_pistes|node|fiche_indicateur|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pistes|node|fiche_indicateur|print';
  $field_group->group_name = 'group_pistes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pistes de travail et d\'amélioration',
    'weight' => '20',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pistes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pistes|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pistes|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_pistes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_pistes_groupe';
  $field_group->data = array(
    'label' => 'Pistes de travail et d\'amélioration',
    'weight' => '6',
    'children' => array(
      0 => 'field_pistes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-pistes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_pistes|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presentation_interpret|node|fiche_indicateur|full';
  $field_group->group_name = 'group_presentation_interpret';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Présentation et interprétation de l\'indicateur',
    'weight' => '2',
    'children' => array(
      0 => 'field_mod_interpretation',
      1 => 'field_collecvisuels',
      2 => 'field_valeurannee',
      3 => 'field_donnees_sources',
      4 => 'field_actu_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Présentation et interprétation de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-presentation-interpret field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_presentation_interpret|node|fiche_indicateur|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presentation|node|fiche_indicateur|default';
  $field_group->group_name = 'group_presentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Présentation et interprétation de l\'indicateur',
    'weight' => '10',
    'children' => array(
      0 => 'group_visuels',
      1 => 'group_mod_interpretation',
      2 => 'group_valeurannee',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-presentation field-group-tabs',
      ),
    ),
  );
  $field_groups['group_presentation|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presentation|node|fiche_indicateur|form';
  $field_group->group_name = 'group_presentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Présentation et interprétation de l\'indicateur',
    'weight' => '9',
    'children' => array(
      0 => 'group_visuels',
      1 => 'group_mod_interpretation',
      2 => 'group_valeurannee',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => ' group-presentation field-group-accordion',
      ),
    ),
  );
  $field_groups['group_presentation|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presentation|node|fiche_indicateur|print';
  $field_group->group_name = 'group_presentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Présentation et interprétation de l\'indicateur',
    'weight' => '4',
    'children' => array(
      0 => 'field_mod_interpretation',
      1 => 'field_collecvisuels',
      2 => 'field_valeurannee',
      3 => 'field_donnees_sources',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Présentation et interprétation de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-presentation field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_fiche_indicateur_print_group_presentation',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_presentation|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_presentation|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_presentation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Présentation et interprétation de l\'indicateur',
    'weight' => '12',
    'children' => array(
      0 => 'group_visuels',
      1 => 'group_mod_interpretation',
      2 => 'group_valeurannee',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-presentation field-group-tabs',
      ),
    ),
  );
  $field_groups['group_presentation|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_producteur|node|fiche_indicateur|default';
  $field_group->group_name = 'group_producteur';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Producteur',
    'weight' => '12',
    'children' => array(
      0 => 'field_indicateur_producteur',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-producteur field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_producteur|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_producteur|node|fiche_indicateur|form';
  $field_group->group_name = 'group_producteur';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Producteur',
    'weight' => '12',
    'children' => array(
      0 => 'field_indicateur_producteur',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Producteur',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-producteur field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_producteur|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_producteur|node|fiche_indicateur|print';
  $field_group->group_name = 'group_producteur';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Producteur',
    'weight' => '39',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-producteur field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_producteur|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_producteur|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_producteur';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Producteur',
    'weight' => '12',
    'children' => array(
      0 => 'field_indicateur_producteur',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-producteur field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_producteur|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_production|node|fiche_indicateur|default';
  $field_group->group_name = 'group_production';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Production de l\'indicateur',
    'weight' => '9',
    'children' => array(
      0 => 'group_producteur',
      1 => 'group_origine_source',
      2 => 'group_methodologie',
      3 => 'group_pas_tps_disponibilite',
      4 => 'group_date_publication',
      5 => 'group_rupture_serie',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-production field-group-tabs',
      ),
    ),
  );
  $field_groups['group_production|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_production|node|fiche_indicateur|form';
  $field_group->group_name = 'group_production';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Production de l\'indicateur',
    'weight' => '8',
    'children' => array(
      0 => 'group_producteur',
      1 => 'group_origine_source',
      2 => 'group_methodologie',
      3 => 'group_pas_tps_disponibilite',
      4 => 'group_date_publication',
      5 => 'group_rupture_serie',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => ' group-production field-group-accordion',
      ),
    ),
  );
  $field_groups['group_production|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_production|node|fiche_indicateur|full';
  $field_group->group_name = 'group_production';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Production de l\'indicateur',
    'weight' => '4',
    'children' => array(
      0 => 'field_origine_source',
      1 => 'field_methodologie',
      2 => 'field_date_publication',
      3 => 'field_rupture_serie',
      4 => 'field_indicateur_producteur',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Production de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-production field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_production|node|fiche_indicateur|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_production|node|fiche_indicateur|print';
  $field_group->group_name = 'group_production';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Production de l\'indicateur',
    'weight' => '6',
    'children' => array(
      0 => 'field_origine_source',
      1 => 'field_methodologie',
      2 => 'field_date_publication',
      3 => 'field_rupture_serie',
      4 => 'field_indicateur_producteur',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Production de l\'indicateur',
      'instance_settings' => array(
        'classes' => ' group-production field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_fiche_indicateur_print_group_production',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_production|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_production|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_production';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Production de l\'indicateur',
    'weight' => '11',
    'children' => array(
      0 => 'group_producteur',
      1 => 'group_origine_source',
      2 => 'group_methodologie',
      3 => 'group_pas_tps_disponibilite',
      4 => 'group_date_publication',
      5 => 'group_rupture_serie',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-production field-group-tabs',
      ),
    ),
  );
  $field_groups['group_production|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualite|node|fiche_indicateur|default';
  $field_group->group_name = 'group_qualite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_analyse';
  $field_group->data = array(
    'label' => 'Qualité',
    'weight' => '46',
    'children' => array(
      0 => 'field_robustesse',
      1 => 'field_precision',
      2 => 'field_sensibilite',
      3 => 'field_accessiblite',
      4 => 'field_homogeneite',
      5 => 'field_fiabilite',
      6 => 'field_perennite',
      7 => 'field_abondance',
      8 => 'field_efficacite',
      9 => 'field_cout',
      10 => 'field_niveau',
      11 => 'field_qualite',
      12 => 'field_robustesse_remarques',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-qualite field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_qualite|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualite|node|fiche_indicateur|form';
  $field_group->group_name = 'group_qualite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_analyse';
  $field_group->data = array(
    'label' => 'Qualité',
    'weight' => '46',
    'children' => array(
      0 => 'field_robustesse',
      1 => 'field_precision',
      2 => 'field_sensibilite',
      3 => 'field_accessiblite',
      4 => 'field_homogeneite',
      5 => 'field_fiabilite',
      6 => 'field_perennite',
      7 => 'field_abondance',
      8 => 'field_efficacite',
      9 => 'field_cout',
      10 => 'field_niveau',
      11 => 'field_qualite',
      12 => 'field_robustesse_remarques',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Qualité',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-qualite field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_qualite|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualite|node|fiche_indicateur|print';
  $field_group->group_name = 'group_qualite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Qualité',
    'weight' => '28',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-qualite field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_qualite|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_qualite|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_qualite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_analyse';
  $field_group->data = array(
    'label' => 'Qualité',
    'weight' => '46',
    'children' => array(
      0 => 'field_robustesse',
      1 => 'field_precision',
      2 => 'field_sensibilite',
      3 => 'field_accessiblite',
      4 => 'field_homogeneite',
      5 => 'field_fiabilite',
      6 => 'field_perennite',
      7 => 'field_abondance',
      8 => 'field_efficacite',
      9 => 'field_cout',
      10 => 'field_niveau',
      11 => 'field_qualite',
      12 => 'field_robustesse_remarques',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-qualite field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_qualite|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ref_peri_activites|node|fiche_ressource_bibliographique|form';
  $field_group->group_name = 'group_ref_peri_activites';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_ressource_bibliographique';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Références, périmètre et activités',
    'weight' => '8',
    'children' => array(
      0 => 'group_references_ressource',
      1 => 'group_perimetre',
      2 => 'group_activites',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => 'group-ref-peri-activites field-group-accordion',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ref_peri_activites|node|fiche_ressource_bibliographique|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references_ressource|node|fiche_ressource_bibliographique|form';
  $field_group->group_name = 'group_references_ressource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_ressource_bibliographique';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ref_peri_activites';
  $field_group->data = array(
    'label' => 'Références de la ressource',
    'weight' => '9',
    'children' => array(
      0 => 'field_date_production',
      1 => 'field_auteurs_complement',
      2 => 'field_files',
      3 => 'field_nature_interne',
      4 => 'field_nature_externe',
      5 => 'field_pagination',
      6 => 'field_citation',
      7 => 'field_auteures',
      8 => 'field_description',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_references_ressource|node|fiche_ressource_bibliographique|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_indicateurs|node|fiche_indicateur|default';
  $field_group->group_name = 'group_relation_indicateurs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indicateurs équivalents existant dans d\'autres jeux',
    'weight' => '32',
    'children' => array(
      0 => 'field_relation_indicateurs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-relation-indicateurs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_relation_indicateurs|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_indicateurs|node|fiche_indicateur|form';
  $field_group->group_name = 'group_relation_indicateurs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Indicateurs équivalents existant dans d\'autres jeux',
    'weight' => '53',
    'children' => array(
      0 => 'field_relation_indicateurs',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Indicateurs équivalents existant dans d\'autres jeux',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-relation-indicateurs field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_relation_indicateurs|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_indicateurs|node|fiche_indicateur|print';
  $field_group->group_name = 'group_relation_indicateurs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_echelle_restitution';
  $field_group->data = array(
    'label' => 'Indicateurs équivalents existant dans d\'autres jeux',
    'weight' => '41',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-relation-indicateurs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_relation_indicateurs|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_indicateurs|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_relation_indicateurs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Indicateurs équivalents existant dans d\'autres jeux',
    'weight' => '52',
    'children' => array(
      0 => 'field_relation_indicateurs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-relation-indicateurs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_relation_indicateurs|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_objectifs|node|fiche_indicateur|default';
  $field_group->group_name = 'group_relation_objectifs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relations avec le(s) objectif(s) renseigné(s)',
    'weight' => '19',
    'children' => array(
      0 => 'field_relation_objectifs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-relation-objectifs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_relation_objectifs|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_objectifs|node|fiche_indicateur|form';
  $field_group->group_name = 'group_relation_objectifs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Relations avec le(s) objectif(s) renseigné(s)',
    'weight' => '39',
    'children' => array(
      0 => 'field_relation_objectifs',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Relations avec le(s) objectif(s) renseigné(s)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-relation-objectifs field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_relation_objectifs|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_objectifs|node|fiche_indicateur|print';
  $field_group->group_name = 'group_relation_objectifs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_breve_definition';
  $field_group->data = array(
    'label' => 'Relations avec le(s) objectif(s) renseigné(s)',
    'weight' => '37',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-relation-objectifs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_relation_objectifs|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_objectifs|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_relation_objectifs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Relations avec le(s) objectif(s) renseigné(s)',
    'weight' => '39',
    'children' => array(
      0 => 'field_relation_objectifs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-relation-objectifs field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_relation_objectifs|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relation_obj|node|fiche_indicateur|question_indicateur_ok';
  $field_group->group_name = 'group_relation_obj';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur_ok';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relations avec le(s) objectif(s) renseigné(s)',
    'weight' => '4',
    'children' => array(
      0 => 'field_relation_objectifs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Relations avec le(s) objectif(s) renseigné(s)',
      'instance_settings' => array(
        'classes' => ' group-relation-obj field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_relation_obj|node|fiche_indicateur|question_indicateur_ok'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_retro_calcul|node|fiche_indicateur|default';
  $field_group->group_name = 'group_retro_calcul';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Possibilité de rétro-calcul',
    'weight' => '31',
    'children' => array(
      0 => 'field_retro_calcul',
      1 => 'field_retro_calcul_remarques',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-retro-calcul field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_retro_calcul|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_retro_calcul|node|fiche_indicateur|form';
  $field_group->group_name = 'group_retro_calcul';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Possibilité de rétro-calcul',
    'weight' => '52',
    'children' => array(
      0 => 'field_retro_calcul',
      1 => 'field_retro_calcul_remarques',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Possibilité de rétro-calcul',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-retro-calcul field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_retro_calcul|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_retro_calcul|node|fiche_indicateur|print';
  $field_group->group_name = 'group_retro_calcul';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_milieux_concernes';
  $field_group->data = array(
    'label' => 'Possibilité de rétro-calcul',
    'weight' => '39',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-retro-calcul field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_retro_calcul|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_retro_calcul|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_retro_calcul';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Possibilité de rétro-calcul',
    'weight' => '51',
    'children' => array(
      0 => 'field_retro_calcul',
      1 => 'field_retro_calcul_remarques',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-retro-calcul field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_retro_calcul|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rupture_serie|node|fiche_indicateur|default';
  $field_group->group_name = 'group_rupture_serie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Rupture de série',
    'weight' => '14',
    'children' => array(
      0 => 'field_rupture_serie',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-rupture-serie field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_rupture_serie|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rupture_serie|node|fiche_indicateur|form';
  $field_group->group_name = 'group_rupture_serie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Rupture de série',
    'weight' => '14',
    'children' => array(
      0 => 'field_rupture_serie',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Rupture de série',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-rupture-serie field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_rupture_serie|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rupture_serie|node|fiche_indicateur|print';
  $field_group->group_name = 'group_rupture_serie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rupture de série',
    'weight' => '41',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-rupture-serie field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_rupture_serie|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rupture_serie|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_rupture_serie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_production';
  $field_group->data = array(
    'label' => 'Rupture de série',
    'weight' => '14',
    'children' => array(
      0 => 'field_rupture_serie',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-rupture-serie field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_rupture_serie|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sousquestion_indic_compl|field_collection_item|field_sousquestion_indicateur|form';
  $field_group->group_name = 'group_sousquestion_indic_compl';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sousquestion_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Complément',
    'weight' => '4',
    'children' => array(
      0 => 'field_sousquestion_indic_compl',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-sousquestion-indic-compl field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sousquestion_indic_compl|field_collection_item|field_sousquestion_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sousquestion_indic_phrase|field_collection_item|field_sousquestion_indicateur|form';
  $field_group->group_name = 'group_sousquestion_indic_phrase';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sousquestion_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phrase si zoom',
    'weight' => '2',
    'children' => array(
      0 => 'field_sousquestion_phrasezoom',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Phrase si zoom',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-sousquestion-indic-phrase field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_sousquestion_indic_phrase|field_collection_item|field_sousquestion_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sousquestion_indic_visuels|field_collection_item|field_sousquestion_indicateur|form';
  $field_group->group_name = 'group_sousquestion_indic_visuels';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sousquestion_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuel(s)',
    'weight' => '3',
    'children' => array(
      0 => 'field_sousquestion_indic_visuels',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-sousquestion-indic-visuels field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sousquestion_indic_visuels|field_collection_item|field_sousquestion_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sousquestion_indicateurs|field_collection_item|field_sousquestion|form';
  $field_group->group_name = 'group_sousquestion_indicateurs';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sousquestion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indicateurs',
    'weight' => '2',
    'children' => array(
      0 => 'group_sousquestion_indicateur',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-sousquestion-indicateurs field-group-tabs',
      ),
    ),
  );
  $field_groups['group_sousquestion_indicateurs|field_collection_item|field_sousquestion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sousquestion_indicateur|field_collection_item|field_sousquestion|form';
  $field_group->group_name = 'group_sousquestion_indicateur';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sousquestion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_sousquestion_indicateurs';
  $field_group->data = array(
    'label' => 'Indicateurs',
    'weight' => '4',
    'children' => array(
      0 => 'field_sousquestion_indicateur',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-sousquestion-indicateur field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_sousquestion_indicateur|field_collection_item|field_sousquestion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sueb|node|fiche_indicateur|form';
  $field_group->group_name = 'group_sueb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_orientations_objectifs';
  $field_group->data = array(
    'label' => 'SUEB',
    'weight' => '12',
    'children' => array(
      0 => 'field_axe_sueb',
      1 => 'field_objectif_sueb',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'SUEB',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-sueb field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_sueb|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sueb|node|fiche_indicateur|print';
  $field_group->group_name = 'group_sueb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SUEB',
    'weight' => '18',
    'children' => array(
      0 => 'field_axe_sueb',
      1 => 'field_objectif_sueb',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'SUEB',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-sueb field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sueb|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_dpsir|node|fiche_indicateur|default';
  $field_group->group_name = 'group_type_dpsir';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type(s) DPSIR',
    'weight' => '20',
    'children' => array(
      0 => 'field_type_dpsir',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-type-dpsir field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_type_dpsir|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_dpsir|node|fiche_indicateur|print';
  $field_group->group_name = 'group_type_dpsir';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type(s) DPSIR',
    'weight' => '36',
    'children' => array(
      0 => 'group_type_pression',
      1 => 'group_milieux_concernes',
      2 => 'group_couverture_geo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-type-dpsir field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_type_dpsir|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_dpsir|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_type_dpsir';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Type(s) DPSIR',
    'weight' => '40',
    'children' => array(
      0 => 'field_type_dpsir',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-type-dpsir field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_type_dpsir|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_pression|node|fiche_indicateur|default';
  $field_group->group_name = 'group_type_pression';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type(s) de pression',
    'weight' => '21',
    'children' => array(
      0 => 'field_type_pression',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Type(s) de pression',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-type-pression field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_type_pression|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_pression|node|fiche_indicateur|form';
  $field_group->group_name = 'group_type_pression';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Type(s) de pression',
    'weight' => '41',
    'children' => array(
      0 => 'field_type_pression',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Type(s) de pression',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-type-pression field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_type_pression|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_pression|node|fiche_indicateur|print';
  $field_group->group_name = 'group_type_pression';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = 'group_type_dpsir';
  $field_group->data = array(
    'label' => 'Type(s) de pression',
    'weight' => '37',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Type(s) de pression',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-type-pression field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_type_pression|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_pression|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_type_pression';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Type(s) de pression',
    'weight' => '41',
    'children' => array(
      0 => 'field_type_pression',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Type(s) de pression',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-type-pression field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_type_pression|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_variable|node|fiche_indicateur|default';
  $field_group->group_name = 'group_type_variable';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type de variable',
    'weight' => '27',
    'children' => array(
      0 => 'field_type_variable',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-type-variable field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_type_variable|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_variable|node|fiche_indicateur|form';
  $field_group->group_name = 'group_type_variable';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Type de variable',
    'weight' => '48',
    'children' => array(
      0 => 'field_type_variable',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Type de variable',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-type-variable field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_type_variable|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_variable|node|fiche_indicateur|print';
  $field_group->group_name = 'group_type_variable';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type de variable',
    'weight' => '34',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-type-variable field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_type_variable|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_variable|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_type_variable';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Type de variable',
    'weight' => '47',
    'children' => array(
      0 => 'field_type_variable',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-type-variable field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_type_variable|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unite_mesure|node|fiche_indicateur|default';
  $field_group->group_name = 'group_unite_mesure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unité de mesure',
    'weight' => '28',
    'children' => array(
      0 => 'field_unite_mesure',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-unite-mesure field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_unite_mesure|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unite_mesure|node|fiche_indicateur|form';
  $field_group->group_name = 'group_unite_mesure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Unité de mesure',
    'weight' => '49',
    'children' => array(
      0 => 'field_unite_mesure',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Unité de mesure',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-unite-mesure field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_unite_mesure|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unite_mesure|node|fiche_indicateur|print';
  $field_group->group_name = 'group_unite_mesure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unité de mesure',
    'weight' => '35',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-unite-mesure field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_unite_mesure|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unite_mesure|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_unite_mesure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Unité de mesure',
    'weight' => '48',
    'children' => array(
      0 => 'field_unite_mesure',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-unite-mesure field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_unite_mesure|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_valeur_cible|node|fiche_indicateur|default';
  $field_group->group_name = 'group_valeur_cible';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Valeur(s) cible(s)',
    'weight' => '29',
    'children' => array(
      0 => 'field_valeur_cible',
      1 => 'field_valeur_cible_renseignement',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-valeur-cible field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_valeur_cible|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_valeur_cible|node|fiche_indicateur|form';
  $field_group->group_name = 'group_valeur_cible';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Valeur(s) cible(s)',
    'weight' => '50',
    'children' => array(
      0 => 'field_valeur_cible',
      1 => 'field_valeur_cible_renseignement',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Valeur(s) cible(s)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-valeur-cible field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_valeur_cible|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_valeur_cible|node|fiche_indicateur|print';
  $field_group->group_name = 'group_valeur_cible';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Valeur(s) cible(s)',
    'weight' => '37',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-valeur-cible field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_valeur_cible|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_valeur_cible|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_valeur_cible';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_definition';
  $field_group->data = array(
    'label' => 'Valeur(s) cible(s)',
    'weight' => '49',
    'children' => array(
      0 => 'field_valeur_cible',
      1 => 'field_valeur_cible_renseignement',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-valeur-cible field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_valeur_cible|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_valeurannee|node|fiche_indicateur|default';
  $field_group->group_name = 'group_valeurannee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_presentation';
  $field_group->data = array(
    'label' => 'Valeur par année',
    'weight' => '41',
    'children' => array(
      0 => 'field_valeurannee',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-valeurannee field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_valeurannee|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_valeurannee|node|fiche_indicateur|form';
  $field_group->group_name = 'group_valeurannee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_presentation';
  $field_group->data = array(
    'label' => 'Valeur par année',
    'weight' => '41',
    'children' => array(
      0 => 'field_valeurannee',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Valeur par année',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-valeurannee field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_valeurannee|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_valeurannee|node|fiche_indicateur|print';
  $field_group->group_name = 'group_valeurannee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Valeur par année',
    'weight' => '25',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-valeurannee field-group-div',
        'required_fields' => 1,
        'id' => 'node_fiche_indicateur_print_group_valeurannee',
      ),
    ),
  );
  $field_groups['group_valeurannee|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_valeurannee|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_valeurannee';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_presentation';
  $field_group->data = array(
    'label' => 'Valeur par année',
    'weight' => '41',
    'children' => array(
      0 => 'field_valeurannee',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-valeurannee field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_valeurannee|node|fiche_indicateur|question_indicateur'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_visuels|node|fiche_indicateur|default';
  $field_group->group_name = 'group_visuels';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_presentation';
  $field_group->data = array(
    'label' => 'Visuels',
    'weight' => '42',
    'children' => array(
      0 => 'field_collecvisuels',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-visuels field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_visuels|node|fiche_indicateur|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_visuels|node|fiche_indicateur|form';
  $field_group->group_name = 'group_visuels';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_presentation';
  $field_group->data = array(
    'label' => 'Visuels',
    'weight' => '42',
    'children' => array(
      0 => 'field_collecvisuels',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Visuels',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-visuels field-group-accordion-item',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_visuels|node|fiche_indicateur|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_visuels|node|fiche_indicateur|print';
  $field_group->group_name = 'group_visuels';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuels',
    'weight' => '26',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-visuels field-group-div',
        'required_fields' => 1,
        'id' => 'node_fiche_indicateur_print_group_visuels',
      ),
    ),
  );
  $field_groups['group_visuels|node|fiche_indicateur|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_visuels|node|fiche_indicateur|question_indicateur';
  $field_group->group_name = 'group_visuels';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fiche_indicateur';
  $field_group->mode = 'question_indicateur';
  $field_group->parent_name = 'group_presentation';
  $field_group->data = array(
    'label' => 'Visuels',
    'weight' => '42',
    'children' => array(
      0 => 'field_collecvisuels',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-visuels field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_visuels|node|fiche_indicateur|question_indicateur'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activités');
  t('Analyse FRB');
  t('Analyse de l\'indicateur');
  t('Brève définition');
  t('CDB');
  t('Complément');
  t('Continuité du jeu national SNB');
  t('Couverture géographique');
  t('Date de publication de la première valeur de la série');
  t('Définition, contexte et principales caractéristiques de l\'indicateur');
  t('Echelle(s) territoriale(s) de restitution');
  t('En Bref');
  t('En bref');
  t('Grain(s) de précision d\'échelle');
  t('Indicateurs');
  t('Indicateurs équivalents existant dans d\'autres jeux');
  t('Jeu(x) d\'indicateurs');
  t('Milieu(x) concerné(s)');
  t('Modalités d\'interprétation de l\'indicateur');
  t('Méthodologie de construction');
  t('Objectif(s) concerné(s) principalement');
  t('Objectif(s) concerné(s) secondairement');
  t('Objets et indicateurs');
  t('Orientation(s) et Objectif(s)');
  t('Orientation(s) stratégique(s) concernée(s)');
  t('Origine et description des données sources');
  t('Pas de temps de disponibilité des valeurs');
  t('Pas de temps de restitution');
  t('Phrase si zoom');
  t('Pistes de travail et d\'amélioration');
  t('Pistes de travail et d\'améliorations');
  t('Possibilité de rétro-calcul');
  t('Principales limites');
  t('Principaux avantages');
  t('Producteur');
  t('Production de l\'indicateur');
  t('Présentation et interprétation de l\'indicateur');
  t('Périmètre');
  t('Qualité');
  t('Relations avec le(s) objectif(s) renseigné(s)');
  t('Rupture de série');
  t('Références de la ressource');
  t('Références, périmètre et activités');
  t('SUEB');
  t('Type de variable');
  t('Type(s) DPSIR');
  t('Type(s) de pression');
  t('Unité de mesure');
  t('Valeur par année');
  t('Valeur(s) cible(s)');
  t('Visuel(s)');
  t('Visuels');

  return $field_groups;
}
