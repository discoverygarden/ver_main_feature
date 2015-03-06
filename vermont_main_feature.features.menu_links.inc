<?php
/**
 * @file
 * vermont_main_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function vermont_main_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu_contact-us:node/4
  $menu_links['menu-footer-menu_contact-us:node/4'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'CONTACT US',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_contact-us:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_copyright:node/1
  $menu_links['menu-footer-menu_copyright:node/1'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'COPYRIGHT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_copyright:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d
  $menu_links['menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    'router_path' => 'uuid',
    'link_title' => 'Creative content license',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_login:user/login
  $menu_links['menu-footer-menu_login:user/login'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'LOGIN',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_logout:user/logout
  $menu_links['menu-footer-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'LOGOUT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba
  $menu_links['menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Make contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523
  $menu_links['menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/dd9db579-7172-436d-a740-721ec9a68523',
    'router_path' => 'uuid',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005
  $menu_links['menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    'router_path' => 'uuid',
    'link_title' => 'Researchers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_terms-of-use:node/15
  $menu_links['menu-footer-menu_terms-of-use:node/15'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'TERMS OF USE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_terms-of-use:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_uvm-libraries:http://library.uvm.edu/
  $menu_links['menu-footer-menu_uvm-libraries:http://library.uvm.edu/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://library.uvm.edu/',
    'router_path' => '',
    'link_title' => 'UVM LIBRARIES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_uvm-libraries:http://library.uvm.edu/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5
  $menu_links['menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About this site',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_about:node/5
  $menu_links['menu-header-menu_about:node/5'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_about:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_bookmarks:islandora-bookmark
  $menu_links['menu-header-menu_bookmarks:islandora-bookmark'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora-bookmark',
    'router_path' => 'islandora-bookmark',
    'link_title' => 'Bookmarks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_bookmarks:islandora-bookmark',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_home:<front>
  $menu_links['menu-header-menu_home:<front>'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_login:user/login
  $menu_links['menu-header-menu_login:user/login'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_logout:user/logout
  $menu_links['menu-header-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba
  $menu_links['menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Make contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_search:node/6
  $menu_links['menu-header-menu_search:node/6'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_search:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('About this site');
  t('Bookmarks');
  t('CONTACT US');
  t('COPYRIGHT');
  t('Creative content license');
  t('Home');
  t('LOGIN');
  t('LOGOUT');
  t('Login');
  t('Logout');
  t('Make contact');
  t('Policies');
  t('Researchers');
  t('Search');
  t('TERMS OF USE');
  t('UVM LIBRARIES');


  return $menu_links;
}
