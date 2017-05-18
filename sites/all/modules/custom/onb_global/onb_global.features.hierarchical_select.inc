<?php
/**
 * @file
 * onb_global.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function onb_global_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'save_lineage' => '0',
  'enforce_deepest' => '0',
  'resizable' => '1',
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      '0' => '',
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
      '0' => '',
    ),
    'allowed_levels' => array(
      '0' => 1,
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

$configs['taxonomy-field_continuite_snb'] = $config;
$config = array(
  'save_lineage' => '0',
  'enforce_deepest' => '0',
  'resizable' => '0',
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      '0' => '',
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
      '0' => '',
    ),
    'allowed_levels' => array(
      '0' => 1,
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

$configs['taxonomy-field_relation_indicateurs'] = $config;
$config = array(
  'save_lineage' => '0',
  'enforce_deepest' => '0',
  'resizable' => '0',
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      '0' => '',
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
      '0' => '',
    ),
    'allowed_levels' => array(
      '0' => 1,
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

$configs['taxonomy-field_unite_mesure'] = $config;
return $configs;
}
