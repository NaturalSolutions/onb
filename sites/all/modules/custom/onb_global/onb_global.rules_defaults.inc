<?php
/**
 * @file
 * onb_global.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function onb_global_default_rules_configuration() {
  $items = array();
  $items['rules_analyse_frb'] = entity_import('rules_config', '{ "rules_analyse_frb" : {
      "LABEL" : "Analyse FRB",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_update--fiche_indicateur" : { "bundle" : "fiche_indicateur" },
        "node_insert--fiche_indicateur" : { "bundle" : "fiche_indicateur" }
      },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:field-analyse-frb:0:field-analyse:file" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-analyse-frb-oui-non" ], "value" : "oui" } }
      ]
    }
  }');
  $items['rules_analyse_frb_non_'] = entity_import('rules_config', '{ "rules_analyse_frb_non_" : {
      "LABEL" : "Analyse FRB (non)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_update--fiche_indicateur" : { "bundle" : "fiche_indicateur" },
        "node_insert--fiche_indicateur" : { "bundle" : "fiche_indicateur" }
      },
      "IF" : [
        { "data_is_empty" : { "data" : [ "node:field-analyse-frb:0:field-analyse:file" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-analyse-frb-oui-non" ], "value" : "non" } }
      ]
    }
  }');
  return $items;
}
