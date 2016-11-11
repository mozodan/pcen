<?php
/**
 * @file
 * drpl_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drpl_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drpl_paragraphs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drpl_paragraphs_image_default_styles() {
  $styles = array();

  // Exported image style: paragraph_carousel.
  $styles['paragraph_carousel'] = array(
    'label' => 'Carousel paragraph',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 800,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function drpl_paragraphs_paragraphs_info() {
  $items = array(
    'accordion' => array(
      'name' => 'Acordeon',
      'bundle' => 'accordion',
      'locked' => '1',
    ),
    'action' => array(
      'name' => 'Cita previa',
      'bundle' => 'action',
      'locked' => '1',
    ),
    'banner' => array(
      'name' => 'Banner',
      'bundle' => 'banner',
      'locked' => '1',
    ),
    'block_reference' => array(
      'name' => 'Bloque',
      'bundle' => 'block_reference',
      'locked' => '1',
    ),
    'button' => array(
      'name' => 'Botón',
      'bundle' => 'button',
      'locked' => '1',
    ),
    'calendar_block' => array(
      'name' => 'Agenda',
      'bundle' => 'calendar_block',
      'locked' => '1',
    ),
    'call' => array(
      'name' => 'Llamada o acción',
      'bundle' => 'call',
      'locked' => '1',
    ),
    'carousel' => array(
      'name' => 'Deslizador',
      'bundle' => 'carousel',
      'locked' => '1',
    ),
    'carousel_banners' => array(
      'name' => 'Carrusel de banners',
      'bundle' => 'carousel_banners',
      'locked' => '1',
    ),
    'carousel_banners_slide' => array(
      'name' => '__Carrusel de banners - Subitems',
      'bundle' => 'carousel_banners_slide',
      'locked' => '1',
    ),
    'column' => array(
      'name' => 'Columna/Sección',
      'bundle' => 'column',
      'locked' => '1',
    ),
    'compound_information' => array(
      'name' => 'Información compuesta',
      'bundle' => 'compound_information',
      'locked' => '1',
    ),
    'compound_information_block' => array(
      'name' => '__Compound information - Subitems',
      'bundle' => 'compound_information_block',
      'locked' => '1',
    ),
    'download_files' => array(
      'name' => 'Descarga de documentos',
      'bundle' => 'download_files',
      'locked' => '1',
    ),
    'events_search' => array(
      'name' => 'Buscador de actividades',
      'bundle' => 'events_search',
      'locked' => '1',
    ),
    'featured' => array(
      'name' => 'Destacado',
      'bundle' => 'featured',
      'locked' => '1',
    ),
    'featured_events' => array(
      'name' => 'Actividades destacadas',
      'bundle' => 'featured_events',
      'locked' => '1',
    ),
    'featured_image' => array(
      'name' => 'Destacado con imagen',
      'bundle' => 'featured_image',
      'locked' => '1',
    ),
    'featured_list' => array(
      'name' => 'Listado destacados',
      'bundle' => 'featured_list',
      'locked' => '1',
    ),
    'featured_list_entity' => array(
      'name' => 'Listado entidades asociadas',
      'bundle' => 'featured_list_entity',
      'locked' => '1',
    ),
    'file_search_by_date' => array(
      'name' => 'Buscador de archivos por fecha',
      'bundle' => 'file_search_by_date',
      'locked' => '1',
    ),
    'frequent_questions' => array(
      'name' => 'Buscador preguntas frecuentes',
      'bundle' => 'frequent_questions',
      'locked' => '1',
    ),
    'gallery' => array(
      'name' => 'Galería de imágenes',
      'bundle' => 'gallery',
      'locked' => '1',
    ),
    'image_link' => array(
      'name' => 'Imagen con enlace opcional',
      'bundle' => 'image_link',
      'locked' => '1',
    ),
    'information_container' => array(
      'name' => 'Contenedor de informacion',
      'bundle' => 'information_container',
      'locked' => '1',
    ),
    'information_container_block' => array(
      'name' => '__Contenedor de informacion - Subitems',
      'bundle' => 'information_container_block',
      'locked' => '1',
    ),
    'link' => array(
      'name' => 'Link',
      'bundle' => 'link',
      'locked' => '1',
    ),
    'link_list' => array(
      'name' => 'Listado enlaces',
      'bundle' => 'link_list',
      'locked' => '1',
    ),
    'list' => array(
      'name' => 'Listado noticias',
      'bundle' => 'list',
      'locked' => '1',
    ),
    'map_imagen_text' => array(
      'name' => 'Mapa con imagen y título',
      'bundle' => 'map_imagen_text',
      'locked' => '1',
    ),
    'multiple_compound_links' => array(
      'name' => 'Listado de links compuestos',
      'bundle' => 'multiple_compound_links',
      'locked' => '1',
    ),
    'news_search' => array(
      'name' => 'Buscador de noticias',
      'bundle' => 'news_search',
      'locked' => '1',
    ),
    'newsletter' => array(
      'name' => 'Newsletter',
      'bundle' => 'newsletter',
      'locked' => '1',
    ),
    'paragraph_text' => array(
      'name' => 'Texto',
      'bundle' => 'paragraph_text',
      'locked' => '1',
    ),
    'separator' => array(
      'name' => 'Separador',
      'bundle' => 'separator',
      'locked' => '1',
    ),
    'switch' => array(
      'name' => 'Conmutador',
      'bundle' => 'switch',
      'locked' => '1',
    ),
    'tabs' => array(
      'name' => 'Solapas horizontales',
      'bundle' => 'tabs',
      'locked' => '1',
    ),
    'text_link' => array(
      'name' => 'Texto con botón opcional',
      'bundle' => 'text_link',
      'locked' => '1',
    ),
    'text_video' => array(
      'name' => 'Texto y vídeo',
      'bundle' => 'text_video',
      'locked' => '1',
    ),
    'title_text' => array(
      'name' => 'Titulo y texto',
      'bundle' => 'title_text',
      'locked' => '1',
    ),
    'title_text_image' => array(
      'name' => 'Título texto e imagen',
      'bundle' => 'title_text_image',
      'locked' => '1',
    ),
    'two_columns' => array(
      'name' => 'Dos columnas',
      'bundle' => 'two_columns',
      'locked' => '1',
    ),
    'two_columns_double_text' => array(
      'name' => '__Dos Columnas - Subitems',
      'bundle' => 'two_columns_double_text',
      'locked' => '1',
    ),
    'vertical_tabs' => array(
      'name' => 'Solapas verticales',
      'bundle' => 'vertical_tabs',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}
