<?php
/**
 * @file
 * onb_global.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function onb_global_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access lexicon'.
  $permissions['access lexicon'] = array(
    'name' => 'access lexicon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lexicon',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access printfriendly'.
  $permissions['access printfriendly'] = array(
    'name' => 'access printfriendly',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'printfriendly',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add JS snippets for google analytics'.
  $permissions['add JS snippets for google analytics'] = array(
    'name' => 'add JS snippets for google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'administer @font-your-face'.
  $permissions['administer @font-your-face'] = array(
    'name' => 'administer @font-your-face',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fontyourface',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer custom breadcrumbs'.
  $permissions['administer custom breadcrumbs'] = array(
    'name' => 'administer custom breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: 'administer delta'.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer lexicon'.
  $permissions['administer lexicon'] = array(
    'name' => 'administer lexicon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'lexicon',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page titles'.
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_title',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer printfriendly'.
  $permissions['administer printfriendly'] = array(
    'name' => 'administer printfriendly',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'printfriendly',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer schema'.
  $permissions['administer schema'] = array(
    'name' => 'administer schema',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'schema',
  );

  // Exported permission: 'administer scroll to top'.
  $permissions['administer scroll to top'] = array(
    'name' => 'administer scroll to top',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scroll_to_top',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer taxonomy display'.
  $permissions['administer taxonomy display'] = array(
    'name' => 'administer taxonomy display',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_display',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear acronyme feeds'.
  $permissions['clear acronyme feeds'] = array(
    'name' => 'clear acronyme feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear field_collections feeds'.
  $permissions['clear field_collections feeds'] = array(
    'name' => 'clear field_collections feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear glossaire feeds'.
  $permissions['clear glossaire feeds'] = array(
    'name' => 'clear glossaire feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear th_matique feeds'.
  $permissions['clear th_matique feeds'] = array(
    'name' => 'clear th_matique feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: 'create actualite content'.
  $permissions['create actualite content'] = array(
    'name' => 'create actualite content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fiche_indicateur content'.
  $permissions['create fiche_indicateur content'] = array(
    'name' => 'create fiche_indicateur content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create producteur content'.
  $permissions['create producteur content'] = array(
    'name' => 'create producteur content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create question content'.
  $permissions['create question content'] = array(
    'name' => 'create question content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any actualite content'.
  $permissions['delete any actualite content'] = array(
    'name' => 'delete any actualite content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any fiche_indicateur content'.
  $permissions['delete any fiche_indicateur content'] = array(
    'name' => 'delete any fiche_indicateur content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any producteur content'.
  $permissions['delete any producteur content'] = array(
    'name' => 'delete any producteur content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any question content'.
  $permissions['delete any question content'] = array(
    'name' => 'delete any question content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own actualite content'.
  $permissions['delete own actualite content'] = array(
    'name' => 'delete own actualite content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own fiche_indicateur content'.
  $permissions['delete own fiche_indicateur content'] = array(
    'name' => 'delete own fiche_indicateur content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own producteur content'.
  $permissions['delete own producteur content'] = array(
    'name' => 'delete own producteur content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own question content'.
  $permissions['delete own question content'] = array(
    'name' => 'delete own question content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in biais'.
  $permissions['delete terms in biais'] = array(
    'name' => 'delete terms in biais',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in cdb'.
  $permissions['delete terms in cdb'] = array(
    'name' => 'delete terms in cdb',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in continuit_du_jeu_national'.
  $permissions['delete terms in continuit_du_jeu_national'] = array(
    'name' => 'delete terms in continuit_du_jeu_national',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in couverture_g_ographique'.
  $permissions['delete terms in couverture_g_ographique'] = array(
    'name' => 'delete terms in couverture_g_ographique',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in d_clinaisons_locales'.
  $permissions['delete terms in d_clinaisons_locales'] = array(
    'name' => 'delete terms in d_clinaisons_locales',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in disponibilite'.
  $permissions['delete terms in disponibilite'] = array(
    'name' => 'delete terms in disponibilite',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in echelle'.
  $permissions['delete terms in echelle'] = array(
    'name' => 'delete terms in echelle',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in glossaire'.
  $permissions['delete terms in glossaire'] = array(
    'name' => 'delete terms in glossaire',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in headline'.
  $permissions['delete terms in headline'] = array(
    'name' => 'delete terms in headline',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in indicateurs_quivalents'.
  $permissions['delete terms in indicateurs_quivalents'] = array(
    'name' => 'delete terms in indicateurs_quivalents',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in jeux_d_indicateurs'.
  $permissions['delete terms in jeux_d_indicateurs'] = array(
    'name' => 'delete terms in jeux_d_indicateurs',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_folders'.
  $permissions['delete terms in media_folders'] = array(
    'name' => 'delete terms in media_folders',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in milieux'.
  $permissions['delete terms in milieux'] = array(
    'name' => 'delete terms in milieux',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in mots_cl_s'.
  $permissions['delete terms in mots_cl_s'] = array(
    'name' => 'delete terms in mots_cl_s',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in niveau_d_appropriation'.
  $permissions['delete terms in niveau_d_appropriation'] = array(
    'name' => 'delete terms in niveau_d_appropriation',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in objectifs_snb'.
  $permissions['delete terms in objectifs_snb'] = array(
    'name' => 'delete terms in objectifs_snb',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in orientations_strat_giques'.
  $permissions['delete terms in orientations_strat_giques'] = array(
    'name' => 'delete terms in orientations_strat_giques',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in pas_de_temps'.
  $permissions['delete terms in pas_de_temps'] = array(
    'name' => 'delete terms in pas_de_temps',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in piste_d_indicateur'.
  $permissions['delete terms in piste_d_indicateur'] = array(
    'name' => 'delete terms in piste_d_indicateur',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in qualit_'.
  $permissions['delete terms in qualit_'] = array(
    'name' => 'delete terms in qualit_',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in rupture_de_s_rie'.
  $permissions['delete terms in rupture_de_s_rie'] = array(
    'name' => 'delete terms in rupture_de_s_rie',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sensibilit_'.
  $permissions['delete terms in sensibilit_'] = array(
    'name' => 'delete terms in sensibilit_',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sigle'.
  $permissions['delete terms in sigle'] = array(
    'name' => 'delete terms in sigle',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in statut_de_publication'.
  $permissions['delete terms in statut_de_publication'] = array(
    'name' => 'delete terms in statut_de_publication',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sueb'.
  $permissions['delete terms in sueb'] = array(
    'name' => 'delete terms in sueb',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in thematique'.
  $permissions['delete terms in thematique'] = array(
    'name' => 'delete terms in thematique',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in thematiquetest'.
  $permissions['delete terms in thematiquetest'] = array(
    'name' => 'delete terms in thematiquetest',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in type_de_pr_sentation'.
  $permissions['delete terms in type_de_pr_sentation'] = array(
    'name' => 'delete terms in type_de_pr_sentation',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in type_de_pression'.
  $permissions['delete terms in type_de_pression'] = array(
    'name' => 'delete terms in type_de_pression',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in type_de_th_matique'.
  $permissions['delete terms in type_de_th_matique'] = array(
    'name' => 'delete terms in type_de_th_matique',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in type_de_variable'.
  $permissions['delete terms in type_de_variable'] = array(
    'name' => 'delete terms in type_de_variable',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in type_dpsir'.
  $permissions['delete terms in type_dpsir'] = array(
    'name' => 'delete terms in type_dpsir',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in unit_de_mesure'.
  $permissions['delete terms in unit_de_mesure'] = array(
    'name' => 'delete terms in unit_de_mesure',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'diff view changes'.
  $permissions['diff view changes'] = array(
    'name' => 'diff view changes',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'diff',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any actualite content'.
  $permissions['edit any actualite content'] = array(
    'name' => 'edit any actualite content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any fiche_indicateur content'.
  $permissions['edit any fiche_indicateur content'] = array(
    'name' => 'edit any fiche_indicateur content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any producteur content'.
  $permissions['edit any producteur content'] = array(
    'name' => 'edit any producteur content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any question content'.
  $permissions['edit any question content'] = array(
    'name' => 'edit any question content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own actualite content'.
  $permissions['edit own actualite content'] = array(
    'name' => 'edit own actualite content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own fiche_indicateur content'.
  $permissions['edit own fiche_indicateur content'] = array(
    'name' => 'edit own fiche_indicateur content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own producteur content'.
  $permissions['edit own producteur content'] = array(
    'name' => 'edit own producteur content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own question content'.
  $permissions['edit own question content'] = array(
    'name' => 'edit own question content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in biais'.
  $permissions['edit terms in biais'] = array(
    'name' => 'edit terms in biais',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in cdb'.
  $permissions['edit terms in cdb'] = array(
    'name' => 'edit terms in cdb',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in continuit_du_jeu_national'.
  $permissions['edit terms in continuit_du_jeu_national'] = array(
    'name' => 'edit terms in continuit_du_jeu_national',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in couverture_g_ographique'.
  $permissions['edit terms in couverture_g_ographique'] = array(
    'name' => 'edit terms in couverture_g_ographique',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in d_clinaisons_locales'.
  $permissions['edit terms in d_clinaisons_locales'] = array(
    'name' => 'edit terms in d_clinaisons_locales',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in disponibilite'.
  $permissions['edit terms in disponibilite'] = array(
    'name' => 'edit terms in disponibilite',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in echelle'.
  $permissions['edit terms in echelle'] = array(
    'name' => 'edit terms in echelle',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in glossaire'.
  $permissions['edit terms in glossaire'] = array(
    'name' => 'edit terms in glossaire',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in headline'.
  $permissions['edit terms in headline'] = array(
    'name' => 'edit terms in headline',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in indicateurs_quivalents'.
  $permissions['edit terms in indicateurs_quivalents'] = array(
    'name' => 'edit terms in indicateurs_quivalents',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in jeux_d_indicateurs'.
  $permissions['edit terms in jeux_d_indicateurs'] = array(
    'name' => 'edit terms in jeux_d_indicateurs',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_folders'.
  $permissions['edit terms in media_folders'] = array(
    'name' => 'edit terms in media_folders',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in milieux'.
  $permissions['edit terms in milieux'] = array(
    'name' => 'edit terms in milieux',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in mots_cl_s'.
  $permissions['edit terms in mots_cl_s'] = array(
    'name' => 'edit terms in mots_cl_s',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in niveau_d_appropriation'.
  $permissions['edit terms in niveau_d_appropriation'] = array(
    'name' => 'edit terms in niveau_d_appropriation',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in objectifs_snb'.
  $permissions['edit terms in objectifs_snb'] = array(
    'name' => 'edit terms in objectifs_snb',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in orientations_strat_giques'.
  $permissions['edit terms in orientations_strat_giques'] = array(
    'name' => 'edit terms in orientations_strat_giques',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in pas_de_temps'.
  $permissions['edit terms in pas_de_temps'] = array(
    'name' => 'edit terms in pas_de_temps',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in piste_d_indicateur'.
  $permissions['edit terms in piste_d_indicateur'] = array(
    'name' => 'edit terms in piste_d_indicateur',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in qualit_'.
  $permissions['edit terms in qualit_'] = array(
    'name' => 'edit terms in qualit_',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in rupture_de_s_rie'.
  $permissions['edit terms in rupture_de_s_rie'] = array(
    'name' => 'edit terms in rupture_de_s_rie',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sensibilit_'.
  $permissions['edit terms in sensibilit_'] = array(
    'name' => 'edit terms in sensibilit_',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sigle'.
  $permissions['edit terms in sigle'] = array(
    'name' => 'edit terms in sigle',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in statut_de_publication'.
  $permissions['edit terms in statut_de_publication'] = array(
    'name' => 'edit terms in statut_de_publication',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sueb'.
  $permissions['edit terms in sueb'] = array(
    'name' => 'edit terms in sueb',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in thematique'.
  $permissions['edit terms in thematique'] = array(
    'name' => 'edit terms in thematique',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in thematiquetest'.
  $permissions['edit terms in thematiquetest'] = array(
    'name' => 'edit terms in thematiquetest',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in type_de_pr_sentation'.
  $permissions['edit terms in type_de_pr_sentation'] = array(
    'name' => 'edit terms in type_de_pr_sentation',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in type_de_pression'.
  $permissions['edit terms in type_de_pression'] = array(
    'name' => 'edit terms in type_de_pression',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in type_de_th_matique'.
  $permissions['edit terms in type_de_th_matique'] = array(
    'name' => 'edit terms in type_de_th_matique',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in type_de_variable'.
  $permissions['edit terms in type_de_variable'] = array(
    'name' => 'edit terms in type_de_variable',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in type_dpsir'.
  $permissions['edit terms in type_dpsir'] = array(
    'name' => 'edit terms in type_dpsir',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in unit_de_mesure'.
  $permissions['edit terms in unit_de_mesure'] = array(
    'name' => 'edit terms in unit_de_mesure',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit views basic settings'.
  $permissions['edit views basic settings'] = array(
    'name' => 'edit views basic settings',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'views_ui_basic',
  );

  // Exported permission: 'exclude from message filtering'.
  $permissions['exclude from message filtering'] = array(
    'name' => 'exclude from message filtering',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'grant content access'.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'content_access',
  );

  // Exported permission: 'grant own content access'.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'content_access',
  );

  // Exported permission: 'import acronyme feeds'.
  $permissions['import acronyme feeds'] = array(
    'name' => 'import acronyme feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import field_collections feeds'.
  $permissions['import field_collections feeds'] = array(
    'name' => 'import field_collections feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import glossaire feeds'.
  $permissions['import glossaire feeds'] = array(
    'name' => 'import glossaire feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import th_matique feeds'.
  $permissions['import th_matique feeds'] = array(
    'name' => 'import th_matique feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'recompute computed fields'.
  $permissions['recompute computed fields'] = array(
    'name' => 'recompute computed fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'computed_field_tools',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set page title'.
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_title',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'tamper acronyme'.
  $permissions['tamper acronyme'] = array(
    'name' => 'tamper acronyme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper field_collections'.
  $permissions['tamper field_collections'] = array(
    'name' => 'tamper field_collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper glossaire'.
  $permissions['tamper glossaire'] = array(
    'name' => 'tamper glossaire',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper th_matique'.
  $permissions['tamper th_matique'] = array(
    'name' => 'tamper th_matique',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unlock acronyme feeds'.
  $permissions['unlock acronyme feeds'] = array(
    'name' => 'unlock acronyme feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock field_collections feeds'.
  $permissions['unlock field_collections feeds'] = array(
    'name' => 'unlock field_collections feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock glossaire feeds'.
  $permissions['unlock glossaire feeds'] = array(
    'name' => 'unlock glossaire feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock th_matique feeds'.
  $permissions['unlock th_matique feeds'] = array(
    'name' => 'unlock th_matique feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(),
    'module' => 'ctools',
  );

  // Exported permission: 'use php in custom breadcrumbs'.
  $permissions['use php in custom breadcrumbs'] = array(
    'name' => 'use php in custom breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: 'use search_api_sorts'.
  $permissions['use search_api_sorts'] = array(
    'name' => 'use search_api_sorts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api_sorts',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view diffs of changed files'.
  $permissions['view diffs of changed files'] = array(
    'name' => 'view diffs of changed files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hacked',
  );

  // Exported permission: 'view error messages'.
  $permissions['view error messages'] = array(
    'name' => 'view error messages',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view status messages'.
  $permissions['view status messages'] = array(
    'name' => 'view status messages',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'disable_messages',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view warning messages'.
  $permissions['view warning messages'] = array(
    'name' => 'view warning messages',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'disable_messages',
  );

  return $permissions;
}
