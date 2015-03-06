<?php
/**
 * @file
 * vermont_main_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function vermont_main_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Creative Content License\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eeef4363-12b5-4589-90fb-d4807789f042\',
      \'nid\' => \'1\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1424291726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'09648dae-14d6-46fe-82cd-cf4c0739201d\',
      \'revision_timestamp\' => \'1424291726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lipsum\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lipsum</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'1\',
        \'source\' => \'node/1\',
        \'alias\' => \'cc-license\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'COPYRIGHT\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Researchers\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'103a306d-27b0-4e0b-84ec-67d13c0397e3\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1424291726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'11ab3414-deb5-4985-9797-1a90ac057005\',
      \'revision_timestamp\' => \'1424291726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lipsum\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lipsum</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/2\',
        \'alias\' => \'researchers\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Award Winning Open Source\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1e26a683-a08d-4655-8907-c793c08bf24e\',
      \'nid\' => \'3\',
      \'type\' => \'image_block\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1424291726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'15310bdf-5e1b-408b-8a7b-19ae5569eabd\',
      \'revision_timestamp\' => \'1424291726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_block\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Contact\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1a184baf-0988-4fa7-b1f4-ac0b1a39b4c8\',
      \'nid\' => \'4\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1424291726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'329a2134-140a-4447-a59f-389948bef2ba\',
      \'revision_timestamp\' => \'1424291726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "discoverygarden inc.\\r\\n\\r\\nSims Office Suites Building | 3rd Floor\\r\\n\\r\\n118 Sydney Street, Charlottetown, PE\\r\\n\\r\\nPhone: 902.367.3851\\r\\n\\r\\nEmail: info@discoverygarden.ca\\r\\n\\r\\nWeb: discoverygarden.ca",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>discoverygarden inc.</p>\\n<p>Sims Office Suites Building | 3rd Floor</p>\\n<p>118 Sydney Street, Charlottetown, PE</p>\\n<p>Phone: 902.367.3851</p>\\n<p>Email: <a href=\\"mailto:info@discoverygarden.ca\\">info@discoverygarden.ca</a></p>\\n<p>Web: discoverygarden.ca</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'3\',
        \'source\' => \'node/4\',
        \'alias\' => \'make-contact\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'CONTACT US\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'About\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'97667383-3f6c-4db7-a93c-c5112ae72e99\',
      \'nid\' => \'5\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1424291726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3dfbfeaf-cb77-4ac0-b16f-145af17649b5\',
      \'revision_timestamp\' => \'1424291726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "The discoverygarden platform leverages the flexibility of Islandora, an open source digital asset management system; supporting a variety of file formats including PDF, TIFF, JPEG, and various audio and video file formats through the standard Islandora Solution Packs.  \\r\\n\\r\\nThe platform is fully hosted providing customers with automated software updates. The platform can be purchased based on the amount of cloud storage needed. \\r\\n\\r\\nThe discoverygarden platform will include access to monthly training, a web-based knowledge center that will include frequently asked questions and other tools to aid in platform management, in addition discoverygarden intends to provide instant messaging support through the knowledge center for customers who require assistance. Monthly support packages are available in addition to the other support-style services included with the platform. \\r\\n\\r\\nThe discoverygarden platform can be used to safeguard, preserve, and make accessible any content including special collections, archives, administrative documents, and traditional institutional repository content such as theses or dissertations. \\r\\nThe discoverygarden platform includes the scholar module, a suite of features focused on creating an easy to use and engaging institutional repository.  It addresses the need to encourage greater usage of institutional repositories by including numerous export and citation styles, as well as enhanced options to import publications using identifiers such as DOI and PMID. For administrators, a rights management feature allows clients to restrict and provide access to citations as necessary. The discoverygarden platform also provides statistics and reporting features, giving clients a better understanding of usage.\\r\\n\\r\\nHere is a list of the new features included in the discoverygarden platform: \\r\\n\\r\\n<ul>\\r\\n<li>Three standard theme options</li>\\r\\n<li>Rights management through our embargo module</li>\\r\\n<li>CiteProc and Citation Style Language (CSL) modules</li>\\r\\n<li>RoMEO, Zotero, and Bibutils Integration</li>\\r\\n<li>Citation Batch Importing for DOI, EndNote XML, PubMed ID, and RIS formats </li>\\r\\n<li>Citation Bookmarking and Batch Export</li>\\r\\n<li>Compliant with the Open Archives Initiative</li>\\r\\n<li>Able to integrate with Google Scholar</li>\\r\\n</ul>\\r\\n\\r\\ndiscoverygarden aims to facilitate continuous improvement of the hosted product by encouraging clients to collaborate in the future development decision-making process. Additional services are available to customers based on discoverygarden’s standard professional services rates. They include: \\r\\n<ul>\\r\\n<li>Consulting services </li>\\r\\n<li>Custom website theme</li>\\r\\n<li>Advanced training</li>\\r\\n<li>Data migration </li>\\r\\n<li>Metadata mapping</li>\\r\\n</ul>\\r\\n\\r\\nContact us today to get your own hosted discoverygarden platform. \\r\\n \\r\\n\\r\\n ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The discoverygarden platform leverages the flexibility of Islandora, an open source digital asset management system; supporting a variety of file formats including PDF, TIFF, JPEG, and various audio and video file formats through the standard Islandora Solution Packs.  </p>\\n<p>The platform is fully hosted providing customers with automated software updates. The platform can be purchased based on the amount of cloud storage needed. </p>\\n<p>The discoverygarden platform will include access to monthly training, a web-based knowledge center that will include frequently asked questions and other tools to aid in platform management, in addition discoverygarden intends to provide instant messaging support through the knowledge center for customers who require assistance. Monthly support packages are available in addition to the other support-style services included with the platform. </p>\\n<p>The discoverygarden platform can be used to safeguard, preserve, and make accessible any content including special collections, archives, administrative documents, and traditional institutional repository content such as theses or dissertations.<br />\\nThe discoverygarden platform includes the scholar module, a suite of features focused on creating an easy to use and engaging institutional repository.  It addresses the need to encourage greater usage of institutional repositories by including numerous export and citation styles, as well as enhanced options to import publications using identifiers such as DOI and PMID. For administrators, a rights management feature allows clients to restrict and provide access to citations as necessary. The discoverygarden platform also provides statistics and reporting features, giving clients a better understanding of usage.</p>\\n<p>Here is a list of the new features included in the discoverygarden platform: </p>\\n<ul><li>Three standard theme options</li>\\n<li>Rights management through our embargo module</li>\\n<li>CiteProc and Citation Style Language (CSL) modules</li>\\n<li>RoMEO, Zotero, and Bibutils Integration</li>\\n<li>Citation Batch Importing for DOI, EndNote XML, PubMed ID, and RIS formats </li>\\n<li>Citation Bookmarking and Batch Export</li>\\n<li>Compliant with the Open Archives Initiative</li>\\n<li>Able to integrate with Google Scholar</li>\\n</ul><p>discoverygarden aims to facilitate continuous improvement of the hosted product by encouraging clients to collaborate in the future development decision-making process. Additional services are available to customers based on discoverygarden’s standard professional services rates. They include: </p>\\n<ul><li>Consulting services </li>\\n<li>Custom website theme</li>\\n<li>Advanced training</li>\\n<li>Data migration </li>\\n<li>Metadata mapping</li>\\n</ul><p>Contact us today to get your own hosted discoverygarden platform.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/5\',
        \'alias\' => \'about\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'About\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-header-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'15\',
      \'uid\' => \'1\',
      \'title\' => \'Terms Of Use\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d0be00f8-0369-48ad-a487-2116f42db02a\',
      \'nid\' => \'15\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1425647129\',
      \'changed\' => \'1425647129\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'514b072a-fee4-4049-85cd-5a5eb817bf11\',
      \'revision_timestamp\' => \'1425647129\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis non vestibulum libero. Morbi luctus ullamcorper tellus non vestibulum. Sed hendrerit nulla sit amet orci egestas, in efficitur augue scelerisque. Sed semper rhoncus augue, vitae blandit ligula porta non. Duis ac luctus mauris. Duis venenatis est nec magna laoreet sollicitudin. In eu dapibus massa. Sed in luctus sem. Nullam ornare felis enim, sit amet venenatis quam volutpat ac. Interdum et malesuada fames ac ante ipsum primis in faucibus.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis non vestibulum libero. Morbi luctus ullamcorper tellus non vestibulum. Sed hendrerit nulla sit amet orci egestas, in efficitur augue scelerisque. Sed semper rhoncus augue, vitae blandit ligula porta non. Duis ac luctus mauris. Duis venenatis est nec magna laoreet sollicitudin. In eu dapibus massa. Sed in luctus sem. Nullam ornare felis enim, sit amet venenatis quam volutpat ac. Interdum et malesuada fames ac ante ipsum primis in faucibus.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425647129\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'8\',
        \'source\' => \'node/15\',
        \'alias\' => \'terms-of-use\',
        \'language\' => \'en\',
      ),
      \'menu\' => array(
        \'link_title\' => \'TERMS OF USE\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Search the Repo\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f436b187-2bf5-4484-bb57-b79dee365a0e\',
      \'nid\' => \'6\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1425646778\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6790d072-e293-4a54-aa4e-113c0350d41a\',
      \'revision_timestamp\' => \'1425646778\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'7\',
        \'source\' => \'node/6\',
        \'alias\' => \'islandora/search\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Search\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-header-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Footer Logo\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4e58a48a-6a98-404f-8faa-b86676447c44\',
      \'nid\' => \'7\',
      \'type\' => \'image_block\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1424291726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'847549c5-2502-4938-8fbb-4ea35e2f4815\',
      \'revision_timestamp\' => \'1424291726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'dgi-footer-logo.png\',
            \'uri\' => \'public://dgi-footer-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2191\',
            \'status\' => \'1\',
            \'timestamp\' => \'1424291746\',
            \'uuid\' => \'ad9a4d02-bb15-4b1a-bd50-8bcb3ddd573b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'130\',
            \'height\' => \'34\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAAIIAAAAiCAYAAACTHwETAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAACDFJREFUeNrsWk2PGkcQnbVyyclwziGI/QGLBTlFkbEC58yFlRJFMif2lnCDmzkyl4jktnMxkaJEWi5Eyg0iYUW5gcz+ACP8Bwz+BZsq9Mp62+rhY72ObO+01Nqhu7q6+tWr6prRHl1dXQVpS9u9FIK0pURIW0qEtN2QCA++/OpcelpQ/M/t61+q59Kv3tuMIKQYaU9dlV4NafuI2icJ0Z6XP+fSK9IX0mOPWMXGRV6fW9KLmJtJj57/+88Y81nM16TnMT+Q+QjzDfnTwHrdT9e1ZX4lc1N5zsrzscfOV6pL5qryXCMbVqrfdED2Cvbq3j8hCD6zedL5QtfLeInScwv2me0x9mn8/cPoiOR0vgtsspBti8yYZNgO1RvLfLRlH991YXg2sI9iFomemK8UzJcgWyHfnIrsamtGAAmmMKatG8CBtQTSKCAjgH8q/QzPF0oAkGAKowaYV2O6MteS3gXpFpgbYK8p1urh8iAb72sgRKpH94PeM9hcIR3WanDUX9I/dc+EPfLsAAH0AmtmZJ85wXXOFASJIKtjI5krOrCZHQPo3baPD/cR9rd9lGhaS3QTZFfw5QC4XOyTEVo4QEmiYoGxGPVAJSEzaDuj6BoooRDRXYCr+mYEuoE9RfZo09wA4y0c1tg9pn0bIM8Ch/XpeEGABZCtwq4vMBc7OjUbxHBOBY7QaGuTXCRz1/DQCJOxGLIrrJ/hHDVzONtBcsV990HWUPmSyM5oXHV21QYZX5COEv9G1qrsUyOo0JhIwMb7mjlnigjfbELra9DHQAT4bQbFnjnVWwO5dL5m0Y0sVLRxA83RYVcMR9SMyLpJ72YvMmHNsaXosy8JD3UiCJHHbztz1hGdOam5csA+m4BgEjhra45Ne/nRlxHyTuRtbeo0AbGK6O0C1BUiNNqhL++QxjWYAWpQdDdo3NLhK9n3kPoophQ/dnRes88DZtKr3hsM5HmVdMcn4bDnPiqb3/JKmb+tt4bVocq0KNSCTboWTlUA20W0LbboW1A0+g60oAwxI2fVUGyuYG+A+qSa0H02W0FZw/4NTyZcUDrdRQK799soII+3ZFEf5nvtA9nZlrNGt0UEdWLF45x8QrGYZVmQ4pRS6wD6Kp7CbEzpzi1AK1jLEaxF4zlSbexcTXns/aarI+zNZUtWCFA8ZT0gznz2JeBRQVRHVjNwFb+jjQ/YZ2BvV/o2wh1ji5sQwXc1tHGoEQq6Fb3SBAnFZQOyYwBaowMu8PsCMgt79aK3khbINMY+VghGRLAYhWeDHax/ZTxCBioSqBVEe8mtT5xrbWyvyS5pFFyJ0k31jmi18zU8977KNfDaFm9xbOCpLQ7Zx/wzFdkI/mHMS7eSEZAaq3BEF44eONHJ8m16XbtAhZ9FdW7FWYkKu3MQQd/xrdI/AwHOLe3jLWPlAdtXXLo6rtmwA4OBr9gkJ50C/CLZF7l4ICJPITeC7GxfRxywD+PZgmzLvg/c9IPS0V3/fwTJCBcg8bGHeJt725duZXzzoUvmjj/aL4t3hAANSqmRjwT2QQbv6APnFa74NhGYEuH9afbaGfOHKE87pVfjLFft/On4Q29H6b+qpS3p9TFtd7DtvBq+/e77nPypS+//8ftvS4wV5E/IY++q6f5vu4foKMufMn5ORN+E5jL6V8bWt2WDyHdEvrMFS21DkZl/SBmhKf2J9BwB19exd00CtB4AfJvWMfvVdtHXZ/1EEp9T7bwbQkmf7CCBBYk7rgRQx2cw/xxjBweG9OUNAyKUPrxpsahGv3SA08NcEst1TCNKNykLQZoy3gT42jvGfjUG5BpCzyYyIB8C9AKyzQY4JRzWFaBPo7pPwHcAstqwtjlqKtPEPmqr6isjM6j+IRxuhOnB5jJ+z7FPn84wISx0vC7yIUg18WSCp/qyQjjUYa892+8O7CwApyUyVgc2bnDTNXpOzT7Yc4kzrn1YQV/PMHOz0b1dDKKDmsEhjLHDTuCECREiwMEyGFegC0jRfQLwiUMOi84fzVkOIQ3kHqIzZ/op8n3pOLCD4wrQ5zKALdNac3YH9tm+awC9ho28Zx+2Z4h0bspXLP5k8NU5IGDTOXuf9JiDQ8gF+K0yE5DgCewJzdFYdw0rCxLILA+9Guqk3BgVUpSUEYEdROGcQDiRMWWtrvkcIIRg/BC6XmO8TuN6uJdwGEeXRXWf9giRUfq4k9duNEKH6xgjEDutjqgeAug5rZ/AnhwylT4/hD0WFJMtRAgSxgIHE93rhPY1XCdEYsuiSxDoGQVkjtZewwrybP9+REAkfUMMVaB7SKcMbg7RnjEQQJBnlLovCaQCAWA6ODLDBFBPKKIeWlpXGd0b9mY8dUuByYH6YE3nsLn7jg1ztgH61w6IfJYJMMh5ikC1qW6FKe75nEMG03fpOTs/P6Ri9z5lqB6I4cUKflgmFcX3dmSDXwGs9jnuKU61S2LjkphXcCOK0uhj0TGnA9j6xyiCOs5aH7E4Ck4oE/kKuQJS6wT6cwQ826Y6n8K2b+BYdr450cC+xJU3Jxu82QCRucZZhpAJKVM8xrievekhFDv/NeocbT9jTYgg3RaEgdUWhxJhSHfukAy3lM1OD+mvyffcZwDyACQrULbRAz+i+9gOHWKPOb12LYn5Aa0bJhChA/kOCtkyZY0mnJOBjY8wZlfW2s6E30ycMtUtj0CWJdnpkqFgV608Z3Bl6ngTmPRgH+t/80XcIXaf1lrhXSYsuZ6oO/bP38svi+QEfs+v77m2Q9V2ACDXN7ChQMVihu7XO9PST8xpSz8xpy0lQtpSIqTN1/4TYAD5qt40jl0tsAAAAABJRU5ErkJggg==\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Welcome to our Digital Archive\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eaea4d5c-8206-482e-a95d-24975b39a4b6\',
      \'nid\' => \'8\',
      \'type\' => \'image_block\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1424291726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9c8f491e-d901-4fc8-9b5d-75490185bdd6\',
      \'revision_timestamp\' => \'1424291726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'This is a short description of the website and or a paragraph describing the content a user can expect to see here.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>This is a short description of the website and or a paragraph describing the content a user can expect to see here.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image_block\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'16\',
      \'uid\' => \'1\',
      \'title\' => \'Browse By\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c0f0ade6-0004-4f4f-bee4-9928e2a2b84c\',
      \'nid\' => \'16\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1425647251\',
      \'changed\' => \'1425647251\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'bd587498-89ab-4e00-8475-981246b08d78\',
      \'revision_timestamp\' => \'1425647251\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425647251\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'9\',
        \'source\' => \'node/16\',
        \'alias\' => \'browse-by\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Topic\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'de7d5556-9d39-49ae-a330-7c4864f09307\',
      \'nid\' => \'13\',
      \'type\' => \'image_link\',
      \'language\' => \'en\',
      \'created\' => \'1425411006\',
      \'changed\' => \'1425648627\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c29c651e-807d-4fc5-a6e0-38465cb84e81\',
      \'revision_timestamp\' => \'1425648627\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'browse/topic\',
            \'format\' => NULL,
            \'safe_value\' => \'browse/topic\',
          ),
        ),
      ),
      \'field_link_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'category_settings-128.png\',
            \'uri\' => \'public://category_settings-128.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2163\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425411006\',
            \'uuid\' => \'901170a4-ed66-4218-85a7-997f68d8785a\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAAIAAAACACAYAAADDPmHLAAAABmJLR0QA/wD/AP+gvaeTAAAIKElEQVR4nO2dWawURRSGP5FFICKoCO5CVBQVUDBqNMYtog8G4wtuUeOSuDwYlweMJpKoaIJrYjQ+aKLRaIhx34IaSQTRuMYFAkZcADcE5V7AAHdmfDgzYbje6aqu7urqnjpfcnIfpvvU6a7/VndVn6oCRVEURVEURVEURVFiYReLYxreo0jGJkbFkUGhA1DCogKIHBVA5KgAIkcFEDkqgMhRAUSOCiByVACRowKIHBVA5KgAIkcFEDkqgMhRAUSOCiByVACRowKIHBVA5KgAIkcFEDkqgMhRAUSOCiByVACRowKIHBVA5KgAIkcFEDkqgMhRAUROEXPvTesL6Pz/gGgLEDkqgMhRAUSOCiByVACRowKIHBVA5AwOHUAO6DqGGdAWIHJUAJGjAogcFUDkqAAiRwUQOSqAyCnDOEDofnye7ApMAmY0/04EJgBjgRHAsOZxNaAH2Ab8CKwAVgJfA58AfYVG7ZlGl9vewFXA20BvDv42Aq8A1wPjHO536QhdQb6tz6Pv7cCbwMXsaD0qR+gK6hZbB8wFRqe6+yUg9I3rNvsDuAF536gEoW9Yt9oK4KwU9RCM0Deqm60GzAeGWNdGP8qQFv53Rv9jMp7fDXwMXAj8nPbEMgggawwm/6GoA6uB75GK2dA0gD2bdjBwGHAQ2e/DBuB84MOMfnLH1Iz59l+kfQXMA84GRqa4hpHATOBeZDDItfwtwKwU5RZCtwtgI/AgMCWHa2kxDXi46TttPH3A5TnGkpluFcA6YA6wRw7X0InRwO3A+pSx9SGPg1LQbQLoAx7Bb8X3Z3SzzDSjjtuAcwqMsSPdJIDfgDNyiNmVmcCfA8TVyf5GPkgFpVsEsAgYn0O8WdkfWIx93J8R+DtCNwhgATA0h1jzYjfgZezjfyxMmELVBfAk2cbd6wb/rv3/XYGnDb5bVgdOdb6CjFRZAE+RfYDGlwBAMrpeMPhv2UoCPQqqKoBF5NPs+xQAyOPgI0MZLbspY1lOVFEAa5E0LhtuA05K+N1VAHsBjyKpZCbGIT0U03WtB3a38JcrVRNAHfv+8/3NczbTuXvoIoB9geXN35dgV2mzDOW07BYLX7lSNQE8a1luq/Jbthk4c4Dj0gpgPDsqv2W2InjR4vp+RR4bhVElAfyDXV9/bofze4BT2o47ErMA2r8h7Al80eG49zE/Dg7ELjH1EotrzI0qCeAOi/LuNPjoBW5FXiJty/0EmA18bjjORgR3WZS30OI6c8O3AGwYg2TYJsXRg/wHJjHH4KMIe5/k+Rz7II+jJB/babZ0scwMOgfzJJin2JGw0Yl3kDfpUNSRfn/SxJE/gWcMfgYDF+QVlIkytADPW8RxlKWvacin4KL/82vANZYxHm/h72VLX5kJLYDBmL+nf5PS51SKFUENuDpljCsNPv+ioCdAaAFMtojhXge/RYnApfJBspRMvqc5+E1NaAHMtojB9Rv/DRa+s9rDjrGda+H7ihheAicbfq8hadUu2KRdbUVy96chAzC7AccBDyBZOyZccw2XYP4HO9zRdypCtwAvGcpf6ej3UMyDPGtIbmanIyNzST7qyHTzMR0siZ8Mvgt5EfQtgKxN7Bue/P+L3X/vsUgr4VpOEgsN534RwyPAxC+e/D6G5Pib+BJ4wlMMpmvbQwUgI4A+eC7Fsc97iuEfw++jVACwyZPf5SmO/c5TDL2G33dXAfh7EU2TRxhsrr8KAEZ58ms7tAxwtKcYTNfWowLwlyJ1aYpjfX2fN81eMj0ickG7gckE7QZaxJeZrBXk235wvK6pFr7zGghyHbFbbfD9oqPfVISuYJP1YZd5OxCfWvjfCjzOzqN5xyN9/20W57tm74zCPFI5z9F3KkJXsI3NdLy2iwqI7TrH2M6z8H2Zo+9UhK5cG3P5HLwfslKX79g2kjzvoBOV+RxcBkubEFJU5bdsE3BayhgrkxBSFptheT1FV367CE63jPFkC38LQAeC2rHpt+8HfEBB39H7MRLpstokr9hcyyIoZpk4U6ZtVvJaJ7AXOITkeB9FsoBCshw4BklkGYh9kCXok3o2fcgkkt/zDS0MeTazdxvKGg68a/BRR9bz+cCyzDrwFpL3t8Fw7FpkXcEk5luUaRr8qhR5CsBmathw4L0O59eBG9uOPcqizEltx0+nswjWYn70lHJqmG/yftmymRw6FHit33k1ZOOIdgZZlNefKfw/23gVspqoiVJODvVN3gKwnR7eLoIacOUAx7gIAHYWwSpkSVkTpZ0e7pu8BdBAmmGbmz4UeJWBKx/cBQDyreFTyzgmIkvCRfffD34E0MB+iZikrnQWAZh8t0izRMyNHXxUGl8CaCBNfJad1bIKwMQwzL2Sli2lS8d9fAqgQbZl4nwKIM0ycTXghAxllRrfAmhQ/YUi54cJsxiKEECD6i4V+zEZtpSpAkUJoIEsxTbQQlBF4bJY9CEhAi2SIgXQsteRLWGLYmKzzDQxbqKLn/vthBBAAxlyvQdZ0NEXewP3IZWZJrZSbRjhm1ACaFkP8BB+toxx2Yu4dFvG+Ca0ANqtcptGFZEP4JtG6AA60H/buC1NA/lWP4JIto2rIpPovGJnGW0pdt8MlBQMQ57tNcJXcCfLvHWsYmYqspRr6Mrub4ubsSkFMAS4Gdm6PXTFV277+G5iBJJQsZbiK34N8jnXdRqbkiNDkPUH04zJu9h24E3gYgJv/aZ05gDgWmSo1iYrx6aJX4DMCRznO/huGAcoE4OAI4ATkQzeCU0bi2z/Orp5XG/TepApXMuAb5GBpGWIEArhP0Kzb8Lb2rFqAAAAAElFTkSuQmCC\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425411006\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Islandora Advanced Search\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e6b92772-5ec2-418b-9e9a-577156def660\',
      \'nid\' => \'9\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1424291726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f\',
      \'revision_timestamp\' => \'1424291726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'5\',
        \'source\' => \'node/9\',
        \'alias\' => \'advanced-search\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Type\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4e27c1e1-a1b0-4c6d-a4b3-fdbcdc077ba6\',
      \'nid\' => \'12\',
      \'type\' => \'image_link\',
      \'language\' => \'en\',
      \'created\' => \'1425410968\',
      \'changed\' => \'1425648610\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d668bfc0-74be-4f23-8b4c-a77912837495\',
      \'revision_timestamp\' => \'1425648610\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'browse/type\',
            \'format\' => NULL,
            \'safe_value\' => \'browse/type\',
          ),
        ),
      ),
      \'field_link_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'category_edit-128.png\',
            \'uri\' => \'public://category_edit-128.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1919\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425410968\',
            \'uuid\' => \'9017591e-1e21-4d41-a155-ef6250c000c6\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425410968\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'Policies\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f1c3f843-cb61-41c8-9eb1-74da357c68cf\',
      \'nid\' => \'10\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1424291726\',
      \'changed\' => \'1424291726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dd9db579-7172-436d-a740-721ec9a68523\',
      \'revision_timestamp\' => \'1424291726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lipsum\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lipsum</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1424291726\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'6\',
        \'source\' => \'node/10\',
        \'alias\' => \'policies\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'News\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9b9764aa-ddde-4d7a-8495-feacbd645ac5\',
      \'nid\' => \'11\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1425409609\',
      \'changed\' => \'1425409609\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f5f9efad-20ee-4614-8420-cd1d5d1d0ea4\',
      \'revision_timestamp\' => \'1425409609\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed tristique pulvinar est. Phasellus tristique ornare magna, id pharetra sapien ornare non. Morbi iaculis ultricies rhoncus. Vivamus id ligula mi. Curabitur a mi dignissim, sollicitudin nisl at, egestas dolor. Nullam elit sapien, ultricies eu venenatis quis, porttitor vitae lectus. Nullam dictum non felis interdum rhoncus. Vivamus pretium mollis eros, semper rhoncus quam ultrices id. Nunc condimentum viverra lacinia. In vitae consectetur lectus. \',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed tristique pulvinar est. Phasellus tristique ornare magna, id pharetra sapien ornare non. Morbi iaculis ultricies rhoncus. Vivamus id ligula mi. Curabitur a mi dignissim, sollicitudin nisl at, egestas dolor. Nullam elit sapien, ultricies eu venenatis quis, porttitor vitae lectus. Nullam dictum non felis interdum rhoncus. Vivamus pretium mollis eros, semper rhoncus quam ultrices id. Nunc condimentum viverra lacinia. In vitae consectetur lectus.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425409609\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'Collection\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6138052a-9ab9-4670-bc2d-d7e0a404352d\',
      \'nid\' => \'14\',
      \'type\' => \'image_link\',
      \'language\' => \'en\',
      \'created\' => \'1425411055\',
      \'changed\' => \'1425647797\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f9a72897-9897-4926-9f2f-0a8a66a05f59\',
      \'revision_timestamp\' => \'1425647797\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'islandora\',
          ),
        ),
      ),
      \'field_link_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'category_add-128.png\',
            \'uri\' => \'public://category_add-128.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1717\',
            \'status\' => \'1\',
            \'timestamp\' => \'1425411055\',
            \'uuid\' => \'cc9417ad-fec3-4a3f-8d61-ee90b74a84c8\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'128\',
            \'height\' => \'128\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1425411055\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
