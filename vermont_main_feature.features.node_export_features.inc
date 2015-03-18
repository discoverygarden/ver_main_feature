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
      \'changed\' => \'1426703685\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'09648dae-14d6-46fe-82cd-cf4c0739201d\',
      \'revision_timestamp\' => \'1426703685\',
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
      \'menu\' => NULL,
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
      \'changed\' => \'1426703593\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'329a2134-140a-4447-a59f-389948bef2ba\',
      \'revision_timestamp\' => \'1426703593\',
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
      \'menu\' => NULL,
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
      \'menu\' => NULL,
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
      \'changed\' => \'1426703179\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'514b072a-fee4-4049-85cd-5a5eb817bf11\',
      \'revision_timestamp\' => \'1426703179\',
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
      \'menu\' => NULL,
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
      \'changed\' => \'1426703159\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6790d072-e293-4a54-aa4e-113c0350d41a\',
      \'revision_timestamp\' => \'1426703159\',
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
      \'menu\' => NULL,
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
      \'changed\' => \'1426527258\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c29c651e-807d-4fc5-a6e0-38465cb84e81\',
      \'revision_timestamp\' => \'1426527258\',
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
            \'filename\' => \'uvmtopics.jpg\',
            \'uri\' => \'public://uvmtopics.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'48198\',
            \'status\' => \'1\',
            \'timestamp\' => \'1426527258\',
            \'uuid\' => \'41e456a0-2447-4e63-a6d4-219307b94819\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'135\',
            \'height\' => \'135\',
            \'node_export_file_data\' => \'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////////////A+gAAAAA/////////////////////////////wPoAAAAAP////////////////////////////8D6AAAAAD/////////////////////////////A+gAADhCSU0ECAAAAAAAEAAAAAEAAAJAAAACQAAAAAA4QklNBB4AAAAAAAQAAAAAOEJJTQQaAAAAAANPAAAABgAAAAAAAAAAAAAAhwAAAIcAAAANAGgAdwBjAGMAcgAwADMAYgAwADIAMAAwADIAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAAAAAAAAAAAAIcAAACHAAAAAAAAAAAAAAAAAAAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAEAAAAAEAAAAAAABudWxsAAAAAgAAAAZib3VuZHNPYmpjAAAAAQAAAAAAAFJjdDEAAAAEAAAAAFRvcCBsb25nAAAAAAAAAABMZWZ0bG9uZwAAAAAAAAAAQnRvbWxvbmcAAACHAAAAAFJnaHRsb25nAAAAhwAAAAZzbGljZXNWbExzAAAAAU9iamMAAAABAAAAAAAFc2xpY2UAAAASAAAAB3NsaWNlSURsb25nAAAAAAAAAAdncm91cElEbG9uZwAAAAAAAAAGb3JpZ2luZW51bQAAAAxFU2xpY2VPcmlnaW4AAAANYXV0b0dlbmVyYXRlZAAAAABUeXBlZW51bQAAAApFU2xpY2VUeXBlAAAAAEltZyAAAAAGYm91bmRzT2JqYwAAAAEAAAAAAABSY3QxAAAABAAAAABUb3AgbG9uZwAAAAAAAAAATGVmdGxvbmcAAAAAAAAAAEJ0b21sb25nAAAAhwAAAABSZ2h0bG9uZwAAAIcAAAADdXJsVEVYVAAAAAEAAAAAAABudWxsVEVYVAAAAAEAAAAAAABNc2dlVEVYVAAAAAEAAAAAAAZhbHRUYWdURVhUAAAAAQAAAAAADmNlbGxUZXh0SXNIVE1MYm9vbAEAAAAIY2VsbFRleHRURVhUAAAAAQAAAAAACWhvcnpBbGlnbmVudW0AAAAPRVNsaWNlSG9yekFsaWduAAAAB2RlZmF1bHQAAAAJdmVydEFsaWduZW51bQAAAA9FU2xpY2VWZXJ0QWxpZ24AAAAHZGVmYXVsdAAAAAtiZ0NvbG9yVHlwZWVudW0AAAARRVNsaWNlQkdDb2xvclR5cGUAAAAATm9uZQAAAAl0b3BPdXRzZXRsb25nAAAAAAAAAApsZWZ0T3V0c2V0bG9uZwAAAAAAAAAMYm90dG9tT3V0c2V0bG9uZwAAAAAAAAALcmlnaHRPdXRzZXRsb25nAAAAAAA4QklNBCgAAAAAAAwAAAACP/AAAAAAAAA4QklNBBQAAAAAAAQAAAABOEJJTQQMAAAAABypAAAAAQAAAIcAAACHAAABmAAA1ygAAByNABgAAf/Y/+AAEEpGSUYAAQIAAEgASAAA/+0ADEFkb2JlX0NNAAH/7gAOQWRvYmUAZIAAAAAB/9sAhAAMCAgICQgMCQkMEQsKCxEVDwwMDxUYExMVExMYEQwMDAwMDBEMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMAQ0LCw0ODRAODhAUDg4OFBQODg4OFBEMDAwMDBERDAwMDAwMEQwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAz/wAARCACHAIcDASIAAhEBAxEB/90ABAAJ/8QBPwAAAQUBAQEBAQEAAAAAAAAAAwABAgQFBgcICQoLAQABBQEBAQEBAQAAAAAAAAABAAIDBAUGBwgJCgsQAAEEAQMCBAIFBwYIBQMMMwEAAhEDBCESMQVBUWETInGBMgYUkaGxQiMkFVLBYjM0coLRQwclklPw4fFjczUWorKDJkSTVGRFwqN0NhfSVeJl8rOEw9N14/NGJ5SkhbSVxNTk9KW1xdXl9VZmdoaWprbG1ub2N0dXZ3eHl6e3x9fn9xEAAgIBAgQEAwQFBgcHBgU1AQACEQMhMRIEQVFhcSITBTKBkRShsUIjwVLR8DMkYuFygpJDUxVjczTxJQYWorKDByY1wtJEk1SjF2RFVTZ0ZeLys4TD03Xj80aUpIW0lcTU5PSltcXV5fVWZnaGlqa2xtbm9ic3R1dnd4eXp7fH/9oADAMBAAIRAxEAPwCRLbqmVNh+NYAAWO9rmAe6PU22b2fR2/mKrTg0O2tLXBocWy6yGu2+4+pbH0ddyZnUfWloYBtIPoOB1MSHF385u/eXS19PxramutqG57f0glwB3D3S1rtqqQgTfRkJpwLGWWYwtxKW2enZ77S0Fxbq1vuO/wDm/wA+xULWPtyAbPc0CTs4EiX7dXbfc5daOhdKshhx9giDtc5sgCPd7vdwoD6u9Fa/ccZ09j6j9I/tJwwkdUGTzbrbq6W5DHjbW704sg6Aeq0vd+d9P91SZ1THupcQ/wBW8uLA1kgbHDbH0W/R+kuoyul4BxLduODZt3AkuPuA59zllY3RaKYuqcHh4AaXQdv577N5b7drvaxzEpREd9yoG2vtzr6m+lW/1GsO15kAPG1u0Nb9O7T2bv8ABqZ+1WtLWubRtaDZe9snT2vbY217/wA1vsVgsvxx+mrsc2drH1lrmnSX72s/N2+3+uo0ZGP6hdRcHVvkHFcHOsc4S8V17935/wDLUdpadTcvHe2K2GvaCH17XEwfaNrS5jd70DKYLN79x2Bzy2BO0N1DHBmza52785a+RaRS5tWO6RDngE+wxvrLNu253uVemii2o49lllDQ9z7LLA1rZjafV2N9u3+b/nU4Eb0hqsdjsbSK6xkudWA+l8QNXfpG/u+z8xO9xqsZ67GvbZJOwTDpBDd24Oa5rvb/AOTTW3Mtbd6T2V1s2N3NIcS2drXb/wAzds/wvvVC3MfVnmxjxWQ0NBazcx5/f9P992/6aeAp0bqTjtdaXBuQ9/8AMV/o2QN7vzdu9/0dv/f1F76cq1jHyC0yC4QzaQfY1rXfmO/m971QedzDZZOv6St0kO1/nD+Z+d+amdTkOyaiZNj2h7RDmiNv0vU9rdrEiNFPR9NtpxLq78YkY73zY10EFvDmf9JdM1uG/JvyKXkMc18vrJ1BY3c0N/re5cQ2osDPtNRqBc8Et0kBtYkB38n6C7DouXSaPs9Uk1Nrk8av3VWbf6qfisaWsmBoezp5T6QyouxH3t2sAe1slgM+4/nN2fnPSQLH9RozasX12WMya3Boe0DaGbd2zb73P2P/ADklJfqpb0f/0OZwIsy99jnlryZcQSRHtnT6L16VhAfZqNd36Nuv9kLhWZNmbQ+3H213lod6bGBrSB7HehruXd4JH2DGLdAaWEeY2qDEbJXybLGiQYhBtf7jp46IjHECDMgEjuq7nw/uT2lSrWd5jBucTxWZjmY9vK5ayi7O9S1+6lriGs37mtAAbvf7fzf9di6fPquv6bkVU6WPrIa4dj/VC5ql+QzBNdosDw7cBtcCXEx/hg2vc5RZQb0TFlX0g0WOyqrnsO0sfVDrXfQ/nH/yff8Anqp059+M1t7215Fj7f1clsSXDbA2+5rv/PahkWuvd6m7c6BXbWwSAJ/Rj12bN9j3fzj1o9FqqeWWbK2XVvc1ofq57HDf+m/4av8A62opaDVcwdlWOqveGC7GNnuad7AyNw9jmu9zK52P3LLxMi03ZVVLxRWNbR9IGtvLGbw5v535/wBNXs3r9tTPTx21Ytge8WVmYBa72+mwGz+d/wAxYtYyXvvsssLbngE0EFrnl3t3xH7rk+O2yty7Dm0jc8gD1Btpa39G0msljbrW+5u/b6n80gU2OqymszW2Cq4+lTYZAaJ921rPd+f7XIge3LbutcG+oRs2na/cR6b9Pz2e3e9UrLmjPYaHl1NILGPcCABxY12/6XuSCG5Vhsy3iqmsgAwXH3tE/wAn27X7laNjnGttdYPpuDWSYbsbs3u9ztzt233/APmaEzUgVvLa37hJEB5HtYzZH8673ImdispsYwXutsfW0hodBLY/drH0XM/eTQbKnRyun1HHbZZcLGtDnN9Foc5pIc13PqO+g3+bWfW84wFJb6b3gBzxE+z6L3lntYruFlvoDftT9zLAxzGNI3anZb7G/uf6RZv1n+ysvoGOHWO2k2AO3NAEbHOA2pwJBpT0Fue5nWaWmXbMksE/SAud9Jrj+Zr+aksDPzzi5TDE1XejYD7+HtZZq5JHjKOEbv8A/9EWbldN2nJrtrtzNwrxzQNu0NLdm6fZ7v6i6rB3WYmO5w2vdW0uaOAY4Xlt9VvT8p1RDmljocDpO32u9zT9H+U1eo9Isbd0zEtY3aHUtIbMxI+jKhxRoaar5FO4wFXOp3d9JViwwyQOOVXBHOmqkWp22FuO9zSWuaORyNQFVe0ZdNmPc4ltoImZI8HCfzmu9yNoce3zHHflqBWIIPgkh5B+Dl05b+nudruBseSC2Ik79n737yp4mHlZHUNtlTn1h0ESWkbvoObL2Od+/wC1dX9YKhXdTkH1HV5H6Ilpja4e7TVrf09ft/sKg2xjHmrHua/Keza4NG5o2n2bnFwY3Y3+vcq8+IEjuvCz8bAY1lD7QbK94aXQxxI99Ncs3N/Od6m5XbMdxxhfj1tfaza8M0BOoGy3Rnr87VnuxMTIx8iw2B99H0NsBsyG/wBtWGYdtR/SXF1Rpt9Rk7XtIAu0+lt3+z85ARJ1JKWeR09+SWmtvplpMenAAO4n9HW8727v5Cx/rBjnGfjWWAPYXPlzRDQJZt+j7P6q2aKrNhyX2k4r9vo1F257nO7MDQ5r/b+Y9ZHX8C91n2ikuItM3EAlrSf5IG2v6KMYmJom0Xbl5Ga1mwNBNLtYnnjd3PuWhkZ1VFzbG7bN9NMmxu4sGxv824/Rf+8sg1FpJtIY6vVrSCNx/ebojVVPtczINRspaWtt26iP5TZ3KSgh2nvYcyqjCFhsbt9Wq0wHNLWw1r2fRVzLxsW3PqyMptwx4h9fqMDGunc9jYO51ayLn4xtNhs9hcSz03AENH8n+t+YiX3trBbcHAmHA7tQSI3Qd9W1Nl0IS6OdiYN+fQXtfVRVsYdxa5jqx/M7bnbdu6tn5v8ANpKkcuq3GDWMfa2poYGe1zGyHC24u3+xzGfm/uJJmqX/0sfqfT32sdnh7rGuh4rsEvBd7nM/su/6C7boLh+xsGNB6LYH8Fy1OF1evpLam2tryWsLvRLBu09xr3H6Vi6HpT7j0bEsIDD6Y3sHAIJGihx9Rey+TpXvbs2+ZlCY4BrpEnssjK6sa3iqtrnWuJn93kNG0x/LVzDtNlQk6zqDz8FItdAk/Z3+JA/KECvXkIPUupN6fgfanj2h9bXj+S57WWf5rUdm0HQ7mkS0jgg8FJC+Tgt6j06/BfobW/o3eDx7q3f5y536m4+NXl3YGbW2yywEtD267mzvY2T7mrqaXbXAlc39Y6H9N+sON1ioxTaQ9wcYaHj23j+3V+kTJ90h6n7Hi1NDKqK2sBnY1oAkd9sKdlVentaZkHTxUnWscwWsMtcA5p7EHumDgZKchHk47bmMaAAO5gTI19n8pc/kUG3JfjYzW5HtaXs3wNpMVu3fR92zdsXTV1tve2qdjtwLT4OH0eEDKwRiX2WXAsdbta2wfQJExE7m+9z/AHqLLH9JdEvI9T6Sxm1ttQda9pDASXOcfzvohrPb+4qHTcjK6fY/Ct/WMO2CTsJbqB7fbt9N7f3966bqFWM/IbnZnqWCsBorYTtdB9mxjf39v7zK1LFyqHVVsbdXWaiYaWTLXTtrf+a93u96YZenumnlh0+mx2S+yxtLBNtdbpdYACW1s9SN1v7qpZeW9l7y28NeDtBd7iQf5O302/5y7b7RtssrG/1XDdDWBosaB79zmD2ua76C5/L+ql9lzvTuAa47/TyCGWAO93te3c1ydEgjUqouNjHLvFubua0Utc7eRXW0+e32+s//AIP00lad0vIwLG4N1ZFmYfRrfoT7jsad07Gt/lbkkKN7elL/AP/ThVkZZfWLmPtoLjtFb4uG3T1jWG/Qb+Yt2211OLtsaaXiS6s6kElZ/T72b23WbbW6xY1wa7d9EV/R2q31C3EF7as4n0y07vROv0fZ79PzlTwTuZHgyyGjz9b3ZlrmY5a++u0OEu2FpcIPvlv09jVoVdSpHUb8dthcK37HWlu0OsH84WaN9u5c79WamWddbiZD3VWXO2MdMDeD9F+7/orpeu7aOuZdbA2sSza0NAioNDf+k8KxfqrwtaflHmn+shfX0B9zWtt99Y2Obua4bvd7fkp9Azq8vE2Ne11tENcG9muG6sFun9RP9b7qh9Uy/FYWVusqNe7UhpJ5/wA1cb9UuqNwursa87askek8nxJ3VuP/AFxLciQQQRYPR6frP1jb07ObiSPVIBcOdoPitDIrPWui20tAdcBvp/rge0f2/oLG6rRjW5OTTaGn7Q8W8ND3OJ90v/nd2/8AcVnp2ZldJqa+3bbjTAew8DzY73bdqJ1sKrq6X1dy23dHrqb7XY49IjuNv0f+iqmZ19vTspuPcYdYdAfA6bv85U+qZFuDn13dOG2rqH6bcZc02T7qm67We47/APrit9d+rFGXbVm22utyb6q2/owQ0PjjbBQGg1VVu50617y18GQZErqIZbXDgHNeNQdRBXOuo/YeA2zLvbbV7Wsc722Au/M09tyzm/W3Mwm1ZcDJwbnOrsqd7bKrKy5jxS+Xeo2z2P2J11uinW6v9VcTKrc7F/RWzuALiGk/H3bP81eb5PTOs9F6rXdkVjHFROwucHh0f6H95epdO6707rFAswrJcRLqnaWN+LP/ACK5/r+ZnDEtyL8WvK6Y15rsothzgAS11p/0P0f0aaRH7VC3Fq67jOdJAZZUPVBY7dLhANbnM3+789NX1PKsst9VptqaDIOpLpEMbP521ZNPTvq/mW2O6a+6m7a19OLY4N3GffVVkOOx+5v+k96ll9TczIOM/p72mokuZG10E7vpt9zfo/1FGcdbLrdyysbA0lzml4IqIkhwgwHfSaxySy2Wh/T3WgBjIHscQA5jPc5tbh7XpJtnbxV4v//Uo4eXkYlT2tpB2gzW4lwLRD3e/dtd/wBNF6jmOzLao0daxoLRw32y8xqtKvpuHlkMsrO8R6bpIAiPT59vdYeEbcrrjmuAJG/1C36IAdEz/ZVTDEEmQGvVlJRZuPi1elkONdbr2ABziQ5ltB9Nzm+n+k9y16Krs/o/WOr5Nr8nJroDZd9L1HnbSW1N/mmM/cWfaOm5GfXkZBsfXjnY6pu1sN3OscGvj2+o9+71f3F1XT/q7ViYmVdRlE1ZtWxtJgDbIsbFk/pbWbfp7VZpjJo+bTwm/wDOD6sjp9loryWWhr3OGjQ3c5juW/mLkOsfVi/oxZY69mQx0++rQg+DN/uf+99Fb/SfVo64cBjtoydXPs+jAadntb9L3bl1Q6c6mja6moivcBNe+Z/Pa15e+v8ARtVSeSWOf9XoGU1Kj1rV5CvKrzKqc1zgXuZDnkah49lhb+7uVxzrKqXX7Q5tTNz63CQajIfA/e0Q/rZj4mAzGycZraai5zH1Vsc0SW+p6kP9jnae/Yr9BwMjo99EWHLfRtosax20hzdwqukbfUr/AHlOJccQQtFDQtWjFN+F6DH78Zjxdh5LPcNBvtxvdGy70/zHLreh5NYxHMbXur6ax2x2hLvpO9z3Hc1zmrieh3XdNsa58vx3QL6ezmjUFs/4Wv6VT1uZ+TidF+q2Y/AyBYOp5G3ELSdzWPAscyHfRdU31k8LVuq5WRl573ZFvtNYYKm/RaHHd7N/0bPb9NWeiCw4rqXNawueS0OAfGn0/b/V3LAcy2nFqysi578jJh2wt9jQBx624/pP5Gxa3Qc3dcK3gHd9GeQR7tzP3Xpkx6D3pN66M3/VbAtyLMjDybKbA9rtzCGnX6fplvu97vzlfb0bPzj6Ft+2uyRkPcJsewFo1c1rWusZ/pEZrGsrF5h8DcGtMyD24+k1qrZPWm9HfVl5VL2UMMBogud6m5mm537/ANJQY5kyAOsUnuNGn9Z+nYPTGP8AtnTmXdJe7cc2kBmRS559rW2fn7X/AEN3sWR0/Kqe40YfU6c7H+jXj5f6vkgH8yq501P/AO3f+trY6v8AWWn6ydDvxsagVsuADHXmSXNcPzKj+bt+nuXJ0/VP0sfeMiq7I9xsq+iQ0HbuYXfSVmRA6791oen/AOb3UnA3toeMZsA1vc1tszve5jXez1N4b72fzyS5pv7RrecF9tsEGoVbyWgv9mwjds/cSTeAKt//1d7Jysd9P2eqvc6t3u2Q4Aaj6cD+sqNXScTDsyMiiWvyORILWH6X6IR9Hedy0cjp+RZjNudZZdkGd5IYW6AMa5rGbfb7Po70G9vp0Ma9grdHuAJInu4SqfL0JEA79GSbLrP1Fxm9MsycK4tvqqLtrgNrxEvZp9HcsbD6T9ZupPq6kbWV4+Ga3Mx5JgR7o/d9n013HUcoH6veqRtdbWwBp5921YnTst9XSLWsMbnOrHfU+3hv0farBkQgRu76Mem/Z6cj7acf1LGMLW2BsuY130iXfmMWlblHLrNeGwOdTrvaeCNO30/b7VSxN2MHOcCRDQWASTr4ImHgYWHd69ZcwEkh7S5g1OjLm6/+k1T5kXlF3t0THZ5b67ZLnYVTrHNdazIaK2z7qxscXN2/m+r7H++tP9VrsrPtGQ25zagS30XFr+f+Ehjmf5q0P8YmGc2ig41ddl1W6xzmRudU1oEu/e2LB+obbash9ljT6VjN9RP5wY7ZZt/tKxiiBj0NjcK66tza5xe3hzSR8weVRzemijp1VzT6gxX+paCYDg722P2fRWjva/Ite0bWue4hvgCSYVmmup7HUWt3VWAtcD3B0IU3RZ1bGRQbuhBj3tY6t7bGEzw4H/q9yD0bEyBbVa0CxjiQCNdY/Ob9Nv0lVGVdZ0k4bdwy8R32d0tJDmVmK7A4f8G5n/F/ziudOuZg3UuIayIL7GSS8kRWwT9Fj3lQTmRpV2urq9OwP9MAQ21kDaBAa+PpNb+b9P8APXN/X7DdT0Jp3OvtyMhjS+OTDyxui0K8+x+fcWOL2uG5zCdu0T+kYzYPc79+xyB9aM3Eu6e3GtaSa7K7A/sCC7b9F/8AWaoMdjJHTS0y2LjdIquroxsJxDHhojSdYn2rbf01gyxj57q9/p76/REOc0Fu619kfo3b/wB1A6M2ulrsutrY2FrXToCR7/Tnc71G/wAlZ3VczquTlOFbWepeHCqu6W7Kh+j9LbDPznPt9ynz6yoGq6rMV1Z6uxks6V69VJexu6xp9jtr9wOzc9v0rWPjZsSVG3p1d3T2VOYGClgqbY0N9xh3udDd307ElHZ4asr61f/W9Bs6ZgPYPRrNcO3bAS0E/esrq3RrvXrscS6h0B+2PaZ93ud79v56Pa6xzA4WGkN9wcHAuBPt2NY7d+8/1VmdXv64zKxfTtdZ0+xzWusJYCQfpu9NrW/R/rKtCWMmwAJHsySH1Df+sOP1JmLj4vT6XZNLXS5ojhv0B+a530v3lS+r3Tsp9WcL2OrbvE4Z0iyQ5zvaT+YifWWjPy+qU4+Ha2q/HrGxzt7QS93u9zA5v0WsVzopzsfGudkOAubaGWvcJEiC86bN/tckJAaEp3+xG/p1lzTQ7FIa1wNl1jnNaBP5g9zrHt/q/wDXE2V1HGwGuFI9YgQ2hrdSJHqOZta7+ttW1+0PzQJMSOQD/nD2rlet9QznW2W4gNrbwS1u7a1jmgUub6mzb7mO3fT+mo5QBIkJGVd0ajcVblfW3Pqvq9PpVVFjsfe+52oezRpc6pg9N25u73Lm/q/1U1W4eO630GVm1gftL2n1D6m17Glm36KNVj5nTes215GNkeneSxhe1xGywEOjR/qN3fQfu/MWb0zEy72BtLmMFFrXlxHvH8pu4bNjdv0HPViNcK17HJx2VOfYx7CHEGuoO/SO3eDP3d/8pCpy6Leqv6dU4PNJAdaTDT+96enu2/ynLQ6Y7qDm0jGwRbW2tzXW2g12scTtcKm2A76n/wCCU2Ybb77GGhmNaCRuLhzG5jr66vo+n7vpqKWaUTVaJ4QVsR1dbri9hrhzXPc6Rug+m1m3997P5pHuspZZQ7G2mlu7IfYT7dA7adv5/wDY+h6alb0a+WkhwbL9oqOjnQNl7nO/m/Z/57Vg4FbNxs3Vuc6Q5wBLiAH7nf8ABuUMp8Ru1wFMKsjCOV6FHALvUG3QaBztmu79Lv8A5tQHR8X7Q69zXAv0sbILTPt2u521v2/4N7FaxcLGuLctuPtvsJ9ujfc0ln6Vu76T/TRrLbKjsMtstJa2xohrY9v0im8RidCrRhZjjDx2/Z2taKyPSqb7WNEx+hdrt/f9yp5eF1G14yK9trnPePUJ94BgN26+z3ez2I+VluhtcOLbJm1p2kED6M+57Po/4RAsxsjFyK30PeRa0WWlx3OJbw36DmN9b6L/AH+om+4bsppyMjGzHGil9IcJkBrgG+0kBnt9n0xvcktWkOOA4W6VMa5tdkSDu3bWbp9tbXO+ntST+PRFP//X0OnOvyX+lYDRj1w5lrxtLnAlrGv9X2v3f1Fp4Ysx2N+1AWbLx9ne4l7CHDa19Vbi/wDTNb/NVrwdJZ+vH6WU7av0obM99YZc11b9xG6sSSJ0c86KowdS/nmXW2UsaAK3V7GHcPY6trW7nMb9FfOySfP3OLXt6kCn6MoutfY4OYGPcTtc4E9v5QZscrFBvH6O467RDmtcWSDy5x/wi+a0kwVqkv0ZkVhzwQ4tHqwQ4u+lPsdX6X/flmsxuivsc7COG0B7Rc2uysa7tHWbS79Y/wBHvXgqScOOtL4UaP0RXUz7TuZYGWtcDsaA5xEfRO0/nMTWNx7zk1bhj3Fjh6mhdsJPqbnfme5fPCSjGw38LS/RZY0Us2Bhc9pLnF/BAA/RtcXM/rquasKy6n7Q4OfXLTZaRWSwibD6RLd9fp/yP+gvnxJNG581P0ExoZkWAAuxnl9ksd7RYDscx2xznb/Tez8z/BKt1N4Ira3c2ywBrDtdta6fpyNzF4Mkka4kh+gGvY+m5rmhoO0EjSog61h2jq2V7w/9Ih25j/Ssp+z2+lt3biPZw0vq9Sv1fb7vzv8AtxeBpJmnVT7q477BeYZc2obqwNHf6Pcz+c+l7kl4Ukl+X7FP/9kAOEJJTQQhAAAAAABVAAAAAQEAAAAPAEEAZABvAGIAZQAgAFAAaABvAHQAbwBzAGgAbwBwAAAAEwBBAGQAbwBiAGUAIABQAGgAbwB0AG8AcwBoAG8AcAAgAEMAUwA0AAAAAQA4QklNBAYAAAAAAAcACAAAAAEBAP/hEqJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDQuMi4yLWMwNjMgNTMuMzUyNjI0LCAyMDA4LzA3LzMwLTE4OjA1OjQxICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnRpZmY9Imh0dHA6Ly9ucy5hZG9iZS5jb20vdGlmZi8xLjAvIiB4bWxuczpleGlmPSJodHRwOi8vbnMuYWRvYmUuY29tL2V4aWYvMS4wLyIgeG1sbnM6ZGM9Imh0dHA6Ly9wdXJsLm9yZy9kYy9lbGVtZW50cy8xLjEvIiB4bWxuczpwaG90b3Nob3A9Imh0dHA6Ly9ucy5hZG9iZS5jb20vcGhvdG9zaG9wLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdEV2dD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlRXZlbnQjIiB4bXA6TW9kaWZ5RGF0ZT0iMjAxNS0wMy0xNVQxNjowNzozOS0wNDowMCIgeG1wOkNyZWF0ZURhdGU9IjIwMDctMDUtMTFUMTA6MTk6MDQtMDQ6MDAiIHhtcDpNZXRhZGF0YURhdGU9IjIwMTUtMDMtMTVUMTY6MDc6MzktMDQ6MDAiIHRpZmY6SW1hZ2VXaWR0aD0iNDUwNSIgdGlmZjpJbWFnZUxlbmd0aD0iMzMwNiIgdGlmZjpDb21wcmVzc2lvbj0iMSIgdGlmZjpQaG90b21ldHJpY0ludGVycHJldGF0aW9uPSIyIiB0aWZmOlhSZXNvbHV0aW9uPSIzMDAwMDAwLzEwMDAwIiB0aWZmOllSZXNvbHV0aW9uPSIzMDAwMDAwLzEwMDAwIiB0aWZmOlJlc29sdXRpb25Vbml0PSIyIiB0aWZmOk1ha2U9Ik1JQ1JPVEVLIiB0aWZmOk1vZGVsPSJTY2FuTWFrZXIgMTAwMFhMIiB0aWZmOk9yaWVudGF0aW9uPSIxIiB0aWZmOk5hdGl2ZURpZ2VzdD0iMjU2LDI1NywyNTgsMjU5LDI2MiwyNzQsMjc3LDI4NCw1MzAsNTMxLDI4MiwyODMsMjk2LDMwMSwzMTgsMzE5LDUyOSw1MzIsMzA2LDI3MCwyNzEsMjcyLDMwNSwzMTUsMzM0MzI7MTlBRThFRjdDOTFFNTU0NURBNEREODA5NTNERUY0RjMiIGV4aWY6UGl4ZWxYRGltZW5zaW9uPSIxMzUiIGV4aWY6UGl4ZWxZRGltZW5zaW9uPSIxMzUiIGV4aWY6RGF0ZVRpbWVEaWdpdGl6ZWQ9IjIwMDctMDUtMTFUMTA6MTk6MDQtMDQ6MDAiIGV4aWY6Q29sb3JTcGFjZT0iNjU1MzUiIGV4aWY6TmF0aXZlRGlnZXN0PSIzNjg2NCw0MDk2MCw0MDk2MSwzNzEyMSwzNzEyMiw0MDk2Miw0MDk2MywzNzUxMCw0MDk2NCwzNjg2NywzNjg2OCwzMzQzNCwzMzQzNywzNDg1MCwzNDg1MiwzNDg1NSwzNDg1NiwzNzM3NywzNzM3OCwzNzM3OSwzNzM4MCwzNzM4MSwzNzM4MiwzNzM4MywzNzM4NCwzNzM4NSwzNzM4NiwzNzM5Niw0MTQ4Myw0MTQ4NCw0MTQ4Niw0MTQ4Nyw0MTQ4OCw0MTQ5Miw0MTQ5Myw0MTQ5NSw0MTcyOCw0MTcyOSw0MTczMCw0MTk4NSw0MTk4Niw0MTk4Nyw0MTk4OCw0MTk4OSw0MTk5MCw0MTk5MSw0MTk5Miw0MTk5Myw0MTk5NCw0MTk5NSw0MTk5Niw0MjAxNiwwLDIsNCw1LDYsNyw4LDksMTAsMTEsMTIsMTMsMTQsMTUsMTYsMTcsMTgsMjAsMjIsMjMsMjQsMjUsMjYsMjcsMjgsMzA7RTE4QjQ2NEZDQjA2NTA3MDJDNDAzODg1OTM5QzZDQTUiIGRjOmZvcm1hdD0iaW1hZ2UvanBlZyIgcGhvdG9zaG9wOkNvbG9yTW9kZT0iMyIgcGhvdG9zaG9wOklDQ1Byb2ZpbGU9IkFkb2JlIFJHQiAoMTk5OCkiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MDA4MDExNzQwNzIwNjgxMTlEMTBBNUJDRkM3RkM2NjciIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RkY3RjExNzQwNzIwNjgxMTlEMTBBNUJDRkM3RkM2NjciIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDpGRjdGMTE3NDA3MjA2ODExOUQxMEE1QkNGQzdGQzY2NyI+IDx0aWZmOkJpdHNQZXJTYW1wbGU+IDxyZGY6U2VxPiA8cmRmOmxpPjg8L3JkZjpsaT4gPHJkZjpsaT44PC9yZGY6bGk+IDxyZGY6bGk+ODwvcmRmOmxpPiA8L3JkZjpTZXE+IDwvdGlmZjpCaXRzUGVyU2FtcGxlPiA8eG1wTU06SGlzdG9yeT4gPHJkZjpTZXE+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJjcmVhdGVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOkZGN0YxMTc0MDcyMDY4MTE5RDEwQTVCQ0ZDN0ZDNjY3IiBzdEV2dDp3aGVuPSIyMDE1LTAzLTE1VDE2OjA3OjM5LTA0OjAwIiBzdEV2dDpzb2Z0d2FyZUFnZW50PSJBZG9iZSBQaG90b3Nob3AgQ1M0IE1hY2ludG9zaCIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0iY29udmVydGVkIiBzdEV2dDpwYXJhbWV0ZXJzPSJmcm9tIGltYWdlL3RpZmYgdG8gaW1hZ2UvanBlZyIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6MDA4MDExNzQwNzIwNjgxMTlEMTBBNUJDRkM3RkM2NjciIHN0RXZ0OndoZW49IjIwMTUtMDMtMTVUMTY6MDc6MzktMDQ6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzQgTWFjaW50b3NoIiBzdEV2dDpjaGFuZ2VkPSIvIi8+IDwvcmRmOlNlcT4gPC94bXBNTTpIaXN0b3J5PiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICA8P3hwYWNrZXQgZW5kPSJ3Ij8+/+ICMElDQ19QUk9GSUxFAAEBAAACIEFEQkUCEAAAbW50clJHQiBYWVogB9AABAAKAAoAAAAAYWNzcE1TRlQAAAAAbm9uZQAAAAAAAAAAAAAAAAAAAAAAAPbWAAEAAAAA0y1BREJFAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAKY3BydAAAAPwAAAAkZGVzYwAAASAAAABsd3RwdAAAAYwAAAAUYmtwdAAAAaAAAAAUclRSQwAAAbQAAAAOZ1RSQwAAAcQA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\',
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
      \'changed\' => \'1426527285\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d668bfc0-74be-4f23-8b4c-a77912837495\',
      \'revision_timestamp\' => \'1426527285\',
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
            \'filename\' => \'uvmtypes3.jpg\',
            \'uri\' => \'public://uvmtypes3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'42127\',
            \'status\' => \'1\',
            \'timestamp\' => \'1426527285\',
            \'uuid\' => \'e909bde3-aaf9-4322-b151-c4191dbb62bf\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'135\',
            \'height\' => \'135\',
            \'node_export_file_data\' => \'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lMY7gW/pn7W9tNf6x2qIZd6ja22OLBuL3EAGZBY3j6KGqlntqxG2Zl1rvTqrJsLjIDWzY52n7q4DrXXvrF1j034tNmP0y+w1YzGaPv8A5X+ls/63+hrXd9R6aM/Ddh22u9K17DdPLqw4Psp9m3227difF6ZjY178gDdYQK6yRpVU0RXj0N/wdf73+kekb2SCBq8Pj/4v+qXAPvdVjh3LJLntH9kbP7O9Xm/4tmaNfne3vFev42LtkxQ4fEp9yTy+L/i86JSQ659uRBnaSGj/AKAXQYeBhYFXo4dLKGckMESf5R/OViUkaCCSdysnCZIIoXIlV7K4dqVYTFoPISlGwkGms2vx8CkrMaJIcAqk8T//1/TQy4Ulps3WGQHx93tTenZvOyyGg6gCSdG/SlfLySYufqNjHh075AJkQNZ8VH0nbgfV9xJI0HhAa0fyV8vJJK1fqI0PIh1z9I1EDgfD85EY3YILi7zdz+C+WUkdEP1QmXywkkp+p0xXyykkp+pgkvllJJL9S9kl8tJJKfqYJFfLKSSn6lSXy0kip//Z/+0cBFBob3Rvc2hvcCAzLjAAOEJJTQQEAAAAAAAHHAIAAAIAAAA4QklNBCUAAAAAABDo8VzzL8EYoaJ7Z63FZNW6OEJJTQPtAAAAAAAQASwAAAABAAEBLAAAAAEAAThCSU0EJgAAAAAADgAAAAAAAAAAAAA/gAAAOEJJTQQNAAAAAAAEAAAAHjhCSU0EGQAAAAAABAAAAB44QklNA/MAAAAAAAkAAAAAAAAAAAEAOEJJTScQAAAAAAAKAAEAAAAAAAAAAjhCSU0D9QAAAAAASAAvZmYAAQBsZmYABgAAAAAAAQAvZmYAAQChmZoABgAAAAAAAQAyAAAAAQBaAAAABgAAAAAAAQA1AAAAAQAtAAAABgAAAAAAAThCSU0D+AAAAAAAcAAA/////////////////////////////wPoAAAAAP////////////////////////////8D6AAAAAD/////////////////////////////A+gAAAAA/////////////////////////////wPoAAA4QklNBAgAAAAAABAAAAABAAACQAAAAkAAAAAAOEJJTQQeAAAAAAAEAAAAADhCSU0EGgAAAAADSwAAAAYAAAAAAAAAAAAAAIcAAACHAAAACwBt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cAAAABMAQQBkAG8AYgBlACAAUABoAG8AdABvAHMAaABvAHAAIABDAFMANAAAAAEAOEJJTQ+gAAAAAAEMbWFuaUlSRlIAAAEAOEJJTUFuRHMAAADgAAAAEAAAAAEAAAAAAABudWxsAAAAAwAAAABBRlN0bG9uZwAAAAAAAAAARnJJblZsTHMAAAABT2JqYwAAAAEAAAAAAABudWxsAAAAAgAAAABGcklEbG9uZ0GoJwcAAAAARnJHQWRvdWJAPgAAAAAAAAAAAABGU3RzVmxMcwAAAAFPYmpjAAAAAQAAAAAAAG51bGwAAAAEAAAAAEZzSURsb25nAAAAAAAAAABBRnJtbG9uZwAAAAAAAAAARnNGclZsTHMAAAABbG9uZ0GoJwcAAAAATENudGxvbmcAAAAAAAA4QklNUm9sbAAAAAgAAAAAAAAAADhCSU0PoQAAAAAAHG1mcmkAAAACAAAAEAAAAAEAAAAAAAAAAQAAAAA4QklNBAYAAAAAAAcACAAAAAEBAP/hFY1odHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDQuMi4yLWMwNjMgNTMuMzUyNjI0LCAyMDA4LzA3LzMwLTE4OjA1OjQxICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnRpZmY9Imh0dHA6Ly9ucy5hZG9iZS5jb20vdGlmZi8xLjAvIiB4bWxuczpkYz0iaHR0cDovL3B1cmwub3JnL2RjL2VsZW1lbnRzLzEuMS8iIHhtbG5zOnBob3Rvc2hvcD0iaHR0cDovL25zLmFkb2JlLmNvbS9waG90b3Nob3AvMS4wLyIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0RXZ0PSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VFdmVudCMiIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczpleGlmPSJodHRwOi8vbnMuYWRvYmUuY29tL2V4aWYvMS4wLyIgeG1wOkNyZWF0b3JUb29sPSIyLjUiIHhtcDpNb2RpZnlEYXRlPSIyMDE1LTAzLTE1VDE2OjM0OjMyLTA0OjAwIiB4bXA6Q3JlYXRlRGF0ZT0iMjAxMC0wNC0xNlQxMjowNzo0MC0wNDowMCIgeG1wOk1ldGFkYXRhRGF0ZT0iMjAxNS0wMy0xNVQxNjozNDozMi0wNDowMCIgdGlmZjpJbWFnZVdpZHRoPSIyOTQwIiB0aWZmOkltYWdlTGVuZ3RoPSI0MDYzIiB0aWZmOkNvbXByZXNzaW9uPSIxIiB0aWZmOlBob3RvbWV0cmljSW50ZXJwcmV0YXRpb249IjIiIHRpZmY6T3JpZW50YXRpb249IjEiIHRpZmY6U2FtcGxlc1BlclBpeGVsPSIzIiB0aWZmOlBsYW5hckNvbmZpZ3VyYXRpb249IjEiIHRpZmY6WFJlc29sdXRpb249IjMwMDAwMDAvMTAwMDAiIHRpZmY6WVJlc29sdXRpb249IjMwMDAwMDAvMTAwMDAiIHRpZmY6UmVzb2x1dGlvblVuaXQ9IjIiIHRpZmY6TWFrZT0iaTJTIENvcGlCb29rIFNjYW5uZXIiIHRpZmY6TW9kZWw9IkNvcGlCb29rIiB0aWZmOk5hdGl2ZURpZ2VzdD0iMjU2LDI1NywyNTgsMjU5LDI2MiwyNzQsMjc3LDI4NCw1MzAsNTMxLDI4MiwyODMsMjk2LDMwMSwzMTgsMzE5LDUyOSw1MzIsMzA2LDI3MCwyNzEsMjcyLDMwNSwzMTUsMzM0MzI7REVDMUYzQkU5RTUwNzFCRUNEQjkzMjIzNzg3QTAxMUYiIGRjOmZvcm1hdD0iaW1hZ2UvanBlZyIgcGhvdG9zaG9wOkNvbG9yTW9kZT0iMyIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpENkFCNjkzRjBDMjA2ODExOUQxMEE1QkNGQzdGQzY2NyIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpFQzI1NUYzQ0NENTJERjExOUNDREI2MEQxMUQ0QTg0OSIgeG1wTU06T3JpZ2luYWxEb2N1bWVudElEPSJ4bXAuZGlkOkVDMjU1RjNDQ0Q1MkRGMTE5Q0NEQjYwRDExRDRBODQ5IiBleGlmOlBpeGVsWERpbWVuc2lvbj0iMTM1IiBleGlmOlBpeGVsWURpbWVuc2lvbj0iMTM1IiBleGlmOkNvbG9yU3BhY2U9IjY1NTM1IiBleGlmOk5hdGl2ZURpZ2VzdD0iMzY4NjQsNDA5NjAsNDA5NjEsMzcxMjEsMzcxMjIsNDA5NjIsNDA5NjMsMzc1MTAsNDA5NjQsMzY4NjcsMzY4NjgsMzM0MzQsMzM0MzcsMzQ4NTAsMzQ4NTIsMzQ4NTUsMzQ4NTYsMzczNzcsMzczNzgsMzczNzksMzczODAsMzczODEsMzczODIsMzczODMsMzczODQsMzczODUsMzczODYsMzczOTYsNDE0ODMsNDE0ODQsNDE0ODYsNDE0ODcsNDE0ODgsNDE0OTIsNDE0OTMsNDE0OTUsNDE3MjgsNDE3MjksNDE3MzAsNDE5ODUsNDE5ODYsNDE5ODcsNDE5ODgsNDE5ODksNDE5OTAsNDE5OTEsNDE5OTIsNDE5OTMsNDE5OTQsNDE5OTUsNDE5OTYsNDIwMTYsMCwyLDQsNSw2LDcsOCw5LDEwLDExLDEyLDEzLDE0LDE1LDE2LDE3LDE4LDIwLDIyLDIzLDI0LDI1LDI2LDI3LDI4LDMwOzg3NzFCRTIwQzZFNTk2RDE5QTU5NUI5RUVCRTc1MjBDIj4gPHRpZmY6Qml0c1BlclNhbXBsZT4gPHJkZjpTZXE+IDxyZGY6bGk+ODwvcmRmOmxpPiA8cmRmOmxpPjg8L3JkZjpsaT4gPHJkZjpsaT44PC9yZGY6bGk+IDwvcmRmOlNlcT4gPC90aWZmOkJpdHNQZXJTYW1wbGU+IDx4bXBNTTpIaXN0b3J5PiA8cmRmOlNlcT4gPHJkZjpsaSBzdEV2dDphY3Rpb249ImNyZWF0ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6RUMyNTVGM0NDRDUyREYxMTlDQ0RCNjBEMTFENEE4NDkiIHN0RXZ0OndoZW49IjIwMTAtMDQtMjhUMDk6NTI6MzItMDQ6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzQgV2luZG93cyIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6RUQyNTVGM0NDRDUyREYxMTlDQ0RCNjBEMTFENEE4NDkiIHN0RXZ0OndoZW49IjIwMTAtMDQtMjhUMDk6NTI6MzItMDQ6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzQgV2luZG93cyIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0ic2F2ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6RDVBQjY5M0YwQzIwNjgxMTlEMTBBNUJDRkM3RkM2NjciIHN0RXZ0OndoZW49IjIwMTUtMDMtMTVUMTY6MzQ6MzItMDQ6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzQgTWFjaW50b3NoIiBzdEV2dDpjaGFuZ2VkPSIvIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJjb252ZXJ0ZWQiIHN0RXZ0OnBhcmFtZXRlcnM9ImZyb20gaW1hZ2UvdGlmZiB0byBpbWFnZS9qcGVnIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJkZXJpdmVkIiBzdEV2dDpwYXJhbWV0ZXJzPSJjb252ZXJ0ZWQgZnJvbSBpbWFnZS90aWZmIHRvIGltYWdlL2pwZWciLz4gPHJkZjpsaSBzdEV2dDphY3Rpb249InNhdmVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOkQ2QUI2OTNGMEMyMDY4MTE5RDEwQTVCQ0ZDN0ZDNjY3IiBzdEV2dDp3aGVuPSIyMDE1LTAzLTE1VDE2OjM0OjMyLTA0OjAwIiBzdEV2dDpzb2Z0d2FyZUFnZW50PSJBZG9iZSBQaG90b3Nob3AgQ1M0IE1hY2ludG9zaCIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8L3JkZjpTZXE+IDwveG1wTU06SGlzdG9yeT4gPHhtcE1NOkRlcml2ZWRGcm9tIHN0UmVmOmluc3RhbmNlSUQ9InhtcC5paWQ6RDVBQjY5M0YwQzIwNjgxMTlEMTBBNUJDRkM3RkM2NjciIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6RUMyNTVGM0NDRDUyREYxMTlDQ0RCNjBEMTFENEE4NDkiIHN0UmVmOm9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDpFQzI1NUYzQ0NENTJERjExOUNDREI2MEQxMUQ0QTg0OSIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICA8P3hwYWNrZXQgZW5kPSJ3Ij8+/+4ADkFkb2JlAGRAAAAAAf/bAIQAAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQICAgICAgICAgICAwMDAwMDAwMDAwEBAQEBAQEBAQEBAgIBAgIDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMD/8AAEQgAhwCHAwERAAIRAQMRAf/dAAQAEf/EAaIAAAAGAgMBAAAAAAAAAAAAAAcIBgUECQMKAgEACwEAAAYDAQEBAAAAAAAAAAAABgUEAwcCCAEJAAoLEAACAQMEAQMDAgMDAwIGCXUBAgMEEQUSBiEHEyIACDEUQTIjFQlRQhZhJDMXUnGBGGKRJUOhsfAmNHIKGcHRNSfhUzaC8ZKiRFRzRUY3R2MoVVZXGrLC0uLyZIN0k4Rlo7PD0+MpOGbzdSo5OkhJSlhZWmdoaWp2d3h5eoWGh4iJipSVlpeYmZqkpaanqKmqtLW2t7i5usTFxsfI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\',
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
      \'changed\' => \'1426527444\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f9a72897-9897-4926-9f2f-0a8a66a05f59\',
      \'revision_timestamp\' => \'1426527444\',
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
            \'filename\' => \'uvmcollections.jpg\',
            \'uri\' => \'public://uvmcollections.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'41934\',
            \'status\' => \'1\',
            \'timestamp\' => \'1426527319\',
            \'uuid\' => \'c24b132b-b7c7-4cd5-80ed-7bd291d99b19\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'135\',
            \'height\' => \'135\',
            \'node_export_file_data\' => \'/9j/4AAQSkZJRgABAgEBLAEsAAD/4RYxRXhpZgAATU0AKgAAAAgABwESAAMAAAABAAEAAAEaAAUAAAABAAAAYgEbAAUAAAABAAAAagEoAAMAAAABAAIAAAExAAIAAAAeAAAAcgEyAAIAAAAUAAAAkIdpAAQAAAABAAAApAAAANAALcbAAAAnEAAtxsAAACcQQWRvYmUgUGhvdG9zaG9wIENTNCBNYWNpbnRvc2gAMjAxNTowMzoxMyAxNDo1Mzo1OAAAA6ABAAMAAAAB//8AAKACAAQAAAABAAAAh6ADAAQAAAABAAAAhwAAAAAAAAAGAQMAAwAAAAEABgAAARoABQAAAAEAAAEeARsABQAAAAEAAAEmASgAAwAAAAEAAgAAAgEABAAAAAEAAAEuAgIABAAAAAEAABT7AAAAAAAAAEgAAAABAAAASAAAAAH/2P/gABBKRklGAAECAABIAEgAAP/tAAxBZG9iZV9DTQAC/+4ADkFkb2JlAGSAAAAAAf/bAIQADAgICAkIDAkJDBELCgsRFQ8MDA8VGBMTFRMTGBEMDAwMDAwRDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAENCwsNDg0QDg4QFA4ODhQUDg4ODhQRDAwMDAwREQwMDAwMDBEMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwM/8AAEQgAhwCHAwEiAAIRAQMRAf/dAAQACf/EAT8AAAEFAQEBAQEBAAAAAAAAAAMAAQIEBQYHCAkKCwEAAQUBAQEBAQEAAAAAAAAAAQACAwQFBgcICQoLEAABBAEDAgQCBQcGCAUDDDMBAAIRAwQhEjEFQVFhEyJxgTIGFJGhsUIjJBVSwWIzNHKC0UMHJZJT8OHxY3M1FqKygyZEk1RkRcKjdDYX0lXiZfKzhMPTdePzRieUpIW0lcTU5PSltcXV5fVWZnaGlqa2xtbm9jdHV2d3h5ent8fX5/cRAAICAQIEBAMEBQYHBwYFNQEAAhEDITESBEFRYXEiEwUygZEUobFCI8FS0fAzJGLhcoKSQ1MVY3M08SUGFqKygwcmNcLSRJNUoxdkRVU2dGXi8rOEw9N14/NGlKSFtJXE1OT0pbXF1eX1VmZ2hpamtsbW5vYnN0dXZ3eHl6e3x//aAAwDAQACEQMRAD8Ap4fUX43sY8N7wIg/5wVjI6/kekR7T/KLf/IrmcvIcDo0FV/tb5AaNk88wrBygaMft3q7LOs+rbFrgAe4V+MS+sDc18aghxaVhYbKSSbaw7why0H2YbKyTWWgDsP4s2p8ZEizSyURegLo25vS64a8Oa7vqD/1BWJ1NnSbr99T9XiT7v71Vfk1ZVmxkeG14n7k9nSbmw59Q48D/wCZJspcWwEgkREdzRar6KmuIqeNw5g6oFwuEge+fHQq/XRjUkHca3d29lbpPTXgte8F58IJH3JghfYL+Ku5eZPrMMatPmtXorMezIH2nRo7jXX/AKpHyqcWhjrq37y3UAj+9B6debbg51bAQfDaZ/s+1NEeGQshOshoC93jU4r2N9HIHA0n+BVXMpa7MG+wMAH0pUMW3p1oa2yxtbgNQ8OA/svDXtVfrH2TphblW2Gxjm7qq2kPa5v7wI/NU+3Vho7Vq7GEMuiw2U5DDTHcx/1SsWdeBa4PAO389ruP81crY6/q+AzN6eyy21pDbcKsTsadG5Gn7yHiNsZc+i4PpfqDW4EOER+a9DiiZLhjkIk39G5m9bpfYSSYnmNVRuz6Xawx/gXHX7llZ9+3IdVaxzg2YJ9s6qi7HqsPqOD2/wDSH4JsstGgAVDGN3ZGfW4nboW/Sra6Gx/KYd3tSWQ3EDZLLBtIIdrrB5SQ9yVbf96ngHd//9Dk9j7HbTB81KzAe5sVva4DxTGyXH0wRB12n+9L1pOgdI8Wz+LVKBGtVpJRijKqPuDg0fu6tKI7NbWz3S0Dw0P3FT9axuvouaDrLSR+DtyrZl9ljCDLm9twE/glfCDRKN90NmXRYQWuNZ53bYd/0VqY3W7KgP0u9rRHuErnXwDPdQD48J8UyOSQNpMQRReky+o4eU79PW0uiJ2lv4rEuwrJNmLIE6Q6T/31CbZlOP6N06eP960em4l7v1jLJZWPos7vI/74n2ch2+oRQiEvSqsx9jK+pMAxi4NfY/6W087QPprU6p06jpefdi0VCuoEGt3JcwiWP3Kjk5VbCXWuggfRAkx8FbHU7Or142DYaqjXFdWdYTLWHhtrW/TahlhY4Ym5Bl5bKIT4pjQj/FRUjJyL2Y2O02W2HbWwdyVufWzor8HpHTAff6O+u93bdZ+l/wAzdvWt0b6v4n1eFmVdlDKy3Mip0NaWh30jXWX+9zlrZDK7qn41jG5FZY0vofqfnX9Ovb+8lEmoxv5UZfVKWThIEjbwnRasSuvLzbbjTjZUV7WGC3b+a5n53vVnrPU6sLBrpps/aAtqcNtgDnVk/wA1Yz6VlTf+uK79Zcrp3R20Y+Bi11OIdZcyCXQdKt+v0nfylznTsr17A/Ioa4nk7NYP/Fp0YAkdCtlkqOzk1jMzn73NkM0Acf8AySvGqmn3XY0NjU6j5rosfFwrS9tFevJbuIPy3bEDLxXtpsZseCBAPI/EKSOKtzZ8Wuctnag8u9/R/XG3e0SCfd7T5bvd/wBUkjW9McLmPY9jZI3NiARPlLElHwy4vlDJxRrcv//R5OzKNLy4UkD+SSFXf1cGRsLfMjX7wh3wDyRHgVRuaNxMknzTuM9EcIdCr6wZlbQ0Pa9o/NeJTXdbvfH6OsePcFZrRQQQ4uB8Rqj0YrbiW1uBPgdClxz2sq4RvTYdfTkM9+O0E/nMMH7lXNdI7Ob8VJ+FfW0k1nTvyP8AooTSLCGnTsmknqFN/p1VNgcbKQ6sTD3DUu/dBBWgb2hwD+eA3yQbHEMNdbQK6G7axOk/nFCrDne5+pPKsR9IACwizaL0ybTY/XcTqjtYGiBp5qewR5p2RoT8khGlEur0n6xdV6a3a1zLaWiA20TtH8h/85WtW366PbiR0+ltWQ4kl97tw92r/T3e76f0fcuPysuuh+17fUPIZwP6zle6VlY+RZN2I+6o6HbDmg/ympVAmuquKQHg5uRT1jJyH5OQ4vdYSTY6XAk/ymK1iM6vgvFzWNe0/vEx/wBMLuen19JFQqZjBg5DCI+781D6hZ0uuo/obcYj85vH/RLmpRhR0tYchI1ouDV9aqq3/p6GssjUgg/9UhWfW5xvfX6bTS4aO4Pw/OWb1yzp+W4VVZ7NDILmfg62sf8AfVk29OurYX1XV2t7+m8E/wCY7Y5CWSYOmtdUxhAjUVfR0nXh14s/R7GncADB+4H/AL6kufJske7TxSUfudaX8HR//9Lkb8TCIJ3uaT3Ov5Fl5FdLHRW/1B4hXbM41uIdUCPDhV7smm2T6Ib4QjKulBGrQcPBTqtdWQ4aEeCZ72zqFBxB4TUto9RvIiZB7FVQHud7WkkmAAhlanSMRzgcp4hrdKx4n8539lOAMjSCaDdopsZU1trtz493f+yiCACXGGgSSfBODLfJU867fGLXwdbCP+pU9iIWbsXdQtut/V2gVjQbu/noi35lmNjhzw02v9tbRMT3dr+6nx8ZlVW94hrdTpJWfk5WLlZDXudZWG+1ogEABMJkBZOp2TQJ22dnp9ZuoD7WkOPMiZVw1Mxouxnil+gIECT/AFXKviZQZW0NO5o78Iz6Leqn7LjVOtOm6Wgtb/Xs9u3/ADlIKEfFYQSWdv1p6vhw19Tb6j+eND93uWxhWdVzcB+bn0NoqI/QtdpY4H95rdvtVfC+rHSujsbm9VuYXs1bWSfSDh+7W477rP6qlY7qvW7mjGY7G6ZWZFtxIc53G5rP3f3GICRvU/Rf7Q4Tpr0cTqv1bF7jbgs2vP8AgQJk/wAmFg2dOsoyH4+QW1X1na+txgg/9SvSw+vpFRtc03OaIHJfu8udjFw3V+pUHIfcKZvscXuc796U2cY/MNAoCUQIk8R8P0XPd0u4AGGx4zpCSKOsWbP5phMHWI/IkmVj7lXr7P8A/9PleoDAZNlNrbB2bqHD5FZENsJga+HCuZmPTMvhjvCYVSKWO1n4iHD8EZGztSBt3YjEnkH7kcdJrLQ7fDj2IU6yPzC0+Uwk99jexHYQZSFddVMMfpBff+leDSzV0d/5P9paNj2BsCK62DSNAAFEH0aG1nV591h81RtvFzj/ANx64JH7zuzVJYiPErdSUrMtgaY3EH6MwJ/lfyWqGMyob7nabdXT/tTVUm5+5w0OrjwAFoVU79tdFdWRV2aTLi7+q1KNnU9NlFBd1TpvpEN9Wt4ECNVk42BldQyduA022EyGAGR/W/N/6S7fF+pmPmtZdnUtwmjU11OJc4ee47Kv+rV9uU7Fnpv1b6eA9uj77AW1j+W7/CX/ANtKQMjrWnZdEV4X3cvpX1QGDScvreUG7dTSwwNOz7B9P/ra0W9Xzslpw/q9giqlujsu5u2oeddX07Xf10VvSWVNOb13L+0uGp3nZS0/utYPpf2EDJ+s+NXDen17ms0FkQI8GMb/AN/ThHSgmwNTp+abG6Pg0PGZ1a85uYD/ADmR9Fp/dppVzKHUrq/8muqGmjnul39kD2sXNDKpz8ouLX/aQPaXuJbryGtb9H/NVk3WY7TupeA0HVjg7/ona5SCArdinmOwFfmhzD9ZcRtnrsbaBzBBP5W/9Sueqot6k6wZDPcDySWkfJajsk5rpa91jQYkgg/Aquaa6CbATv8AAyfyFAxutbitBq+ki03dBI5ZZMiILSOf3vpNSV7H6n6uLZzLGu0I8P8ApJIe3jri6K4p3XV//9TgsoF0iCO6BXW0HmCFpXPoiHUkfymz/wB9KzMrZ6k1gx58pEeKkj72N5E+C0fq222/qIyWCWYvvhwlpd/g27Vhkz4rovqp1bAw2vqux7n3F4e22rUAD6O9jvYjjA4ha2V0a3dbqeTd9oe7P6RS5+RXFdrQ5hDz/hHtadjlQs+rVIx2vxuo02PaQLKXgtIcedjtd66uih/UHnLYyzU/o3ZA9jf3vTqn3olTOk9Mva4M9fJdy9rJIJ/0bG/99UxgD4/sW2f7o/NwMT6n5WQxpyX/AGTEHuscdHvA/kujZX/xivU5nTsEnE+rmJ9uy/ouvP8ANg/y749/9SlWL+mZ/VbzZ1jIdVhAzXht9gI8bzP/AFb0szq2J0vHNHScYXOAjT2sH9Z385agB4LxQG9ebOrByxW7J63ltLR7nMbDK2f2/wDzJY/Uvr5gYe7G6SwXkGBa4RWP5XZ1q5brfUusdRsnOsc8A+2loLWN/q1/RWcK6o9wsY74SP8AvqbLIdh+KdOn2urnZWd1N/r5GUbnnXaT7W/ya2jbtTMuFUMeGbhyQ4tKz2YtxP6IF4PeCFrYv1W6vlFttbAWGDvJmPi1NjxE2AStkR1LP18YFjxbZWR4Fr9f6zDvWhj9aDDtOX6zY+i8T/1bUd3RorFeV02i0jlzCWu/77/1Swus4mNjkHBpsoeDDw6zc0eW127/AKtTkyiL0r6sQ4Zaa/g2M23HNxyKnPpsOoFJG0/2FRb1bPssFL9wkwNwH/VO2qNF/vDMg2UPI+k0BwK0nVXAB1OUHwNBawfxTQTLUEjuAuoDQi/NjgXZmLXk1uPqMva5gc5olu4Fu5rklWZf1GzIexranbBLnj2gD97Zu2vSR4hw1rX8uqOH1Xpb/9XgbLXbiCP80wmINkckniVuu+pvWXXBorrLSf5xr9APgturpPROg1Nv6laLbuwd4+Fdf0nIiB66KAJ2eZ6b9Uc/qDmvI9Kn855HC6emnoH1eoZSA7Nyhqypo3S7xj6Lf69qsi3qvVmAYbDg4bv8I8Q4j/g601g6T0NhsJdfmD4Oef8AvtaljEDZNJGVdf6kW25F56bTyKqoLo/lF30//PaBlde6D0TdVjk5eafpEO3un/hr/wAz+pUud6t9Zes9SLsemt1NLhrSwHc4f8JZ9Jy58V3Uuna6gzxq2P8APTZTrZBI8y9FkfWTMzcoWZjnNxo0qr0A/rfnOWtS/GuqDmPdtI5IB/Fq41xzGQ4w5viQNfm1Hq6jZV7DvrP8l2idjy8OkmOcOLW9XSzW1V3H9JE8FzSFmXWt3u9275BwVr1Ls1kOyXgjg7AU7OiB7J+1MDj4gtlGYMvlCgRHco8BzXHVxB7AGPwXS4baQ0F+TYx33f3Ll7+ldQxQbmvZawd2mSj9P+sPo/o7aPVn90x/5ilCfDpIcK2ceIXHV6fPx3X0FozbCwjga/j7lw/VcbJxbDFrnV9t3K3L+r9KuYSabqLCNC3T/qFz3ULrLztZdbYyfoW6keHuH0kssokaGz5qxRkDqkry6nVM9fHc4t/wjCQVdPWMRtbQH2t8fUYHtVbp9NtZbZLQSNWy5p+bforX+0vDYdTW9vg4jU+W5LGDV3X0/wC9TOr2v6ue/LpFjcmq2ohw94aC0hv52+v3b0lXynbr6njBazbY07hwYP0DH6P3pIcR4q+vWvsTQq/4P//WtuysvMHp9IZtrGjrnj2j+r+8o09J6XgP+2ZzzlZh/wAJb7jP/A1fRajXdSDB6eL7WjQO4H9lqzn2F5Ln+4nklW44r30Y8nMAaR1/6LayupZF3tqPo1nQ/vH+1+asx9NTZc6J5JOqsE6KplEFpkKXhiBs1/cnKVmRY4+VQHlrqmPeOHDTRWbrMc1bnVGD25/6pY9La67yQSA7XUytb1PWo2sdrGkqHbozECWplTx3WaWU5HqUFzWvJlngfKFBuDlPaHn3SNDP/kle6zg5znhwqc5g5IE/9Sl0zNzWRU66GARsfB/6L1DwgzIIItffp0INLYfTer4rhcykvYRMdj8mLYq6k8s25GG5p7lvH/TCduVl6GosnsW+0/8AfWqVuZn2sHrN3lv0Tp/CE8n29BZCYYvd3IDk9RsbcHegxoB43S134BqyWufiuJfU2wHs4T+K6D17LHGu9sTp7h/35XMX6v4eZQS63a49kDAz9QK0ng9JeZ/aWI4Q/F2HxrdH/RcqbSBdvrAA/dd7tF0XU/qgcel11djHgSYmCufswMyogmtwHiNR/wBFMkJjcfYuiYnYuxh5rrSGWtY1vEzr/mncrjmXmRU+ksA+i7T/AKpUundGxcpgJutZu7ubx82ytWv6rODR6OQbD4EH+Cmhx0LF+NsUjEHevo4l/qWX1t+ztaWPHuY4bDB/wn8lJFv+r+RTmVBoB3vDTBdpJ2yWpJlS4tjf8v6q648O+j//14njVDOnHC8wSWi0H07cY4I+SqZJMa8fBeeJJHZMat76qrGJ+kA74q7W2tjfYQ4+Wq80SUUl5vq+m2GWQsnIOMxxNgrf8YlcQkmrovc47cJ0PxtrH+DXGPuV6qzMYILS5njEj8i84STZ/RtYK1u30B7cawy5wY/5f3NW/wDV+s7TD27QfzgNV5AknD5fFhyVx9a8X27qFGManeq/H/tub/34rlX4vSrHOBuqY6TGwwP+iXtXnaSULr1Uxzq/Tfi923F9Cx3o2suBPZ4JAWxgHKY5pa0kDtz/ANSXLyxJSdNFpu9d32G3IDnt30gPDgWmCNZ00cEl48khpSOvi//Z/+0a4FBob3Rvc2hvcCAzLjAAOEJJTQQlAAAAAAAQAAAAAAAAAAAAAAAAAAAAADhCSU0D7QAAAAAAEAEsAAAAAQABASwAAAABAAE4QklNBCYAAAAAAA4AAAAAAAAAAAAAP4AAADhCSU0EDQAAAAAABAAAAB44QklNBBkAAAAAAAQAAAAeOEJJTQPzAAAAAAAJAAAAAAAAAAABADhCSU0nEAAAAAAACgABAAAAAAAAAAE4QklNA/UAAAAAAEgAL2ZmAAEAbGZmAAYAAAAAAAEAL2ZmAAEAoZmaAAYAAAAAAAEAMgAAAAEAWgAAAAYAAAAAAAEANQAAAAEALQAAAAYAAAAAAAE4QklNA/gAAAAAAHAAAP////////////////////////////8D6AAAAAD/////////////////////////////A+gAAAAA/////////////////////////////wPoAAAAAP////////////////////////////8D6AAAOEJJTQQIAAAAAAAQAAAAAQAAAkAAAAJAAAAAADhCSU0EHgAAAAAABAAAAAA4QklNBBoAAAAAA1kAAAAGAAAAAAAAAAAAAACHAAAAhwAAABIAYQByAGkAZQBsADEAOQA3ADYAXwAyADAAMwAtAGYAdQBsAGwAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAEAAAAAAAAAAAAAAIcAAACHAAAAAAAAAAAAAAAAAAAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAEAAAAAEAAAAAAABudWxsAAAAAgAA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ZG9iZS5jb20veGFwLzEuMC8APD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNC4yLjItYzA2MyA1My4zNTI2MjQsIDIwMDgvMDcvMzAtMTg6MDU6NDEgICAgICAgICI+IDxyZGY6UkRGIHhtbG5zOnJkZj0iaHR0cDovL3d3dy53My5vcmcvMTk5OS8wMi8yMi1yZGYtc3ludGF4LW5zIyI+IDxyZGY6RGVzY3JpcHRpb24gcmRmOmFib3V0PSIiIHhtbG5zOnhtcD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wLyIgeG1sbnM6ZGM9Imh0dHA6Ly9wdXJsLm9yZy9kYy9lbGVtZW50cy8xLjEvIiB4bWxuczpwaG90b3Nob3A9Imh0dHA6Ly9ucy5hZG9iZS5jb20vcGhvdG9zaG9wLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdEV2dD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlRXZlbnQjIiB4bWxuczp0aWZmPSJodHRwOi8vbnMuYWRvYmUuY29tL3RpZmYvMS4wLyIgeG1sbnM6ZXhpZj0iaHR0cDovL25zLmFkb2JlLmNvbS9leGlmLzEuMC8iIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNCBNYWNpbnRvc2giIHhtcDpDcmVhdGVEYXRlPSIyMDE1LTAzLTEwVDE0OjU1OjQyLTA0OjAwIiB4bXA6TW9kaWZ5RGF0ZT0iMjAxNS0wMy0xM1QxNDo1Mzo1OC0wNDowMCIgeG1wOk1ldGFkYXRhRGF0ZT0iMjAxNS0wMy0xM1QxNDo1Mzo1OC0wNDowMCIgZGM6Zm9ybWF0PSJpbWFnZS9qcGVnIiBwaG90b3Nob3A6Q29sb3JNb2RlPSIzIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOkY5N0YxMTc0MDcyMDY4MTFCMEZGRDExQ0IyOUFDRkEwIiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOkY4N0YxMTc0MDcyMDY4MTFCMEZGRDExQ0IyOUFDRkEwIiB4bXBNTTpPcmlnaW5hbERvY3VtZW50SUQ9InhtcC5kaWQ6Rjg3RjExNzQwNzIwNjgxMUIwRkZEMTFDQjI5QUNGQTAiIHRpZmY6T3JpZW50YXRpb249IjEiIHRpZmY6WFJlc29sdXRpb249IjMwMDAwMDAvMTAwMDAiIHRpZmY6WVJlc29sdXRpb249IjMwMDAwMDAvMTAwMDAiIHRpZmY6UmVzb2x1dGlvblVuaXQ9IjIiIHRpZmY6TmF0aXZlRGlnZXN0PSIyNTYsMjU3LDI1OCwyNTksMjYyLDI3NCwyNzcsMjg0LDUzMCw1MzEsMjgyLDI4MywyOTYsMzAxLDMxOCwzMTksNTI5LDUzMiwzMDYsMjcwLDI3MSwyNzIsMzA1LDMxNSwzMzQzMjs1QjAyMEIxMDZCMUM1M0M3QjY1NDkyMEM2NDg5NzJGRCIgZXhpZjpQaXhlbFhEaW1lbnNpb249IjEzNSIgZXhpZjpQaXhlbFlEaW1lbnNpb249IjEzNSIgZXhpZjpDb2xvclNwYWNlPSI2NTUzNSIgZXhpZjpOYXRpdmVEaWdlc3Q9IjM2ODY0LDQwOTYwLDQwOTYxLDM3MTIxLDM3MTIyLDQwOTYyLDQwOTYzLDM3NTEwLDQwOTY0LDM2ODY3LDM2ODY4LDMzNDM0LDMzNDM3LDM0ODUwLDM0ODUyLDM0ODU1LDM0ODU2LDM3Mzc3LDM3Mzc4LDM3Mzc5LDM3MzgwLDM3MzgxLDM3MzgyLDM3MzgzLDM3Mzg0LDM3Mzg1LDM3Mzg2LDM3Mzk2LDQxNDgzLDQxNDg0LDQxNDg2LDQxNDg3LDQxNDg4LDQxNDkyLDQxNDkzLDQxNDk1LDQxNzI4LDQxNzI5LDQxNzMwLDQxOTg1LDQxOTg2LDQxOTg3LDQxOTg4LDQxOTg5LDQxOTkwLDQxOTkxLDQxOTkyLDQxOTkzLDQxOTk0LDQxOTk1LDQxOTk2LDQyMDE2LDAsMiw0LDUsNiw3LDgsOSwxMCwxMSwxMiwxMywxNCwxNSwxNiwxNywxOCwyMCwyMiwyMywyNCwyNSwyNiwyNywyOCwzMDs2QjkwRUQ5RDI1NTFFMkY0ODhBQzAzOEREMEVDMjc1OSI+IDx4bXBNTTpIaXN0b3J5PiA8cmRmOlNlcT4gPHJkZjpsaSBzdEV2dDphY3Rpb249ImNyZWF0ZWQiIHN0RXZ0Omluc3RhbmNlSUQ9InhtcC5paWQ6Rjg3RjExNzQwNzIwNjgxMUIwRkZEMTFDQjI5QUNGQTAiIHN0RXZ0OndoZW49IjIwMTUtMDMtMTNUMTQ6NTM6NTgtMDQ6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDUzQgTWFjaW50b3NoIi8+IDxyZGY6bGkgc3RFdnQ6YWN0aW9uPSJzYXZlZCIgc3RFdnQ6aW5zdGFuY2VJRD0ieG1wLmlpZDpGOTdGMTE3NDA3MjA2ODExQjBGRkQxMUNCMjlBQ0ZBMCIgc3RFdnQ6d2hlbj0iMjAxNS0wMy0xM1QxNDo1Mzo1OC0wNDowMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIENTNCBNYWNpbnRvc2giIHN0RXZ0OmNoYW5nZWQ9Ii8iLz4gPC9yZGY6U2VxPiA8L3htcE1NOkhpc3Rvcnk+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgIDw/eHBhY2tldCBlbmQ9InciPz7/7gAOQWRvYmUAZEAAAAAB/9sAhAABAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAQEBAgICAgICAgICAgIDAwMDAwMDAwMDAQEBAQEBAQEBAQECAgECAgMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMD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\',
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
