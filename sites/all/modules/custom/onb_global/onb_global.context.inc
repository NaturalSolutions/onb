<?php
/**
 * @file
 * onb_global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function onb_global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'accueil';
  $context->description = 'Frontpage FR';
  $context->tag = 'Frontpage';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'fr' => 'fr',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-diaporama-block' => array(
          'module' => 'views',
          'delta' => 'diaporama-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-calendrier-block_1' => array(
          'module' => 'views',
          'delta' => 'calendrier-block_1',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-recherche_actualite-block_1' => array(
          'module' => 'views',
          'delta' => 'recherche_actualite-block_1',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'postscript_third',
          'weight' => '-38',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'no_sidebar_second',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage');
  t('Frontpage FR');
  $export['accueil'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'accueil_en';
  $context->description = 'Frontpage EN';
  $context->tag = 'Frontpage';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-diaporama-block' => array(
          'module' => 'views',
          'delta' => 'diaporama-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-calendrier-block_1' => array(
          'module' => 'views',
          'delta' => 'calendrier-block_1',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-recherche_actualite-block_1' => array(
          'module' => 'views',
          'delta' => 'recherche_actualite-block_1',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'no_sidebar_second',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage');
  t('Frontpage EN');
  $export['accueil_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nosidebar';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'indicateurs/tableau2' => 'indicateurs/tableau2',
        'indicateurs/tableau1' => 'indicateurs/tableau1',
        'indicateurs/tableau3' => 'indicateurs/tableau3',
        'indicateurs/tableau4' => 'indicateurs/tableau4',
        'indicateurs/tableau0' => 'indicateurs/tableau0',
      ),
    ),
    'views' => array(
      'values' => array(
        'tableaux' => 'tableaux',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'no_sidebar',
    ),
  );
  $context->condition_mode = 0;
  $export['nosidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_actualite';
  $context->description = '';
  $context->tag = 'Actualités';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'actualite' => 'actualite',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-recherche_actualite-block_1' => array(
          'module' => 'views',
          'delta' => 'recherche_actualite-block_1',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Actualités');
  $export['page_actualite'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_fiches_biblio';
  $context->description = '';
  $context->tag = 'Fiches biblio';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fiche_ressource_bibliographique' => 'fiche_ressource_bibliographique',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'ds_extras-barre_de_gauche' => array(
          'module' => 'ds_extras',
          'delta' => 'barre_de_gauche',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fiches biblio');
  $export['page_fiches_biblio'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_indicateur';
  $context->description = '';
  $context->tag = 'Indicateurs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fiche_indicateur' => 'fiche_indicateur',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'ds_extras-barre_de_gauche' => array(
          'module' => 'ds_extras',
          'delta' => 'barre_de_gauche',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-relations-block_1' => array(
          'module' => 'views',
          'delta' => 'relations-block_1',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Indicateurs');
  $export['page_indicateur'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_onb';
  $context->description = 'ONB FR';
  $context->tag = 'ONB';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/3' => 'node/3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-47',
        ),
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'sidebar_first',
          'weight' => '-46',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ONB');
  t('ONB FR');
  $export['page_onb'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_onb_en';
  $context->description = 'ONB EN';
  $context->tag = 'ONB';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/460' => 'node/460',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ONB');
  t('ONB EN');
  $export['page_onb_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_question';
  $context->description = '';
  $context->tag = 'Questions';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'question' => 'question',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-barre_de_gauche_question' => array(
          'module' => 'ds_extras',
          'delta' => 'barre_de_gauche_question',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'ds_extras-barre_de_gauche_question_fiche_s' => array(
          'module' => 'ds_extras',
          'delta' => 'barre_de_gauche_question_fiche_s',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-relations-block_2' => array(
          'module' => 'views',
          'delta' => 'relations-block_2',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'ds_extras-barre_de_gauche_question_impress' => array(
          'module' => 'ds_extras',
          'delta' => 'barre_de_gauche_question_impress',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Questions');
  $export['page_question'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_thematique';
  $context->description = '';
  $context->tag = 'Thematiques';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'thematiques/*' => 'thematiques/*',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'jeux_d_indicateurs' => 'jeux_d_indicateurs',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ds_extras-barre_de_gauche_thematique' => array(
          'module' => 'ds_extras',
          'delta' => 'barre_de_gauche_thematique',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thematiques');
  $export['page_thematique'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tableau1';
  $context->description = '';
  $context->tag = 'Print';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'recherche_indicateurs:tableau1' => 'recherche_indicateurs:tableau1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Print');
  $export['tableau1'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vue_actualites';
  $context->description = '';
  $context->tag = 'Actualités';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'actualites/toutes' => 'actualites/toutes',
        'actualites/all' => 'actualites/all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recherche_actualite-block_2' => array(
          'module' => 'views',
          'delta' => 'recherche_actualite-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-55',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-54',
        ),
        'facetapi-mz1U7vEhTOGB4H2dC0zmfwGvT31f0Fwp' => array(
          'module' => 'facetapi',
          'delta' => 'mz1U7vEhTOGB4H2dC0zmfwGvT31f0Fwp',
          'region' => 'sidebar_first',
          'weight' => '-53',
        ),
        'facetapi-2nqGdPLV05KnsANhCZeBMYNCR7Km2Wou' => array(
          'module' => 'facetapi',
          'delta' => '2nqGdPLV05KnsANhCZeBMYNCR7Km2Wou',
          'region' => 'sidebar_first',
          'weight' => '-52',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Actualités');
  $export['vue_actualites'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vue_fiches_biblio';
  $context->description = '';
  $context->tag = 'Fiches biblio';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'recherche_fiches_bibliographiques' => 'recherche_fiches_bibliographiques',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-standard' => array(
          'module' => 'current_search',
          'delta' => 'standard',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-q3qwjbG6MgQk86uYcYLCdo1w1Ox7ZnWp' => array(
          'module' => 'facetapi',
          'delta' => 'q3qwjbG6MgQk86uYcYLCdo1w1Ox7ZnWp',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-NgIF8RIOBV5ECrk45ALlKR9HmbhH18Ji' => array(
          'module' => 'facetapi',
          'delta' => 'NgIF8RIOBV5ECrk45ALlKR9HmbhH18Ji',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-AwNEwsXHd7MP1Hf1PGqiOnj10sHJNPVL' => array(
          'module' => 'facetapi',
          'delta' => 'AwNEwsXHd7MP1Hf1PGqiOnj10sHJNPVL',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-jQgxrRm5eVtgSYZyZNmjQUf6Ta7Aobab' => array(
          'module' => 'facetapi',
          'delta' => 'jQgxrRm5eVtgSYZyZNmjQUf6Ta7Aobab',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-md1YF9vasA71mFnhlCGlWct30DFspy0o' => array(
          'module' => 'facetapi',
          'delta' => 'md1YF9vasA71mFnhlCGlWct30DFspy0o',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-LrRXTrkdLflxt2AVW8oPY87SUtZ3RIEE' => array(
          'module' => 'facetapi',
          'delta' => 'LrRXTrkdLflxt2AVW8oPY87SUtZ3RIEE',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-QVrrrqoV00iJQusZ2iG8KyA7khx9ytJr' => array(
          'module' => 'facetapi',
          'delta' => 'QVrrrqoV00iJQusZ2iG8KyA7khx9ytJr',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-6JYJcWN6wB2bNpqybC0Jm0rEEPwITmXg' => array(
          'module' => 'facetapi',
          'delta' => '6JYJcWN6wB2bNpqybC0Jm0rEEPwITmXg',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'facetapi-3r46c3NAblFRJM5BrJDdvrs40XMXhTay' => array(
          'module' => 'facetapi',
          'delta' => '3r46c3NAblFRJM5BrJDdvrs40XMXhTay',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'facetapi-pmyXsWlY1Yg494QwWotv5xOoyj1rCGes' => array(
          'module' => 'facetapi',
          'delta' => 'pmyXsWlY1Yg494QwWotv5xOoyj1rCGes',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Fiches biblio');
  $export['vue_fiches_biblio'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vue_indicateur';
  $context->description = '';
  $context->tag = 'Indicateurs';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'recherche_indicateurs:page' => 'recherche_indicateurs:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-clone_of_standard' => array(
          'module' => 'current_search',
          'delta' => 'clone_of_standard',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-qIKfIl3fzLn7s6sYLnlpIAnMOifVQCbE' => array(
          'module' => 'facetapi',
          'delta' => 'qIKfIl3fzLn7s6sYLnlpIAnMOifVQCbE',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-jugyl43OZdfGX6R3k5meeF1KhIYZt2dl' => array(
          'module' => 'facetapi',
          'delta' => 'jugyl43OZdfGX6R3k5meeF1KhIYZt2dl',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-zQB2U5nTCxyIoEbKzsPEePi8Y9UlJNtM' => array(
          'module' => 'facetapi',
          'delta' => 'zQB2U5nTCxyIoEbKzsPEePi8Y9UlJNtM',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-5PJZvOhKN1WCbQmELrQjWYWBUah5UQYp' => array(
          'module' => 'facetapi',
          'delta' => '5PJZvOhKN1WCbQmELrQjWYWBUah5UQYp',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-JKQatLJ3o3ev1dIdqGLuGrZYRpqbL0QQ' => array(
          'module' => 'facetapi',
          'delta' => 'JKQatLJ3o3ev1dIdqGLuGrZYRpqbL0QQ',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-qHkLlWWHvZedkTRbfBhaefsoE1aCYinL' => array(
          'module' => 'facetapi',
          'delta' => 'qHkLlWWHvZedkTRbfBhaefsoE1aCYinL',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-3lTwMC5PVStMfwVIVo860u5kQBG4eQKo' => array(
          'module' => 'facetapi',
          'delta' => '3lTwMC5PVStMfwVIVo860u5kQBG4eQKo',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
        'facetapi-iBmdtOA6tLf1TxWZ6z7GHHMJZok1xfpN' => array(
          'module' => 'facetapi',
          'delta' => 'iBmdtOA6tLf1TxWZ6z7GHHMJZok1xfpN',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'facetapi-vDQ4ArGTU9uhM0FTXpDbAA9obMysq2DH' => array(
          'module' => 'facetapi',
          'delta' => 'vDQ4ArGTU9uhM0FTXpDbAA9obMysq2DH',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
        'facetapi-uh114tgpzyuTf7QTaLrgbskK2IDReJ1y' => array(
          'module' => 'facetapi',
          'delta' => 'uh114tgpzyuTf7QTaLrgbskK2IDReJ1y',
          'region' => 'sidebar_first',
          'weight' => '2',
        ),
        'facetapi-1PFPsSdQ1oEEDvWm0FDBZrlA8YUBd9xN' => array(
          'module' => 'facetapi',
          'delta' => '1PFPsSdQ1oEEDvWm0FDBZrlA8YUBd9xN',
          'region' => 'sidebar_first',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Indicateurs');
  $export['vue_indicateur'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vue_question';
  $context->description = '';
  $context->tag = 'Questions';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'recherche_questions' => 'recherche_questions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-question' => array(
          'module' => 'current_search',
          'delta' => 'question',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-d0bp4OQSE2q0vtCzwYPNhhvUzTccy1U6' => array(
          'module' => 'facetapi',
          'delta' => 'd0bp4OQSE2q0vtCzwYPNhhvUzTccy1U6',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-jbnMBFs4msbpxVc3vgYx2bbVtR1lm4QM' => array(
          'module' => 'facetapi',
          'delta' => 'jbnMBFs4msbpxVc3vgYx2bbVtR1lm4QM',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-zJW12ifaWLGVfq1Iot3Ncl3DGmGaPiJq' => array(
          'module' => 'facetapi',
          'delta' => 'zJW12ifaWLGVfq1Iot3Ncl3DGmGaPiJq',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-elAtZQS3y2moNjP82yifaBhIgfen0Iwj' => array(
          'module' => 'facetapi',
          'delta' => 'elAtZQS3y2moNjP82yifaBhIgfen0Iwj',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Questions');
  $export['vue_question'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vue_thematique';
  $context->description = '';
  $context->tag = 'Thematiques';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'recherche_thematiques:page' => 'recherche_thematiques:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-8C1JGy9U5JwO2jylR0FTyxNCtD1kGQMO' => array(
          'module' => 'facetapi',
          'delta' => '8C1JGy9U5JwO2jylR0FTyxNCtD1kGQMO',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-BYtTIDsMiwLQyV1FpOE4A8vyl5UDjGvM' => array(
          'module' => 'facetapi',
          'delta' => 'BYtTIDsMiwLQyV1FpOE4A8vyl5UDjGvM',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-Ps7TNGjqNuYITL1WWq9MqTtN6cH7HXnQ' => array(
          'module' => 'facetapi',
          'delta' => 'Ps7TNGjqNuYITL1WWq9MqTtN6cH7HXnQ',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-3PhQ47wkk84YINX0qQi40POUu5uJF3q7' => array(
          'module' => 'facetapi',
          'delta' => '3PhQ47wkk84YINX0qQi40POUu5uJF3q7',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Thematiques');
  $export['vue_thematique'] = $context;

  return $export;
}
