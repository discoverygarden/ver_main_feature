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
