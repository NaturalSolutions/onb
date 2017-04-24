<?php
/**
 * @file
 * glossaire.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glossaire_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function glossaire_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function glossaire_default_search_api_index() {
  $items = array();
  $items['search_glossaire'] = entity_import('search_api_index', '{
    "name" : "Search glossaire",
    "machine_name" : "search_glossaire",
    "description" : null,
    "server" : "recherches",
    "item_type" : "taxonomy_term",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "name" : { "type" : "string" },
        "weight" : { "type" : "integer" },
        "vocabulary" : { "type" : "integer", "entity_type" : "taxonomy_vocabulary" },
        "field_definitions" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_first_letter" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "field_definitions:field_thematique" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "fields" : { "name" : true } }
        },
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "-49",
          "settings" : { "fields" : { "name" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "-48",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "-47",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "-46",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "mais\\r\\nfait\\r\\nle la les ceci cela ces\\r\\netc"
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
function glossaire_default_search_api_server() {
  $items = array();
  $items['recherches'] = entity_import('search_api_server', '{
    "name" : "Recherches",
    "machine_name" : "recherches",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : {
        "search_portails" : {
          "type" : {
            "table" : "search_api_db_search_portails_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_search_portails_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_perimetre_geographique" : {
            "table" : "search_api_db_search_portails_field_perimetre_geographique",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_etape_actuelle_maturati" : {
            "table" : "search_api_db_search_portails_field_etape_actuelle_maturati",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_type_d_observatoire" : {
            "table" : "search_api_db_search_portails_field_type_d_observatoire",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_portails_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_region" : {
            "table" : "search_api_db_search_portails_field_region",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_type_d_observatoire:weight" : {
            "table" : "search_api_db_search_portails_field_type_d_observatoire_weight",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "search_actions" : {
          "type" : {
            "table" : "search_api_db_search_actions_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_search_actions_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_classification" : {
            "table" : "search_api_db_search_actions_field_classification",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_type_d_action" : {
            "table" : "search_api_db_search_actions_field_type_d_action",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_actions_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_structure_pilote" : {
            "table" : "search_api_db_search_actions_field_structure_pilote",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        },
        "search_valorisations" : {
          "type" : {
            "table" : "search_api_db_search_valorisations_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_search_valorisations_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_valorisations_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_classification" : {
            "table" : "search_api_db_search_valorisations_field_classification",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        },
        "search_actualites" : {
          "type" : {
            "table" : "search_api_db_search_actualites_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_search_actualites_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_actualites_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_date" : {
            "table" : "search_api_db_search_actualites_field_date",
            "type" : "date",
            "boost" : "1.0"
          }
        },
        "search_glossaire" : {
          "name" : {
            "table" : "search_api_db_search_glossaire_name",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_definitions" : {
            "table" : "search_api_db_search_glossaire_field_definitions",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_glossaire_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_definitions:field_thematique" : {
            "table" : "search_api_db_search_glossaire_field_definitions_field_thematiq",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "vocabulary" : {
            "table" : "search_api_db_search_glossaire_vocabulary",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_first_letter" : {
            "table" : "search_api_db_search_glossaire_field_first_letter",
            "type" : "string",
            "boost" : "1.0"
          },
          "weight" : {
            "table" : "search_api_db_search_glossaire_weight",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "recherche_sciencespart" : {
          "type" : {
            "table" : "search_api_db_recherche_sciencespart_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_recherche_sciencespart_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_recherche_sciencespart_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_reseau_d_appartenance" : {
            "table" : "search_api_db_recherche_sciencespart_field_reseau_d_appartenanc",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        },
        "search_ressources" : {
          "title" : {
            "table" : "search_api_db_search_ressources_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_classification" : {
            "table" : "search_api_db_search_ressources_field_classification",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_nature_du_document" : {
            "table" : "search_api_db_search_ressources_field_nature_du_document",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_ressources_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "scald_file:file:mime" : {
            "table" : "search_api_db_search_ressources_scald_file_file_mime",
            "type" : "string",
            "boost" : "1.0"
          },
          "scald_file:file" : {
            "table" : "search_api_db_search_ressources_scald_file_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "sid" : {
            "table" : "search_api_db_search_ressources_sid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_atom_url:url" : {
            "table" : "search_api_db_search_ressources_field_atom_url_url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "publisher" : {
            "table" : "search_api_db_search_ressources_publisher",
            "type" : "integer",
            "boost" : "1.0"
          },
          "publisher:uid" : {
            "table" : "search_api_db_search_ressources_publisher_uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "publisher:roles" : {
            "table" : "search_api_db_search_ressources_publisher_roles",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_atom_statut" : {
            "table" : "search_api_db_search_ressources_field_atom_statut",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "search_ressource" : {
          "type" : {
            "table" : "search_api_db_search_ressource_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_search_ressource_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_fichier" : {
            "table" : "search_api_db_search_ressource_field_fichier",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_type_d_action" : {
            "table" : "search_api_db_search_ressource_field_type_d_action",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_search_ressource_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_fichier:title" : {
            "table" : "search_api_db_search_ressource_field_fichier_title",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_fichier:field_classification" : {
            "table" : "search_api_db_search_ressource_field_fichier_field_classificati",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_fichier:field_nature_du_document" : {
            "table" : "search_api_db_search_ressource_field_fichier_field_nature_du_do",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_fichier:scald_file:file" : {
            "table" : "search_api_db_search_ressource_field_fichier_scald_file_file",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_fichier:scald_file:file:field_folder" : {
            "table" : "search_api_db_search_ressource_field_fichier_scald_file_file_fi",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_fichier:field_atom_url:title" : {
            "table" : "search_api_db_search_ressource_field_fichier_field_atom_url_tit",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_fichier:field_atom_url:url" : {
            "table" : "search_api_db_search_ressource_field_fichier_field_atom_url_url",
            "type" : "list\\u003Curi\\u003E",
            "boost" : "1.0"
          },
          "field_fichier:scald_file:file:mime" : {
            "table" : "search_api_db_search_ressource_field_fichier_scald_file_file_mi",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          }
        },
        "node_index" : {
          "type" : {
            "table" : "search_api_db_node_index_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_node_index_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_perimetre_geographique" : {
            "table" : "search_api_db_node_index_field_perimetre_geographique",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_region" : {
            "table" : "search_api_db_node_index_field_region",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_etape_actuelle_maturati" : {
            "table" : "search_api_db_node_index_field_etape_actuelle_maturati",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_type_d_observatoire" : {
            "table" : "search_api_db_node_index_field_type_d_observatoire",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_node_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_date" : {
            "table" : "search_api_db_node_index_field_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_classification" : {
            "table" : "search_api_db_node_index_field_classification",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_type_d_action" : {
            "table" : "search_api_db_node_index_field_type_d_action",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_structure_participante" : {
            "table" : "search_api_db_node_index_field_structure_participante",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_reseau_d_appartenance" : {
            "table" : "search_api_db_node_index_field_reseau_d_appartenance",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_type_d_observatoire:weight" : {
            "table" : "search_api_db_node_index_field_type_d_observatoire_weight",
            "type" : "integer",
            "boost" : "1.0"
          },
          "og_group_ref" : {
            "table" : "search_api_db_node_index_og_group_ref",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_taille_population_cible" : {
            "table" : "search_api_db_node_index_field_taille_population_cible",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_structure:field_visuel:file" : {
            "table" : "search_api_db_node_index_field_structure_field_visuel_file",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_node_index_status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_structure_pilote:field_nom_de_la_structure" : {
            "table" : "search_api_db_node_index_field_structure_pilote_field_nom_de_la",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_structure_pilote:field_structure" : {
            "table" : "search_api_db_node_index_field_structure_pilote_field_structure",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_acronyme" : {
            "table" : "search_api_db_node_index_field_acronyme",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_structure_pilote:field_structure:field_acronyme" : {
            "table" : "search_api_db_node_index_field_structure_pilote_field_structu_1",
            "type" : "list\\u003Clist\\u003Cstring\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_type_d_action:weight" : {
            "table" : "search_api_db_node_index_field_type_d_action_weight",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_perimetre_geographique:weight" : {
            "table" : "search_api_db_node_index_field_perimetre_geographique_weight",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "search_api_db_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_node_index_created",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_perimetre_geographique:parent" : {
            "table" : "search_api_db_node_index_field_perimetre_geographique_parent",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_programme_detail" : {
            "table" : "search_api_db_node_index_field_programme_detail",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_premiere_lettre" : {
            "table" : "search_api_db_node_index_field_premiere_lettre",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_perimetre_thematique_soci" : {
            "table" : "search_api_db_node_index_field_perimetre_thematique_soci",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_perimetre_thematique_natur" : {
            "table" : "search_api_db_node_index_field_perimetre_thematique_natur",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_perimetre_sectoriel" : {
            "table" : "search_api_db_node_index_field_perimetre_sectoriel",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_perimetre_integration_indi" : {
            "table" : "search_api_db_node_index_field_perimetre_integration_indi",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_perimetre_missions_hindic" : {
            "table" : "search_api_db_node_index_field_perimetre_missions_hindic",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_perimetre_des_publics" : {
            "table" : "search_api_db_node_index_field_perimetre_des_publics",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_perimetre_statut_prod" : {
            "table" : "search_api_db_node_index_field_perimetre_statut_prod",
            "type" : "list\\u003Cinteger\\u003E",
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
