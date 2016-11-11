<?php
/**
 * @file
 * ejemplos_de_contenidos_compuestos.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ejemplos_de_contenidos_compuestos_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Guías de recomendaciones para pacientes',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'main_information',
  'language' => 'es',
  'created' => 1475512915,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '56aaf042-70a9-49c2-be76-6514d4e0b635',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Estas guías tienen como objetivo la mejora de la calidad de la información que reciben los pacientes y pretenden proporcionar a los pacientes una información clara y completa sobre la patología que presentan y los autocuidados que deben aplicarse, en su domicilio, con objeto de preservar y mejorar su estado de salud y evitar así posibles recaídas<br />
Todas ellas están redactadas en un lenguaje sencillo y próximo al paciente, para facilitar su comprensión y que le resulten útiles.</p>

<p>La selección de las guías se ha realizado teniendo en cuenta el número de altas hospitalarias, los procesos de impacto social, las patologías con alto índice de reingreso, los procedimientos más habituales y, finalmente, patologías o situaciones en las que los autocuidados tienen un papel fundamental.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_categories' => array(
    'und' => array(
      0 => array(
        'target_id' => '67716990-14ac-4b3b-b225-edacc3565038',
        'uuid' => '67716990-14ac-4b3b-b225-edacc3565038',
      ),
    ),
  ),
  'field_enjoy_category' => array(),
  'field_files' => array(),
  'field_formalities_reference' => array(),
  'field_invest_category' => array(),
  'field_live_category' => array(
    'und' => array(
      0 => array(
        'target_id' => '59548207-c840-45ce-92a1-d880b2d3a024',
        'uuid' => '59548207-c840-45ce-92a1-d880b2d3a024',
      ),
      1 => array(
        'target_id' => 'f7017a39-f1b6-4311-bf4b-89ff4ce103e4',
        'uuid' => 'f7017a39-f1b6-4311-bf4b-89ff4ce103e4',
      ),
    ),
  ),
  'field_paragraphs' => array(
    'und' => array(
      0 => array(
        'value' => 206,
        'revision_id' => 206,
      ),
      1 => array(
        'value' => 208,
        'revision_id' => 208,
      ),
      2 => array(
        'value' => 220,
        'revision_id' => 220,
      ),
      3 => array(
        'value' => 214,
        'revision_id' => 214,
      ),
    ),
  ),
  'field_publications_reference' => array(),
  'field_regulations_reference' => array(),
  'field_short_description' => array(
    'und' => array(
      0 => array(
        'value' => ' La Consejería de Sanidad ha elaborado, coordinado y editado Guías de Recomendaciones para los Pacientes, con la colaboración de distintas Asociaciones, Sociedades científicas y otros organismos del sector sanitario.',
        'format' => NULL,
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '1cd6819c-6ae1-489d-a57d-fcbfaaee1067',
        'uuid' => '1cd6819c-6ae1-489d-a57d-fcbfaaee1067',
      ),
    ),
  ),
  'field_images' => array(
    'und' => array(
      0 => array(
        'fid' => 86,
        'filename' => 'enfermeria.jpg',
        'uri' => 'public://enfermeria.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 135472,
        'status' => 1,
        'timestamp' => 1475512747,
        'type' => 'image',
        'uuid' => '4c6720c9-522f-4848-a6c1-f99d020263f6',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 758,
          'width' => 1200,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 758,
        'width' => 1200,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      1 => array(
        'fid' => 87,
        'filename' => 'salud-manzana.jpg',
        'uri' => 'public://salud-manzana.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 158413,
        'status' => 1,
        'timestamp' => 1475512806,
        'type' => 'image',
        'uuid' => 'c475b3f9-cd51-4d99-8469-14788753d335',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1080,
          'width' => 1920,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 1080,
        'width' => 1920,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      2 => array(
        'fid' => 85,
        'filename' => 'sl.jpg',
        'uri' => 'public://sl.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 1425346,
        'status' => 1,
        'timestamp' => 1475512696,
        'type' => 'image',
        'uuid' => 'b5bf28b4-c54b-43ee-97a6-30fc781f9ba5',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1154,
          'width' => 1734,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 1154,
        'width' => 1734,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      3 => array(
        'fid' => 89,
        'filename' => '3_2.jpg',
        'uri' => 'public://3_2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 364878,
        'status' => 1,
        'timestamp' => 1475512886,
        'type' => 'image',
        'uuid' => '9399e8f0-6cd4-4eed-b2e5-dad47e47c860',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1349,
          'width' => 3110,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 1349,
        'width' => 3110,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      4 => array(
        'fid' => 88,
        'filename' => 'alimentos-para-una-buena-salud-cardiaca-1.jpg',
        'uri' => 'public://alimentos-para-una-buena-salud-cardiaca-1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 326017,
        'status' => 1,
        'timestamp' => 1475512855,
        'type' => 'image',
        'uuid' => 'e1b63086-94eb-49f1-a3cb-72289ea00350',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 840,
          'width' => 1260,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 840,
        'width' => 1260,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      5 => array(
        'fid' => 93,
        'filename' => 'satellite.jpg',
        'uri' => 'public://satellite.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 10632,
        'status' => 1,
        'timestamp' => 1475577473,
        'type' => 'image',
        'uuid' => '06e9bdd2-b265-4caf-af10-f263b4d3b1a2',
        'field_file_image_alt_text' => array(
          'und' => array(
            0 => array(
              'value' => 'fdfsdf',
              'format' => NULL,
            ),
          ),
        ),
        'field_file_image_title_text' => array(
          'und' => array(
            0 => array(
              'value' => 'fdsfsdf',
              'format' => NULL,
            ),
          ),
        ),
        'field_link' => array(
          'und' => array(
            0 => array(
              'url' => 'madrid.og',
              'title' => 'fsdf',
              'attributes' => array(
                'target' => 0,
              ),
            ),
          ),
        ),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 108,
          'width' => 108,
        ),
        'alt' => 'fdfsdf',
        'title' => 'fdsfsdf',
        'height' => 108,
        'width' => 108,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_counselings' => array(
    'und' => array(
      0 => array(
        'target_id' => '802e8074-a84f-42f1-9cbd-73522de97c61',
        'uuid' => '802e8074-a84f-42f1-9cbd-73522de97c61',
      ),
      1 => array(
        'target_id' => '4b96b2da-b789-4111-b572-b53d3a3edbd6',
        'uuid' => '4b96b2da-b789-4111-b572-b53d3a3edbd6',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-10-03 18:41:55 +0200',
  'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
);
  $nodes[] = array(
  'title' => 'Adopción internacional',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'main_information',
  'language' => 'es',
  'created' => 1476779635,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '706f0e99-254e-4212-8201-cc1c74736410',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>La adopción internacional es una medida subsidiaria de protección a la infancia por la cual, un niño en desamparo y declarado adoptable, que no puede ser adoptado o atendido adecuadamente en su país, es adoptado por una familia que reside en el extranjero y se desplaza con ella, para integrarse y vivir en su nuevo hogar y sociedad.</p>

<p>Su carácter subsidiario determina que sea la última que aplican los organismos extranjeros encargados de la protección de menores para solucionar las situaciones de dificultad que sufre la infancia en sus países. De este modo, que la adopción esté indicada desde el punto de vista legal y técnico determina tanto el tipo de circunstancias de los niños y niñas que van a ser propuestos para la adopción, como su número, siendo muchos menos de los que se pudiera imaginar, pues no se corresponde con la gran cantidad de menores que se enfrentan a serias dificultades.</p>

<p>No es la solución para todos los niños pobres o para los niños cuyas familias tienen problemas para cuidarlos y educarlos adecuadamente, sino sólo para aquellos cuyo interés superior exige una solución permanente fuera de su familia, que no ha podido ofrecérsele en su entorno más cercano.</p>
',
        'summary' => '<p>La adopción internacional es una medida subsidiaria de protección a la infancia por la cual, un niño en desamparo y declarado adoptable, que no puede ser adoptado o atendido adecuadamente en su país, es adoptado por una familia que reside en el extranjero y se desplaza con ella, para integrarse y vivir en su nuevo hogar y sociedad.</p>
',
        'format' => 'filtered_html',
        'safe_summary' => '<p>La adopción internacional es una medida subsidiaria de protección a la infancia por la cual, un niño en desamparo y declarado adoptable, que no puede ser adoptado o atendido adecuadamente en su país, es adoptado por una familia que reside en el extranjero y se desplaza con ella, para integrarse y vivir en su nuevo hogar y sociedad.</p>
',
      ),
    ),
  ),
  'field_categories' => array(
    'und' => array(
      0 => array(
        'target_id' => '9a7cceed-c0aa-4709-b632-0c52f5889897',
        'uuid' => '9a7cceed-c0aa-4709-b632-0c52f5889897',
      ),
    ),
  ),
  'field_enjoy_category' => array(),
  'field_files' => array(
    'und' => array(
      0 => array(
        'fid' => 123,
        'filename' => 'Esquema del proceso de adopción',
        'uri' => 'public://proceso_de_adopcion.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 150055,
        'status' => 1,
        'timestamp' => 1476787376,
        'type' => 'document',
        'uuid' => 'de43071a-3416-4854-90d0-6c41342b2fe6',
        'metatags' => array(
          'und' => array(
            'title' => array(
              'value' => '[current-page:title] | [current-page:pager][site:name]',
              'default' => '[current-page:title] | [current-page:pager][site:name]',
            ),
            'description' => array(
              'value' => '',
            ),
            'abstract' => array(
              'value' => '',
            ),
            'keywords' => array(
              'value' => '',
            ),
            'robots' => array(
              'value' => array(
                'index' => 0,
                'follow' => 0,
                'noindex' => 0,
                'nofollow' => 0,
                'noarchive' => 0,
                'nosnippet' => 0,
                'noodp' => 0,
                'noydir' => 0,
                'noimageindex' => 0,
                'notranslate' => 0,
              ),
            ),
            'news_keywords' => array(
              'value' => '',
            ),
            'standout' => array(
              'value' => '',
            ),
            'rating' => array(
              'value' => '',
            ),
            'referrer' => array(
              'value' => '',
            ),
            'rights' => array(
              'value' => '',
            ),
            'image_src' => array(
              'value' => '',
            ),
            'canonical' => array(
              'value' => '[current-page:url:absolute]',
              'default' => '[current-page:url:absolute]',
            ),
            'shortlink' => array(
              'value' => '[current-page:url:unaliased]',
              'default' => '[current-page:url:unaliased]',
            ),
            'publisher' => array(
              'value' => '',
            ),
            'author' => array(
              'value' => '',
            ),
            'original-source' => array(
              'value' => '',
            ),
            'prev' => array(
              'value' => '',
            ),
            'next' => array(
              'value' => '',
            ),
            'content-language' => array(
              'value' => '',
            ),
            'geo.position' => array(
              'value' => '',
            ),
            'geo.placename' => array(
              'value' => '',
            ),
            'geo.region' => array(
              'value' => '',
            ),
            'icbm' => array(
              'value' => '',
            ),
            'refresh' => array(
              'value' => '',
            ),
            'revisit-after' => array(
              'value' => '',
              'period' => '',
            ),
            'pragma' => array(
              'value' => '',
            ),
            'cache-control' => array(
              'value' => '',
            ),
            'expires' => array(
              'value' => '',
            ),
            'og:type' => array(
              'value' => 'article',
              'default' => 'article',
            ),
            'og:url' => array(
              'value' => '[current-page:url:absolute]',
              'default' => '[current-page:url:absolute]',
            ),
            'og:title' => array(
              'value' => '[current-page:title]',
              'default' => '[current-page:title]',
            ),
            'og:determiner' => array(
              'value' => '',
            ),
            'og:description' => array(
              'value' => '',
            ),
            'og:updated_time' => array(
              'value' => '',
            ),
            'og:see_also' => array(
              'value' => '',
            ),
            'og:image' => array(
              'value' => '',
            ),
            'og:image:url' => array(
              'value' => '',
            ),
            'og:image:secure_url' => array(
              'value' => '',
            ),
            'og:image:type' => array(
              'value' => '',
            ),
            'og:image:width' => array(
              'value' => '',
            ),
            'og:image:height' => array(
              'value' => '',
            ),
            'og:latitude' => array(
              'value' => '',
            ),
            'og:longitude' => array(
              'value' => '',
            ),
            'og:street_address' => array(
              'value' => '',
            ),
            'og:locality' => array(
              'value' => '',
            ),
            'og:region' => array(
              'value' => '',
            ),
            'og:postal_code' => array(
              'value' => '',
            ),
            'og:country_name' => array(
              'value' => '',
            ),
            'og:email' => array(
              'value' => '',
            ),
            'og:phone_number' => array(
              'value' => '',
            ),
            'og:fax_number' => array(
              'value' => '',
            ),
            'og:locale' => array(
              'value' => '',
            ),
            'og:locale:alternate' => array(
              'value' => '',
            ),
            'article:author' => array(
              'value' => '',
            ),
            'article:publisher' => array(
              'value' => '',
            ),
            'article:section' => array(
              'value' => '',
            ),
            'article:tag' => array(
              'value' => '',
            ),
            'article:published_time' => array(
              'value' => '',
            ),
            'article:modified_time' => array(
              'value' => '',
            ),
            'article:expiration_time' => array(
              'value' => '',
            ),
            'profile:first_name' => array(
              'value' => '',
            ),
            'profile:last_name' => array(
              'value' => '',
            ),
            'profile:username' => array(
              'value' => '',
            ),
            'profile:gender' => array(
              'value' => '',
            ),
            'og:audio' => array(
              'value' => '',
            ),
            'og:audio:secure_url' => array(
              'value' => '',
            ),
            'og:audio:type' => array(
              'value' => '',
            ),
            'book:author' => array(
              'value' => '',
            ),
            'book:isbn' => array(
              'value' => '',
            ),
            'book:release_date' => array(
              'value' => '',
            ),
            'book:tag' => array(
              'value' => '',
            ),
            'og:video:url' => array(
              'value' => '',
            ),
            'og:video:secure_url' => array(
              'value' => '',
            ),
            'og:video:width' => array(
              'value' => '',
            ),
            'og:video:height' => array(
              'value' => '',
            ),
            'og:video:type' => array(
              'value' => '',
            ),
            'video:actor' => array(
              'value' => '',
            ),
            'video:actor:role' => array(
              'value' => '',
            ),
            'video:director' => array(
              'value' => '',
            ),
            'video:writer' => array(
              'value' => '',
            ),
            'video:duration' => array(
              'value' => '',
            ),
            'video:release_date' => array(
              'value' => '',
            ),
            'video:tag' => array(
              'value' => '',
            ),
            'video:series' => array(
              'value' => '',
            ),
          ),
        ),
        'rdf_mapping' => array(),
        'path' => array(
          'pathauto' => 1,
        ),
        'metadata' => array(),
        'alt' => '',
        'title' => '',
        'display' => 1,
        'description' => '',
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_formalities_reference' => array(),
  'field_invest_category' => array(),
  'field_live_category' => array(
    'und' => array(
      0 => array(
        'target_id' => '9a7cceed-c0aa-4709-b632-0c52f5889897',
        'uuid' => '9a7cceed-c0aa-4709-b632-0c52f5889897',
      ),
    ),
  ),
  'field_paragraphs' => array(
    'und' => array(
      0 => array(
        'value' => 406,
        'revision_id' => 406,
      ),
      1 => array(
        'value' => 435,
        'revision_id' => 435,
      ),
      2 => array(
        'value' => 421,
        'revision_id' => 421,
      ),
      3 => array(
        'value' => 427,
        'revision_id' => 427,
      ),
      4 => array(
        'value' => 431,
        'revision_id' => 431,
      ),
      5 => array(
        'value' => 416,
        'revision_id' => 416,
      ),
    ),
  ),
  'field_publications_reference' => array(),
  'field_regulations_reference' => array(),
  'field_short_description' => array(
    'und' => array(
      0 => array(
        'value' => 'La adopción internacional es una medida subsidiaria de protección a la infancia por la cual, un niño en desamparo y declarado adoptable, que no puede ser adoptado o atendido adecuadamente en su país, es adoptado por una familia que reside en el extranjero y se desplaza con ella, para integrarse y vivir en su nuevo hogar y sociedad.',
        'format' => NULL,
      ),
    ),
  ),
  'field_tags' => array(),
  'field_images' => array(
    'und' => array(
      0 => array(
        'fid' => 45,
        'filename' => 'rp_consejo_2.jpg',
        'uri' => 'public://adop_internac2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 84039,
        'status' => 1,
        'timestamp' => 1476790193,
        'type' => 'image',
        'uuid' => '63fd075c-e2f0-42ff-88b1-ac81ba8ee0c5',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(
          'und' => array(
            'title' => array(
              'value' => '[current-page:title] | [current-page:pager][site:name]',
              'default' => '[current-page:title] | [current-page:pager][site:name]',
            ),
            'description' => array(
              'value' => '',
            ),
            'abstract' => array(
              'value' => '',
            ),
            'keywords' => array(
              'value' => '',
            ),
            'robots' => array(
              'value' => array(
                'index' => 0,
                'follow' => 0,
                'noindex' => 0,
                'nofollow' => 0,
                'noarchive' => 0,
                'nosnippet' => 0,
                'noodp' => 0,
                'noydir' => 0,
                'noimageindex' => 0,
                'notranslate' => 0,
              ),
            ),
            'news_keywords' => array(
              'value' => '',
            ),
            'standout' => array(
              'value' => '',
            ),
            'rating' => array(
              'value' => '',
            ),
            'referrer' => array(
              'value' => '',
            ),
            'rights' => array(
              'value' => '',
            ),
            'image_src' => array(
              'value' => '',
            ),
            'canonical' => array(
              'value' => '[current-page:url:absolute]',
              'default' => '[current-page:url:absolute]',
            ),
            'shortlink' => array(
              'value' => '[current-page:url:unaliased]',
              'default' => '[current-page:url:unaliased]',
            ),
            'publisher' => array(
              'value' => '',
            ),
            'author' => array(
              'value' => '',
            ),
            'original-source' => array(
              'value' => '',
            ),
            'prev' => array(
              'value' => '',
            ),
            'next' => array(
              'value' => '',
            ),
            'content-language' => array(
              'value' => '',
            ),
            'geo.position' => array(
              'value' => '',
            ),
            'geo.placename' => array(
              'value' => '',
            ),
            'geo.region' => array(
              'value' => '',
            ),
            'icbm' => array(
              'value' => '',
            ),
            'refresh' => array(
              'value' => '',
            ),
            'revisit-after' => array(
              'value' => '',
              'period' => '',
            ),
            'pragma' => array(
              'value' => '',
            ),
            'cache-control' => array(
              'value' => '',
            ),
            'expires' => array(
              'value' => '',
            ),
            'og:type' => array(
              'value' => 'article',
              'default' => 'article',
            ),
            'og:url' => array(
              'value' => '[current-page:url:absolute]',
              'default' => '[current-page:url:absolute]',
            ),
            'og:title' => array(
              'value' => '[current-page:title]',
              'default' => '[current-page:title]',
            ),
            'og:determiner' => array(
              'value' => '',
            ),
            'og:description' => array(
              'value' => '',
            ),
            'og:updated_time' => array(
              'value' => '',
            ),
            'og:see_also' => array(
              'value' => '',
            ),
            'og:image' => array(
              'value' => '',
            ),
            'og:image:url' => array(
              'value' => '',
            ),
            'og:image:secure_url' => array(
              'value' => '',
            ),
            'og:image:type' => array(
              'value' => '',
            ),
            'og:image:width' => array(
              'value' => '',
            ),
            'og:image:height' => array(
              'value' => '',
            ),
            'og:latitude' => array(
              'value' => '',
            ),
            'og:longitude' => array(
              'value' => '',
            ),
            'og:street_address' => array(
              'value' => '',
            ),
            'og:locality' => array(
              'value' => '',
            ),
            'og:region' => array(
              'value' => '',
            ),
            'og:postal_code' => array(
              'value' => '',
            ),
            'og:country_name' => array(
              'value' => '',
            ),
            'og:email' => array(
              'value' => '',
            ),
            'og:phone_number' => array(
              'value' => '',
            ),
            'og:fax_number' => array(
              'value' => '',
            ),
            'og:locale' => array(
              'value' => '',
            ),
            'og:locale:alternate' => array(
              'value' => '',
            ),
            'article:author' => array(
              'value' => '',
            ),
            'article:publisher' => array(
              'value' => '',
            ),
            'article:section' => array(
              'value' => '',
            ),
            'article:tag' => array(
              'value' => '',
            ),
            'article:published_time' => array(
              'value' => '',
            ),
            'article:modified_time' => array(
              'value' => '',
            ),
            'article:expiration_time' => array(
              'value' => '',
            ),
            'profile:first_name' => array(
              'value' => '',
            ),
            'profile:last_name' => array(
              'value' => '',
            ),
            'profile:username' => array(
              'value' => '',
            ),
            'profile:gender' => array(
              'value' => '',
            ),
            'og:audio' => array(
              'value' => '',
            ),
            'og:audio:secure_url' => array(
              'value' => '',
            ),
            'og:audio:type' => array(
              'value' => '',
            ),
            'book:author' => array(
              'value' => '',
            ),
            'book:isbn' => array(
              'value' => '',
            ),
            'book:release_date' => array(
              'value' => '',
            ),
            'book:tag' => array(
              'value' => '',
            ),
            'og:video:url' => array(
              'value' => '',
            ),
            'og:video:secure_url' => array(
              'value' => '',
            ),
            'og:video:width' => array(
              'value' => '',
            ),
            'og:video:height' => array(
              'value' => '',
            ),
            'og:video:type' => array(
              'value' => '',
            ),
            'video:actor' => array(
              'value' => '',
            ),
            'video:actor:role' => array(
              'value' => '',
            ),
            'video:director' => array(
              'value' => '',
            ),
            'video:writer' => array(
              'value' => '',
            ),
            'video:duration' => array(
              'value' => '',
            ),
            'video:release_date' => array(
              'value' => '',
            ),
            'video:tag' => array(
              'value' => '',
            ),
            'video:series' => array(
              'value' => '',
            ),
          ),
        ),
        'rdf_mapping' => array(),
        'path' => array(
          'pathauto' => 1,
        ),
        'metadata' => array(
          'height' => 300,
          'width' => 1170,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 300,
        'width' => 1170,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_counselings' => array(
    'und' => array(
      0 => array(
        'target_id' => '5fc94676-0d7d-4dad-b333-f22a83adf5ba',
        'uuid' => '5fc94676-0d7d-4dad-b333-f22a83adf5ba',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-10-18 10:33:55 +0200',
  'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
);
  $nodes[] = array(
  'title' => 'información práctica validacion paragraph .',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'main_information',
  'language' => 'es',
  'created' => 1475589498,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7e503d83-e1dd-4137-9933-e74f05e17941',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in r<strong>eprehenderit</strong> in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt<u> mollit anim id est la</u>borum.</p>

<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_categories' => array(
    'und' => array(
      0 => array(
        'target_id' => '67716990-14ac-4b3b-b225-edacc3565038',
        'uuid' => '67716990-14ac-4b3b-b225-edacc3565038',
      ),
    ),
  ),
  'field_enjoy_category' => array(),
  'field_files' => array(
    'und' => array(
      0 => array(
        'fid' => 26,
        'filename' => 'imagefield_voirlm.gif',
        'uri' => 'public://satellite_1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 7136,
        'status' => 1,
        'timestamp' => 1475756686,
        'type' => 'image',
        'uuid' => '340bfdcb-55b6-4abd-be42-a535b52e2b55',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(
          'und' => array(
            'title' => array(
              'value' => '[current-page:title] | [current-page:pager][site:name]',
              'default' => '[current-page:title] | [current-page:pager][site:name]',
            ),
            'description' => array(
              'value' => '',
            ),
            'abstract' => array(
              'value' => '',
            ),
            'keywords' => array(
              'value' => '',
            ),
            'robots' => array(
              'value' => array(
                'index' => 0,
                'follow' => 0,
                'noindex' => 0,
                'nofollow' => 0,
                'noarchive' => 0,
                'nosnippet' => 0,
                'noodp' => 0,
                'noydir' => 0,
                'noimageindex' => 0,
                'notranslate' => 0,
              ),
            ),
            'news_keywords' => array(
              'value' => '',
            ),
            'standout' => array(
              'value' => '',
            ),
            'rating' => array(
              'value' => '',
            ),
            'referrer' => array(
              'value' => '',
            ),
            'rights' => array(
              'value' => '',
            ),
            'image_src' => array(
              'value' => '',
            ),
            'canonical' => array(
              'value' => '[current-page:url:absolute]',
              'default' => '[current-page:url:absolute]',
            ),
            'shortlink' => array(
              'value' => '[current-page:url:unaliased]',
              'default' => '[current-page:url:unaliased]',
            ),
            'publisher' => array(
              'value' => '',
            ),
            'author' => array(
              'value' => '',
            ),
            'original-source' => array(
              'value' => '',
            ),
            'prev' => array(
              'value' => '',
            ),
            'next' => array(
              'value' => '',
            ),
            'content-language' => array(
              'value' => '',
            ),
            'geo.position' => array(
              'value' => '',
            ),
            'geo.placename' => array(
              'value' => '',
            ),
            'geo.region' => array(
              'value' => '',
            ),
            'icbm' => array(
              'value' => '',
            ),
            'refresh' => array(
              'value' => '',
            ),
            'revisit-after' => array(
              'value' => '',
              'period' => '',
            ),
            'pragma' => array(
              'value' => '',
            ),
            'cache-control' => array(
              'value' => '',
            ),
            'expires' => array(
              'value' => '',
            ),
            'og:type' => array(
              'value' => 'article',
              'default' => 'article',
            ),
            'og:url' => array(
              'value' => '[current-page:url:absolute]',
              'default' => '[current-page:url:absolute]',
            ),
            'og:title' => array(
              'value' => '[current-page:title]',
              'default' => '[current-page:title]',
            ),
            'og:determiner' => array(
              'value' => '',
            ),
            'og:description' => array(
              'value' => '',
            ),
            'og:updated_time' => array(
              'value' => '',
            ),
            'og:see_also' => array(
              'value' => '',
            ),
            'og:image' => array(
              'value' => '',
            ),
            'og:image:url' => array(
              'value' => '',
            ),
            'og:image:secure_url' => array(
              'value' => '',
            ),
            'og:image:type' => array(
              'value' => '',
            ),
            'og:image:width' => array(
              'value' => '',
            ),
            'og:image:height' => array(
              'value' => '',
            ),
            'og:latitude' => array(
              'value' => '',
            ),
            'og:longitude' => array(
              'value' => '',
            ),
            'og:street_address' => array(
              'value' => '',
            ),
            'og:locality' => array(
              'value' => '',
            ),
            'og:region' => array(
              'value' => '',
            ),
            'og:postal_code' => array(
              'value' => '',
            ),
            'og:country_name' => array(
              'value' => '',
            ),
            'og:email' => array(
              'value' => '',
            ),
            'og:phone_number' => array(
              'value' => '',
            ),
            'og:fax_number' => array(
              'value' => '',
            ),
            'og:locale' => array(
              'value' => '',
            ),
            'og:locale:alternate' => array(
              'value' => '',
            ),
            'article:author' => array(
              'value' => '',
            ),
            'article:publisher' => array(
              'value' => '',
            ),
            'article:section' => array(
              'value' => '',
            ),
            'article:tag' => array(
              'value' => '',
            ),
            'article:published_time' => array(
              'value' => '',
            ),
            'article:modified_time' => array(
              'value' => '',
            ),
            'article:expiration_time' => array(
              'value' => '',
            ),
            'profile:first_name' => array(
              'value' => '',
            ),
            'profile:last_name' => array(
              'value' => '',
            ),
            'profile:username' => array(
              'value' => '',
            ),
            'profile:gender' => array(
              'value' => '',
            ),
            'og:audio' => array(
              'value' => '',
            ),
            'og:audio:secure_url' => array(
              'value' => '',
            ),
            'og:audio:type' => array(
              'value' => '',
            ),
            'book:author' => array(
              'value' => '',
            ),
            'book:isbn' => array(
              'value' => '',
            ),
            'book:release_date' => array(
              'value' => '',
            ),
            'book:tag' => array(
              'value' => '',
            ),
            'og:video:url' => array(
              'value' => '',
            ),
            'og:video:secure_url' => array(
              'value' => '',
            ),
            'og:video:width' => array(
              'value' => '',
            ),
            'og:video:height' => array(
              'value' => '',
            ),
            'og:video:type' => array(
              'value' => '',
            ),
            'video:actor' => array(
              'value' => '',
            ),
            'video:actor:role' => array(
              'value' => '',
            ),
            'video:director' => array(
              'value' => '',
            ),
            'video:writer' => array(
              'value' => '',
            ),
            'video:duration' => array(
              'value' => '',
            ),
            'video:release_date' => array(
              'value' => '',
            ),
            'video:tag' => array(
              'value' => '',
            ),
            'video:series' => array(
              'value' => '',
            ),
          ),
        ),
        'rdf_mapping' => array(),
        'path' => array(
          'pathauto' => 1,
        ),
        'metadata' => array(
          'height' => 108,
          'width' => 108,
        ),
        'alt' => '',
        'title' => '',
        'height' => 108,
        'width' => 108,
        'display' => 1,
        'description' => '',
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      1 => array(
        'fid' => 32,
        'filename' => 'imagefield_DCINBp.png',
        'uri' => 'public:///imagefield_DCINBp.png',
        'filemime' => 'image/png',
        'filesize' => 1303,
        'status' => 1,
        'timestamp' => 1474296811,
        'type' => 'image',
        'uuid' => 'ee9d3207-2c56-4a37-8cab-68339d9541a2',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 381,
          'width' => 239,
        ),
        'alt' => '',
        'title' => '',
        'height' => 381,
        'width' => 239,
        'display' => 1,
        'description' => '',
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_formalities_reference' => array(),
  'field_invest_category' => array(),
  'field_live_category' => array(
    'und' => array(
      0 => array(
        'target_id' => '67716990-14ac-4b3b-b225-edacc3565038',
        'uuid' => '67716990-14ac-4b3b-b225-edacc3565038',
      ),
    ),
  ),
  'field_paragraphs' => array(
    'und' => array(
      0 => array(
        'value' => 231,
        'revision_id' => 231,
      ),
      1 => array(
        'value' => 233,
        'revision_id' => 233,
      ),
      2 => array(
        'value' => 235,
        'revision_id' => 235,
      ),
      3 => array(
        'value' => 237,
        'revision_id' => 237,
      ),
      4 => array(
        'value' => 244,
        'revision_id' => 244,
      ),
      5 => array(
        'value' => 239,
        'revision_id' => 239,
      ),
      6 => array(
        'value' => 246,
        'revision_id' => 246,
      ),
      7 => array(
        'value' => 258,
        'revision_id' => 258,
      ),
      8 => array(
        'value' => 260,
        'revision_id' => 260,
      ),
      9 => array(
        'value' => 262,
        'revision_id' => 262,
      ),
      10 => array(
        'value' => 264,
        'revision_id' => 264,
      ),
      11 => array(
        'value' => 273,
        'revision_id' => 273,
      ),
      12 => array(
        'value' => 277,
        'revision_id' => 277,
      ),
      13 => array(
        'value' => 342,
        'revision_id' => 342,
      ),
      14 => array(
        'value' => 344,
        'revision_id' => 344,
      ),
      15 => array(
        'value' => 346,
        'revision_id' => 346,
      ),
      16 => array(
        'value' => 353,
        'revision_id' => 353,
      ),
      17 => array(
        'value' => 354,
        'revision_id' => 354,
      ),
    ),
  ),
  'field_publications_reference' => array(
    'und' => array(
      0 => array(
        'target_id' => '88bebb99-c441-4e99-9249-a610f4843551',
        'uuid' => '88bebb99-c441-4e99-9249-a610f4843551',
      ),
      1 => array(
        'target_id' => '30bc265f-a4a5-4d2a-9120-ccfeb51fe0b2',
        'uuid' => '30bc265f-a4a5-4d2a-9120-ccfeb51fe0b2',
      ),
    ),
  ),
  'field_regulations_reference' => array(),
  'field_short_description' => array(),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 'ffdd0a62-4a52-4d05-8526-a5f857485168',
        'uuid' => 'ffdd0a62-4a52-4d05-8526-a5f857485168',
      ),
      1 => array(
        'tid' => '1ed4050c-8417-420f-9248-d6f09989d6a5',
        'uuid' => '1ed4050c-8417-420f-9248-d6f09989d6a5',
      ),
      2 => array(
        'tid' => '54c9e124-0410-4f8f-bbe2-80c1cc4b79aa',
        'uuid' => '54c9e124-0410-4f8f-bbe2-80c1cc4b79aa',
      ),
      3 => array(
        'tid' => '407417ac-6adb-4530-ab8a-72218d3ebe91',
        'uuid' => '407417ac-6adb-4530-ab8a-72218d3ebe91',
      ),
    ),
  ),
  'field_images' => array(
    'und' => array(
      0 => array(
        'fid' => 45,
        'filename' => 'rp_consejo_2.jpg',
        'uri' => 'public://adop_internac2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 84039,
        'status' => 1,
        'timestamp' => 1476790193,
        'type' => 'image',
        'uuid' => '63fd075c-e2f0-42ff-88b1-ac81ba8ee0c5',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(
          'und' => array(
            'title' => array(
              'value' => '[current-page:title] | [current-page:pager][site:name]',
              'default' => '[current-page:title] | [current-page:pager][site:name]',
            ),
            'description' => array(
              'value' => '',
            ),
            'abstract' => array(
              'value' => '',
            ),
            'keywords' => array(
              'value' => '',
            ),
            'robots' => array(
              'value' => array(
                'index' => 0,
                'follow' => 0,
                'noindex' => 0,
                'nofollow' => 0,
                'noarchive' => 0,
                'nosnippet' => 0,
                'noodp' => 0,
                'noydir' => 0,
                'noimageindex' => 0,
                'notranslate' => 0,
              ),
            ),
            'news_keywords' => array(
              'value' => '',
            ),
            'standout' => array(
              'value' => '',
            ),
            'rating' => array(
              'value' => '',
            ),
            'referrer' => array(
              'value' => '',
            ),
            'rights' => array(
              'value' => '',
            ),
            'image_src' => array(
              'value' => '',
            ),
            'canonical' => array(
              'value' => '[current-page:url:absolute]',
              'default' => '[current-page:url:absolute]',
            ),
            'shortlink' => array(
              'value' => '[current-page:url:unaliased]',
              'default' => '[current-page:url:unaliased]',
            ),
            'publisher' => array(
              'value' => '',
            ),
            'author' => array(
              'value' => '',
            ),
            'original-source' => array(
              'value' => '',
            ),
            'prev' => array(
              'value' => '',
            ),
            'next' => array(
              'value' => '',
            ),
            'content-language' => array(
              'value' => '',
            ),
            'geo.position' => array(
              'value' => '',
            ),
            'geo.placename' => array(
              'value' => '',
            ),
            'geo.region' => array(
              'value' => '',
            ),
            'icbm' => array(
              'value' => '',
            ),
            'refresh' => array(
              'value' => '',
            ),
            'revisit-after' => array(
              'value' => '',
              'period' => '',
            ),
            'pragma' => array(
              'value' => '',
            ),
            'cache-control' => array(
              'value' => '',
            ),
            'expires' => array(
              'value' => '',
            ),
            'og:type' => array(
              'value' => 'article',
              'default' => 'article',
            ),
            'og:url' => array(
              'value' => '[current-page:url:absolute]',
              'default' => '[current-page:url:absolute]',
            ),
            'og:title' => array(
              'value' => '[current-page:title]',
              'default' => '[current-page:title]',
            ),
            'og:determiner' => array(
              'value' => '',
            ),
            'og:description' => array(
              'value' => '',
            ),
            'og:updated_time' => array(
              'value' => '',
            ),
            'og:see_also' => array(
              'value' => '',
            ),
            'og:image' => array(
              'value' => '',
            ),
            'og:image:url' => array(
              'value' => '',
            ),
            'og:image:secure_url' => array(
              'value' => '',
            ),
            'og:image:type' => array(
              'value' => '',
            ),
            'og:image:width' => array(
              'value' => '',
            ),
            'og:image:height' => array(
              'value' => '',
            ),
            'og:latitude' => array(
              'value' => '',
            ),
            'og:longitude' => array(
              'value' => '',
            ),
            'og:street_address' => array(
              'value' => '',
            ),
            'og:locality' => array(
              'value' => '',
            ),
            'og:region' => array(
              'value' => '',
            ),
            'og:postal_code' => array(
              'value' => '',
            ),
            'og:country_name' => array(
              'value' => '',
            ),
            'og:email' => array(
              'value' => '',
            ),
            'og:phone_number' => array(
              'value' => '',
            ),
            'og:fax_number' => array(
              'value' => '',
            ),
            'og:locale' => array(
              'value' => '',
            ),
            'og:locale:alternate' => array(
              'value' => '',
            ),
            'article:author' => array(
              'value' => '',
            ),
            'article:publisher' => array(
              'value' => '',
            ),
            'article:section' => array(
              'value' => '',
            ),
            'article:tag' => array(
              'value' => '',
            ),
            'article:published_time' => array(
              'value' => '',
            ),
            'article:modified_time' => array(
              'value' => '',
            ),
            'article:expiration_time' => array(
              'value' => '',
            ),
            'profile:first_name' => array(
              'value' => '',
            ),
            'profile:last_name' => array(
              'value' => '',
            ),
            'profile:username' => array(
              'value' => '',
            ),
            'profile:gender' => array(
              'value' => '',
            ),
            'og:audio' => array(
              'value' => '',
            ),
            'og:audio:secure_url' => array(
              'value' => '',
            ),
            'og:audio:type' => array(
              'value' => '',
            ),
            'book:author' => array(
              'value' => '',
            ),
            'book:isbn' => array(
              'value' => '',
            ),
            'book:release_date' => array(
              'value' => '',
            ),
            'book:tag' => array(
              'value' => '',
            ),
            'og:video:url' => array(
              'value' => '',
            ),
            'og:video:secure_url' => array(
              'value' => '',
            ),
            'og:video:width' => array(
              'value' => '',
            ),
            'og:video:height' => array(
              'value' => '',
            ),
            'og:video:type' => array(
              'value' => '',
            ),
            'video:actor' => array(
              'value' => '',
            ),
            'video:actor:role' => array(
              'value' => '',
            ),
            'video:director' => array(
              'value' => '',
            ),
            'video:writer' => array(
              'value' => '',
            ),
            'video:duration' => array(
              'value' => '',
            ),
            'video:release_date' => array(
              'value' => '',
            ),
            'video:tag' => array(
              'value' => '',
            ),
            'video:series' => array(
              'value' => '',
            ),
          ),
        ),
        'rdf_mapping' => array(),
        'path' => array(
          'pathauto' => 1,
        ),
        'metadata' => array(
          'height' => 300,
          'width' => 1170,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 300,
        'width' => 1170,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      1 => array(
        'fid' => 44,
        'filename' => 'original_57113d3eda2e7.jpg',
        'uri' => 'public://original_57113d3eda2e7.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 1788096,
        'status' => 1,
        'timestamp' => 1474302065,
        'type' => 'image',
        'uuid' => 'bc3c4bb3-3cc1-49d7-9ea9-955ec63829be',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 2427,
          'width' => 3920,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 2427,
        'width' => 3920,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_counselings' => array(
    'und' => array(
      0 => array(
        'target_id' => '0669534a-6482-4242-808a-ac6a0e0c5455',
        'uuid' => '0669534a-6482-4242-808a-ac6a0e0c5455',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-10-04 15:58:18 +0200',
  'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
);
  $nodes[] = array(
  'title' => 'Contenido de prueba 3',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'main_information',
  'language' => 'es',
  'created' => 1475564958,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9b8cd3dd-35f2-4a07-a13d-e2457fc992d5',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Una entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla</p>

<p>para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de</p>

<p>pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de prueba</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_categories' => array(
    'und' => array(
      0 => array(
        'target_id' => '67716990-14ac-4b3b-b225-edacc3565038',
        'uuid' => '67716990-14ac-4b3b-b225-edacc3565038',
      ),
    ),
  ),
  'field_enjoy_category' => array(),
  'field_files' => array(
    'und' => array(
      0 => array(
        'fid' => 82,
        'filename' => '13545958581631.pdf',
        'uri' => 'public://13545958581631.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 480915,
        'status' => 1,
        'timestamp' => 1475511076,
        'type' => 'document',
        'uuid' => '4b0cb4c1-ce91-4c6f-9113-e72b1834de7f',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(),
        'alt' => '',
        'title' => '',
        'display' => 1,
        'description' => '',
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      1 => array(
        'fid' => 100,
        'filename' => 'satellite.jpg',
        'uri' => 'public://satellite_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 7136,
        'status' => 1,
        'timestamp' => 1475662967,
        'type' => 'image',
        'uuid' => '898b6d21-6f49-417e-89b8-85f278bd7ce3',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 108,
          'width' => 108,
        ),
        'alt' => '',
        'title' => '',
        'height' => 108,
        'width' => 108,
        'display' => 1,
        'description' => '',
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_formalities_reference' => array(),
  'field_invest_category' => array(),
  'field_live_category' => array(
    'und' => array(
      0 => array(
        'target_id' => '67716990-14ac-4b3b-b225-edacc3565038',
        'uuid' => '67716990-14ac-4b3b-b225-edacc3565038',
      ),
      1 => array(
        'target_id' => 'ae663596-34b9-44af-8ab7-0a0a28a7bb60',
        'uuid' => 'ae663596-34b9-44af-8ab7-0a0a28a7bb60',
      ),
    ),
  ),
  'field_paragraphs' => array(
    'und' => array(
      0 => array(
        'value' => 225,
        'revision_id' => 225,
      ),
      1 => array(
        'value' => 227,
        'revision_id' => 227,
      ),
    ),
  ),
  'field_publications_reference' => array(),
  'field_regulations_reference' => array(),
  'field_short_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Una entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de pruebaUna entradilla para el contenido de prueba',
        'format' => NULL,
      ),
    ),
  ),
  'field_tags' => array(),
  'field_images' => array(
    'und' => array(
      0 => array(
        'fid' => 80,
        'filename' => 'clody.jpg',
        'uri' => 'public://clody.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 42673,
        'status' => 1,
        'timestamp' => 1475510831,
        'type' => 'image',
        'uuid' => '68dfc490-67f8-4dfb-9afc-c820ec4bb75b',
        'field_file_image_alt_text' => array(
          'und' => array(
            0 => array(
              'value' => 'Banner 1',
              'format' => NULL,
            ),
          ),
        ),
        'field_file_image_title_text' => array(
          'und' => array(
            0 => array(
              'value' => 'Banner 1',
              'format' => NULL,
            ),
          ),
        ),
        'field_link' => array(
          'und' => array(
            0 => array(
              'url' => 'http://www.madrid.org',
              'title' => 'Enlace a uno de los contenidos',
              'attributes' => array(
                'target' => 0,
              ),
            ),
          ),
        ),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 360,
          'width' => 960,
        ),
        'alt' => 'Banner 1',
        'title' => 'Banner 1',
        'height' => 360,
        'width' => 960,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      1 => array(
        'fid' => 81,
        'filename' => 'river.jpg',
        'uri' => 'public://river.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 54211,
        'status' => 1,
        'timestamp' => 1475510908,
        'type' => 'image',
        'uuid' => 'c8bbb121-9adc-4db5-bb92-c272d697f00a',
        'field_file_image_alt_text' => array(
          'und' => array(
            0 => array(
              'value' => 'Banner 2',
              'format' => NULL,
            ),
          ),
        ),
        'field_file_image_title_text' => array(
          'und' => array(
            0 => array(
              'value' => 'Banner 2',
              'format' => NULL,
            ),
          ),
        ),
        'field_link' => array(
          'und' => array(
            0 => array(
              'url' => 'http://www,madrid.org',
              'title' => 'Enlace a un otro contenido',
              'attributes' => array(
                'target' => 0,
              ),
            ),
          ),
        ),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 360,
          'width' => 960,
        ),
        'alt' => 'Banner 2',
        'title' => 'Banner 2',
        'height' => 360,
        'width' => 960,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_counselings' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-10-04 09:09:18 +0200',
  'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
);
  $nodes[] = array(
  'title' => ' Renta Mínima de Inserción',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'main_information',
  'language' => 'es',
  'created' => 1476717649,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a0cb7d0a-2f16-482d-8c27-6c9dfbf99516',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>De esta forma se procura su incorporación al proceso de desarrollo económico y social y se evitan, en todo caso, las formas más&nbsp;severas de exclusión.</p>

<p>En este contexto, la <a href="http://www.madrid.org/wleg/servlet/Servidor?opcion=VerHtml&amp;idnorma=470&amp;word=S&amp;wordperfect=N&amp;pdf=S">Ley 15/2001, de 27 de diciembre, de Renta Mínima de Inserción </a>reconoce a sus ciudadanos un doble derecho social:</p>

<ul>
	<li>El derecho a disponer de medios económicos para hacer frente a las necesidades básicas de la vida, cuando no puedan obtenerlos del empleo o de regímenes de protección social.</li>
	<li>El derecho a recibir apoyos para su inserción laboral y social.</li>
</ul>

<p>Así, dicha Ley regula, en el ámbito de la Comunidad de Madrid, el derecho a <a href="http://www.madrid.org/cs/Satellite?c=CM_InfPractica_FA&amp;cid=1142614927563&amp;idConsejeria=1109266187278&amp;idListConsj=1109265444710&amp;idOrganismo=1109266227679&amp;language=es&amp;pagename=ComunidadMadrid%2FEstructura&amp;pv=1114181637355&amp;sm=1109266100977">la prestación económica denominada&nbsp;Renta Mínima de Inserción</a>&nbsp;y, también, el derecho a obtener unos&nbsp;apoyos personalizados para la inserción&nbsp;que, a su vez,&nbsp;se hace efectivo mediante el acceso a los programas de servicios sociales y de empleo, en el marco de los <a href="http://www.madrid.org/cs/Satellite?c=CM_InfPractica_FA&amp;cid=1142614927563&amp;idConsejeria=1109266187278&amp;idListConsj=1109265444710&amp;idOrganismo=1109266227679&amp;language=es&amp;pagename=ComunidadMadrid%2FEstructura&amp;pv=1114181648333&amp;sm=1109266100977">Programas Individuales de Inserción</a>.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_categories' => array(
    'und' => array(
      0 => array(
        'target_id' => 'f3664b0b-b043-41cb-82b2-8f4da30847bc',
        'uuid' => 'f3664b0b-b043-41cb-82b2-8f4da30847bc',
      ),
    ),
  ),
  'field_enjoy_category' => array(),
  'field_files' => array(),
  'field_formalities_reference' => array(),
  'field_invest_category' => array(),
  'field_live_category' => array(),
  'field_paragraphs' => array(
    'und' => array(
      0 => array(
        'value' => 362,
        'revision_id' => 362,
      ),
      1 => array(
        'value' => 369,
        'revision_id' => 369,
      ),
      2 => array(
        'value' => 380,
        'revision_id' => 380,
      ),
      3 => array(
        'value' => 396,
        'revision_id' => 396,
      ),
      4 => array(
        'value' => 398,
        'revision_id' => 398,
      ),
      5 => array(
        'value' => 400,
        'revision_id' => 400,
      ),
    ),
  ),
  'field_publications_reference' => array(),
  'field_regulations_reference' => array(),
  'field_short_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Los sistemas públicos de protección social deben disponer de una última red de protección que asegure que ninguno de sus ciudadanos carezca de unos recursos básicos para una supervivencia digna. La Comunidad de Madrid tiene atribuidas competencias exclusivas en materia de promoción y ayuda a los grupos sociales necesitados de especial atención, asumiendo el compromiso de poner en marcha mecanismos de solidaridad hacia los sectores excluidos.',
        'format' => NULL,
      ),
    ),
  ),
  'field_tags' => array(),
  'field_images' => array(
    'und' => array(
      0 => array(
        'fid' => 110,
        'filename' => 'o_vela_facebook.jpg',
        'uri' => 'public://o_vela_facebook.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 70778,
        'status' => 1,
        'timestamp' => 1476716662,
        'type' => 'image',
        'uuid' => '9dc322fb-d768-4ac6-9d17-3844b3d57a77',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1000,
          'width' => 2000,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 1000,
        'width' => 2000,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      1 => array(
        'fid' => 111,
        'filename' => 'un-tercio-de-los-espanoles-14-16-millones-vive-de-prestaciones-del-estado.jpg',
        'uri' => 'public://un-tercio-de-los-espanoles-14-16-millones-vive-de-prestaciones-del-estado.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 189735,
        'status' => 1,
        'timestamp' => 1476716687,
        'type' => 'image',
        'uuid' => '2563d5d2-ff52-4560-8cbf-276b44c45590',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 900,
          'width' => 1600,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 900,
        'width' => 1600,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      2 => array(
        'fid' => 112,
        'filename' => 'las-elites-saben-que-la-renta-basica-es-necesaria-porque-no-hay-trabajo-para-todos.jpg',
        'uri' => 'public://las-elites-saben-que-la-renta-basica-es-necesaria-porque-no-hay-trabajo-para-todos.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 72130,
        'status' => 1,
        'timestamp' => 1476716707,
        'type' => 'image',
        'uuid' => '8c10c036-46e0-4273-b5c1-6d4f0f8579a6',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 900,
          'width' => 1600,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 900,
        'width' => 1600,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      3 => array(
        'fid' => 113,
        'filename' => 'pobreza-energetica.jpg',
        'uri' => 'public://pobreza-energetica.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 280588,
        'status' => 1,
        'timestamp' => 1476716734,
        'type' => 'image',
        'uuid' => '53c77e3e-ef33-4cd8-9dc2-ff2d80262535',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 766,
          'width' => 1918,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 766,
        'width' => 1918,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      4 => array(
        'fid' => 114,
        'filename' => 'img_7721.jpg',
        'uri' => 'public://img_7721.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 424954,
        'status' => 1,
        'timestamp' => 1476716782,
        'type' => 'image',
        'uuid' => 'ad3ba7b4-5551-44e1-b90a-13dfd1cdd830',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 1037,
          'width' => 1555,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 1037,
        'width' => 1555,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_counselings' => array(
    'und' => array(
      0 => array(
        'target_id' => 'dc1cbaf7-d530-4ada-8c77-e914cb466790',
        'uuid' => 'dc1cbaf7-d530-4ada-8c77-e914cb466790',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-10-17 17:20:49 +0200',
  'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
);
  $nodes[] = array(
  'title' => 'Ficha información práctica Susana',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'main_information',
  'language' => 'es',
  'created' => 1475673643,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'aa523239-07c1-40a4-8a25-49e57619752b',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in <a href="http://www.example.com">voluptate velit esse cillum</a> dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa <strong>qui officia deserunt mollit</strong> anim id est laborum.</p>

<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>

<ul>
	<li>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</li>
	<li>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</li>
	<li>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</li>
</ul>

<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_categories' => array(
    'und' => array(
      0 => array(
        'target_id' => '41f2f9e9-2caf-4f7a-8774-45fdf34d06fb',
        'uuid' => '41f2f9e9-2caf-4f7a-8774-45fdf34d06fb',
      ),
    ),
  ),
  'field_enjoy_category' => array(),
  'field_files' => array(
    'und' => array(
      0 => array(
        'fid' => 4,
        'filename' => 'penguins.jpg',
        'uri' => 'public://penguins_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 777835,
        'status' => 1,
        'timestamp' => 1474096852,
        'type' => 'image',
        'uuid' => '981eec4b-58e3-4be0-ab3d-e2bb7234293b',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 768,
          'width' => 1024,
        ),
        'alt' => '',
        'title' => '',
        'height' => 768,
        'width' => 1024,
        'display' => 1,
        'description' => '',
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      1 => array(
        'fid' => 3,
        'filename' => 'desert.jpg',
        'uri' => 'public://desert_1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 845941,
        'status' => 1,
        'timestamp' => 1474096831,
        'type' => 'image',
        'uuid' => '82acd6a2-6311-4d1f-af7f-ace23fb94357',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 768,
          'width' => 1024,
        ),
        'alt' => '',
        'title' => '',
        'height' => 768,
        'width' => 1024,
        'display' => 1,
        'description' => '',
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      2 => array(
        'fid' => 2,
        'filename' => 'tulips.jpg',
        'uri' => 'public://tulips_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 620888,
        'status' => 1,
        'timestamp' => 1474096817,
        'type' => 'image',
        'uuid' => '899a7a48-577e-42ce-85e1-edc9e9f6e7d7',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 768,
          'width' => 1024,
        ),
        'alt' => '',
        'title' => '',
        'height' => 768,
        'width' => 1024,
        'display' => 1,
        'description' => '',
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
      3 => array(
        'fid' => 101,
        'filename' => 'psol.png',
        'uri' => 'public://psol.png',
        'filemime' => 'image/png',
        'filesize' => 636185,
        'status' => 1,
        'timestamp' => 1475669413,
        'type' => 'image',
        'uuid' => 'ee063ef6-bf38-4709-ad68-50c7130f3087',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 558,
          'width' => 979,
        ),
        'alt' => '',
        'title' => '',
        'height' => 558,
        'width' => 979,
        'display' => 1,
        'description' => '',
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_formalities_reference' => array(
    'und' => array(
      0 => array(
        'target_id' => '4d0bd4b3-f998-4283-9079-9216f0f7690c',
        'uuid' => '4d0bd4b3-f998-4283-9079-9216f0f7690c',
      ),
      1 => array(
        'target_id' => '0bf7ecc2-8855-4521-8631-cd7f3e1954a4',
        'uuid' => '0bf7ecc2-8855-4521-8631-cd7f3e1954a4',
      ),
      2 => array(
        'target_id' => '5ea593fc-6a1a-4247-8214-923f74d83799',
        'uuid' => '5ea593fc-6a1a-4247-8214-923f74d83799',
      ),
      3 => array(
        'target_id' => 'f728d70f-b661-43f4-913c-83c75fad5679',
        'uuid' => 'f728d70f-b661-43f4-913c-83c75fad5679',
      ),
    ),
  ),
  'field_invest_category' => array(),
  'field_live_category' => array(
    'und' => array(
      0 => array(
        'target_id' => '41f2f9e9-2caf-4f7a-8774-45fdf34d06fb',
        'uuid' => '41f2f9e9-2caf-4f7a-8774-45fdf34d06fb',
      ),
    ),
  ),
  'field_paragraphs' => array(
    'und' => array(
      0 => array(
        'value' => 289,
        'revision_id' => 289,
      ),
      1 => array(
        'value' => 291,
        'revision_id' => 291,
      ),
      2 => array(
        'value' => 299,
        'revision_id' => 299,
      ),
      3 => array(
        'value' => 310,
        'revision_id' => 310,
      ),
      4 => array(
        'value' => 313,
        'revision_id' => 313,
      ),
      5 => array(
        'value' => 315,
        'revision_id' => 315,
      ),
      6 => array(
        'value' => 318,
        'revision_id' => 318,
      ),
      7 => array(
        'value' => 325,
        'revision_id' => 325,
      ),
      8 => array(
        'value' => 328,
        'revision_id' => 328,
      ),
      9 => array(
        'value' => 330,
        'revision_id' => 330,
      ),
      10 => array(
        'value' => 332,
        'revision_id' => 332,
      ),
      11 => array(
        'value' => 334,
        'revision_id' => 334,
      ),
      12 => array(
        'value' => 336,
        'revision_id' => 336,
      ),
      13 => array(
        'value' => 338,
        'revision_id' => 338,
      ),
      14 => array(
        'value' => 351,
        'revision_id' => 351,
      ),
    ),
  ),
  'field_publications_reference' => array(
    'und' => array(
      0 => array(
        'target_id' => '5bd8bb64-6e8c-4add-a462-7533e7e93e30',
        'uuid' => '5bd8bb64-6e8c-4add-a462-7533e7e93e30',
      ),
      1 => array(
        'target_id' => '88bebb99-c441-4e99-9249-a610f4843551',
        'uuid' => '88bebb99-c441-4e99-9249-a610f4843551',
      ),
    ),
  ),
  'field_regulations_reference' => array(
    'und' => array(
      0 => array(
        'target_id' => '58f351ea-c58d-40cf-91d0-36c7cfd83589',
        'uuid' => '58f351ea-c58d-40cf-91d0-36c7cfd83589',
      ),
      1 => array(
        'target_id' => 'ffb63da3-41f1-4baa-b4bd-28c0b887abf5',
        'uuid' => 'ffb63da3-41f1-4baa-b4bd-28c0b887abf5',
      ),
      2 => array(
        'target_id' => '9303912e-2750-40ab-b552-95362c70cfd4',
        'uuid' => '9303912e-2750-40ab-b552-95362c70cfd4',
      ),
    ),
  ),
  'field_short_description' => array(),
  'field_tags' => array(),
  'field_images' => array(
    'und' => array(
      0 => array(
        'fid' => 44,
        'filename' => 'original_57113d3eda2e7.jpg',
        'uri' => 'public://original_57113d3eda2e7.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 1788096,
        'status' => 1,
        'timestamp' => 1474302065,
        'type' => 'image',
        'uuid' => 'bc3c4bb3-3cc1-49d7-9ea9-955ec63829be',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'field_link' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 2427,
          'width' => 3920,
        ),
        'alt' => NULL,
        'title' => NULL,
        'height' => 2427,
        'width' => 3920,
        'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
      ),
    ),
  ),
  'field_counselings' => array(
    'und' => array(
      0 => array(
        'target_id' => '29ae3862-eeee-4e13-a635-f1adc83f712d',
        'uuid' => '29ae3862-eeee-4e13-a635-f1adc83f712d',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2016-10-05 15:20:43 +0200',
  'user_uuid' => 'ed7439d4-0b79-4263-b88e-d1faceb36c92',
);
  return $nodes;
}
