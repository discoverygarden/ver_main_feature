<?php
/**
 * @file
 * vermont_main_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vermont_main_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-submit_to_collection_anonymous'] = array(
    'cache' => -1,
    'css_class' => 'submit-collection-anon',
    'custom' => 0,
    'machine_name' => 'submit_to_collection_anonymous',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-submit_to_collection_box'] = array(
    'cache' => -1,
    'css_class' => 'submit-collection',
    'custom' => 0,
    'machine_name' => 'submit_to_collection_box',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['google_analytics_reports-dashboard'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dashboard',
    'module' => 'google_analytics_reports',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['google_analytics_reports-path_mini'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'path_mini',
    'module' => 'google_analytics_reports',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['islandora_basic_collection-collection_listing'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_listing',
    'module' => 'islandora_basic_collection',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_basic_collection-collection_object_count'] = array(
    'cache' => 2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_object_count',
    'module' => 'islandora_basic_collection',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -20,
      ),
    ),
    'title' => 'Bookmark',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark_list_info'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark_list_info',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_compound_object-compound_jail_display'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'compound_jail_display',
    'module' => 'islandora_compound_object',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['islandora_compound_object-compound_navigation'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'compound_navigation',
    'module' => 'islandora_compound_object',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['islandora_solr-advanced'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advanced',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'islandora/search',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['islandora_solr-basic_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'basic_facets',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -19,
      ),
    ),
    'title' => 'Facets',
    'visibility' => 0,
  );

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-display_switch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_switch',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -30,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-simple'] = array(
    'cache' => -1,
    'css_class' => 'front-page-right',
    'custom' => 0,
    'delta' => 'simple',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -28,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['islandora_solr_facet_pages-islandora-solr-facet-pages'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora-solr-facet-pages',
    'module' => 'islandora_solr_facet_pages',
    'node_types' => array(),
    'pages' => 'topic
type
title',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-header-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-header-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-136a44c4a687023e66e4898268c95668'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '136a44c4a687023e66e4898268c95668',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-8e2cf57c451b5173d57c5d0071207c51'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '8e2cf57c451b5173d57c5d0071207c51',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-c9aff44ea5cef77286d2b1558b49bfd0'] = array(
    'cache' => -1,
    'css_class' => 'front-page-slideshow homepage-images',
    'custom' => 0,
    'delta' => 'c9aff44ea5cef77286d2b1558b49bfd0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -29,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-clone_of_image_blocks-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'clone_of_image_blocks-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-clone_of_image_blocks-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'clone_of_image_blocks-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-clone_of_image_blocks-block_2'] = array(
    'cache' => -1,
    'css_class' => 'front-page-left',
    'custom' => 0,
    'delta' => 'clone_of_image_blocks-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -27,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-clone_of_image_blocks-block_3'] = array(
    'cache' => -1,
    'css_class' => 'front-page-left',
    'custom' => 0,
    'delta' => 'clone_of_image_blocks-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -26,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-front_page_browse-block'] = array(
    'cache' => -1,
    'css_class' => 'front-page-right browse-collections-block',
    'custom' => 0,
    'delta' => 'front_page_browse-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ver_theme',
        'weight' => -25,
      ),
    ),
    'title' => 'Browse Our Collections',
    'visibility' => 1,
  );

  $export['views-front_view_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front_view_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_facet_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_facet_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ver_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ver_theme',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
