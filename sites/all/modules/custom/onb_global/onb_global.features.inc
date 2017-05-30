<?php
/**
 * @file
 * onb_global.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function onb_global_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "backup_migrate" && $api == "backup_migrate_exportables") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function onb_global_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function onb_global_image_default_styles() {
  $styles = array();

  // Exported image style: 550x200.
  $styles['550x200'] = array(
    'label' => '550x200',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 200,
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 600x200.
  $styles['600x200'] = array(
    'label' => '600x200',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 550,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 660x240.
  $styles['660x240'] = array(
    'label' => '660x240',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 660,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 720x260.
  $styles['720x260'] = array(
    'label' => '720x260',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 960x260.
  $styles['960x260'] = array(
    'label' => '960x260',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: a4.
  $styles['a4'] = array(
    'label' => 'a4',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_thumbnail_80.
  $styles['square_thumbnail_80'] = array(
    'label' => 'square_thumbnail_80',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function onb_global_node_info() {
  $items = array(
    'actualite' => array(
      'name' => t('Actualite'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'auteur_e' => array(
      'name' => t('Auteur(e)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'event_calendar' => array(
      'name' => t('Calendrier'),
      'base' => 'node_content',
      'description' => t('A content type to create events for calendar.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
    'fiche_indicateur' => array(
      'name' => t('Fiche indicateur'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom complet de l\'indicateur'),
      'help' => '',
    ),
    'fiche_ressource_bibliographique' => array(
      'name' => t('Fiche ressource bibliographique'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page de base'),
      'base' => 'node_content',
      'description' => t('Utilisez les <em>pages de base</em> pour votre contenu statique, tel que la page \'Qui sommes-nous\'.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'producteur' => array(
      'name' => t('Producteur'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function onb_global_default_search_api_index() {
  $items = array();
  $items['search_fiches_biblio'] = entity_import('search_api_index', '{
    "name" : "Search fiches biblio",
    "machine_name" : "search_fiches_biblio",
    "description" : null,
    "server" : "recherche_actualites",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "fiche_ressource_bibliographique" ] },
      "index_directly" : 1,
      "cron_limit" : "150",
      "fields" : {
        "field_accessiblite" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_auteures" : { "type" : "integer", "entity_type" : "node" },
        "field_classification" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_nature_externe" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_nature_interne" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_origine" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_perimetre_geo" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_perimetre_sectoriel" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_perimetre_thematique_nat" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_statut" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "string" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : { "title" : true }, "exceptions" : "texan=texa" }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function onb_global_default_search_api_server() {
  $items = array();
  $items['recherche_actualites'] = entity_import('search_api_server', '{
    "name" : "Recherches",
    "machine_name" : "recherche_actualites",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : {
        "search_actualite" : {
          "field_actu_date" : {
            "table" : "search_api_db_search_actualite_field_actu_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_motscles" : {
            "table" : "search_api_db_search_actualite_field_motscles",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_actualite_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_motscles:name" : {
            "table" : "search_api_db_search_actualite_field_motscles_name",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_search_actualite_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_search_actualite_title",
            "type" : "string",
            "boost" : "1.0"
          }
        },
        "search_questions" : {
          "type" : {
            "table" : "search_api_db_search_questions_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_search_questions_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_orientations_principales" : {
            "table" : "search_api_db_search_questions_field_orientations_principales",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_objectifs_snb_principaux" : {
            "table" : "search_api_db_search_questions_field_objectifs_snb_principaux",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_type_dpsir" : {
            "table" : "search_api_db_search_questions_field_type_dpsir",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_questions_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_jeux_indicateur" : {
            "table" : "search_api_db_search_questions_field_jeux_indicateur",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_search_questions_status",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_jeux_indicateur:name" : {
            "table" : "search_api_db_search_questions_field_jeux_indicateur_name",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_jeux_indicateur:weight" : {
            "table" : "search_api_db_search_questions_field_jeux_indicateur_weight",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "nid" : {
            "table" : "search_api_db_search_questions",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_position" : {
            "table" : "search_api_db_search_questions",
            "column" : "field_position",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "search_indicateurs" : {
          "title" : {
            "table" : "search_api_db_search_indicateurs_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_orientations_principales" : {
            "table" : "search_api_db_search_indicateurs_field_orientations_principales",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_objectifs_snb_principaux" : {
            "table" : "search_api_db_search_indicateurs_field_objectifs_snb_principaux",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_type_dpsir" : {
            "table" : "search_api_db_search_indicateurs_field_type_dpsir",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_couveture_geo" : {
            "table" : "search_api_db_search_indicateurs_field_couveture_geo",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_indicateurs_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_search_indicateurs_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_milieux_concernes" : {
            "table" : "search_api_db_search_indicateurs_field_milieux_concernes",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_type_pression" : {
            "table" : "search_api_db_search_indicateurs_field_type_pression",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_indicateur_producteur" : {
            "table" : "search_api_db_search_indicateurs_field_indicateur_producteur",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_jeux_indicateur" : {
            "table" : "search_api_db_search_indicateurs_field_jeux_indicateur",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_search_indicateurs_status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_analyse_frb" : {
            "table" : "search_api_db_search_indicateurs_field_analyse_frb",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_analyse_frb_oui_non" : {
            "table" : "search_api_db_search_indicateurs",
            "column" : "field_analyse_frb_oui_non",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_analyse_frb:field_analyse_annee" : {
            "table" : "search_api_db_search_indicateurs_field_analyse_frb_field_analy",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_echelle_restitution" : {
            "table" : "search_api_db_search_indicateurs_field_echelle_restitution",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        },
        "search_term_thematique" : {
          "name" : {
            "table" : "search_api_db_search_term_thematique_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_term_thematique_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "description" : {
            "table" : "search_api_db_search_term_thematique_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_type_de_thematique" : {
            "table" : "search_api_db_search_term_thematique_field_type_de_thematique",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_visuel:file" : {
            "table" : "search_api_db_search_term_thematique_field_visuel_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "vocabulary" : {
            "table" : "search_api_db_search_term_thematique_vocabulary",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_visuel:file:url" : {
            "table" : "search_api_db_search_term_thematique_field_visuel_file_url",
            "type" : "string",
            "boost" : "1.0"
          },
          "vocabulary:vid" : {
            "table" : "search_api_db_search_term_thematique_vocabulary_vid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "vocabulary:name" : {
            "table" : "search_api_db_search_term_thematique_vocabulary_name",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_statut_de_publication" : {
            "table" : "search_api_db_search_term_thematique_field_statut_de_publicatio",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_date_publication_jeu" : {
            "table" : "search_api_db_search_term_thematique_field_date_publication_jeu",
            "type" : "date",
            "boost" : "1.0"
          },
          "weight" : {
            "table" : "search_api_db_search_term_thematique",
            "column" : "weight",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "search_term_glossaire" : {
          "name" : {
            "table" : "search_api_db_search_term_glossaire_name",
            "type" : "string",
            "boost" : "1.0"
          },
          "vocabulary" : {
            "table" : "search_api_db_search_term_glossaire_vocabulary",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_term_glossaire_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "vocabulary:vid" : {
            "table" : "search_api_db_search_term_glossaire_vocabulary_vid",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "search_fiches_biblio" : {
          "type" : {
            "table" : "search_api_db_search_fiches_biblio",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_search_fiches_biblio",
            "column" : "title",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_accessiblite" : {
            "table" : "search_api_db_search_fiches_biblio",
            "column" : "field_accessiblite",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_origine" : {
            "table" : "search_api_db_search_fiches_biblio",
            "column" : "field_origine",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_classification" : {
            "table" : "search_api_db_search_fiches_biblio",
            "column" : "field_classification",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_statut" : {
            "table" : "search_api_db_search_fiches_biblio",
            "column" : "field_statut",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_nature_interne" : {
            "table" : "search_api_db_search_fiches_biblio_field_nature_interne",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_nature_externe" : {
            "table" : "search_api_db_search_fiches_biblio",
            "column" : "field_nature_externe",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_perimetre_geo" : {
            "table" : "search_api_db_search_fiches_biblio_field_perimetre_geo",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_perimetre_thematique_nat" : {
            "table" : "search_api_db_search_fiches_biblio_field_perimetre_thematique_",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_perimetre_sectoriel" : {
            "table" : "search_api_db_search_fiches_biblio_field_perimetre_sectoriel",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_auteures" : {
            "table" : "search_api_db_search_fiches_biblio",
            "column" : "field_auteures",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_fiches_biblio",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function onb_global_default_search_api_sort() {
  $items = array();
  $items['search_fiches_biblio__field_accessiblite'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "field_accessiblite",
    "name" : "Accessibilit\\u00e9 des donn\\u00e9es",
    "enabled" : "0",
    "weight" : "-95",
    "identifier" : "search_fiches_biblio__field_accessiblite",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Accessibilit\\u00e9 des donn\\u00e9es" },
    "rdf_mapping" : []
  }');
  $items['search_fiches_biblio__field_auteures'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "field_auteures",
    "name" : "Auteur(e - s)",
    "enabled" : "0",
    "weight" : "-92",
    "identifier" : "search_fiches_biblio__field_auteures",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Auteur(e - s)" },
    "rdf_mapping" : []
  }');
  $items['search_fiches_biblio__field_classification'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "field_classification",
    "name" : "Classification",
    "enabled" : "0",
    "weight" : "-94",
    "identifier" : "search_fiches_biblio__field_classification",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Classification" },
    "rdf_mapping" : []
  }');
  $items['search_fiches_biblio__field_nature_externe'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "field_nature_externe",
    "name" : "Nature de la ressource",
    "enabled" : "0",
    "weight" : "-93",
    "identifier" : "search_fiches_biblio__field_nature_externe",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Nature de la ressource" },
    "rdf_mapping" : []
  }');
  $items['search_fiches_biblio__field_origine'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "field_origine",
    "name" : "Origine de la ressource",
    "enabled" : "0",
    "weight" : "-97",
    "identifier" : "search_fiches_biblio__field_origine",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Origine de la ressource" },
    "rdf_mapping" : []
  }');
  $items['search_fiches_biblio__field_statut'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "field_statut",
    "name" : "Statut de la ressource",
    "enabled" : "0",
    "weight" : "-96",
    "identifier" : "search_fiches_biblio__field_statut",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Statut de la ressource" },
    "rdf_mapping" : []
  }');
  $items['search_fiches_biblio__search_api_language'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "search_api_language",
    "name" : "Language de l\\u0026#039;\\u00e9l\\u00e9ment",
    "enabled" : "0",
    "weight" : "-91",
    "identifier" : "search_fiches_biblio__search_api_language",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Item language" },
    "rdf_mapping" : []
  }');
  $items['search_fiches_biblio__search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "0",
    "weight" : "-100",
    "identifier" : "search_fiches_biblio__search_api_relevance",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" },
    "rdf_mapping" : []
  }');
  $items['search_fiches_biblio__title'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "title",
    "name" : "Titre",
    "enabled" : "0",
    "weight" : "-98",
    "identifier" : "search_fiches_biblio__title",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Title" },
    "rdf_mapping" : []
  }');
  $items['search_fiches_biblio__type'] = entity_import('search_api_sort', '{
    "index_id" : "search_fiches_biblio",
    "field" : "type",
    "name" : "Type de contenu",
    "enabled" : "0",
    "weight" : "-99",
    "identifier" : "search_fiches_biblio__type",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Content type" },
    "rdf_mapping" : []
  }');
  return $items;
}
