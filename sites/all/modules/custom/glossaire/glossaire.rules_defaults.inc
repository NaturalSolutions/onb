<?php
/**
 * @file
 * glossaire.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function glossaire_default_rules_configuration() {
  $items = array();
  $items['rules_glossaire_description'] = entity_import('rules_config', '{ "rules_glossaire_description" : {
      "LABEL" : "Glossaire description",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_reaction" ],
      "REQUIRES" : [ "rules", "taxonomy" ],
      "ON" : { "taxonomy_term_update" : [], "taxonomy_term_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "term:vocabulary:vid" ], "value" : "40" } },
        { "AND" : [] },
        { "data_is_empty" : { "data" : [ "term:description" ] } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "term:description" ],
            "value" : "Voir la d\\u00e9finition sur la page Glossaire"
          }
        }
      ]
    }
  }');
  return $items;
}
