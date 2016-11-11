-- MySQL dump 10.13  Distrib 5.5.36, for linux2.6 (x86_64)
--
-- Host: localhost    Database: patrimonio
-- ------------------------------------------------------
-- Server version	5.5.36-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `custom_breadcrumb`
--

DROP TABLE IF EXISTS `custom_breadcrumb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `custom_breadcrumb` (
  `bid` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Unique identifier for the custom_breadcrumb.',
  `name` varchar(128) DEFAULT NULL COMMENT 'An optional name for the custom breadcrumb.',
  `titles` mediumtext NOT NULL COMMENT 'A return-delimited list of titles for the breadcrumb links.',
  `paths` mediumtext NOT NULL COMMENT 'A return-delimited list of url paths for the breadcrumb links.',
  `visibility_php` mediumtext NOT NULL COMMENT 'An optional PHP snippet to control the custom_breadcrumb visibility.',
  `node_type` varchar(64) DEFAULT 'AND' COMMENT 'Node types the custom_breadcrumb should apply to.',
  `language` varchar(12) NOT NULL DEFAULT '' COMMENT 'The language this breadcrumb is for; if blank, the breadcrumb will be used for unknown languages.',
  PRIMARY KEY (`bid`),
  KEY `language` (`language`),
  KEY `node_language` (`node_type`,`language`)
) ENGINE=InnoDB AUTO_INCREMENT=29 DEFAULT CHARSET=utf8 COMMENT='Stores custom breadcrumb trail overrides.';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `custom_breadcrumb`
--

LOCK TABLES `custom_breadcrumb` WRITE;
/*!40000 ALTER TABLE `custom_breadcrumb` DISABLE KEYS */;
INSERT INTO `custom_breadcrumb` VALUES (15,'Elemento WebForm Solicitud de Filmación','<?php\r\n$titulo = t(\"Prensa\");\r\nreturn array($titulo, token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$url = \"prensa\";\r\nreturn array($url, token_replace(\"[current-page:url:path]\"));\r\n?>','if ($node->title == \'Solicitud de filmación o fotografía\') return TRUE;\r\nelse return FALSE;','webform',''),(16,'Nodo Elemento Colección Real','<?php\r\n$title_1 = t(\"Home\");\r\n$title_2 = t(\"Colecciones reales\");\r\n$title_3 = token_replace(\"[node:field-tipo-coleccion-real:name]\");\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_4 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_4 = token_replace(\"[node:title]\");\r\n}\r\nreturn array($title_1, $title_2, $title_3, $title_4);\r\n?>','/\r\ncolecciones-reales\r\ncolecciones-reales/colecciones/[node:field-tipo-coleccion-real:name]\r\n[current-page:url:relative]\r\n','return TRUE;','elemento_coleccion_real',''),(17,'Nodo Real Sitio','<?php\r\n$title_1 = t(\"Reales Sitios\");\r\nswitch ($node->field_tipo_real_sitio[\'und\'][0][\'tid\']) {\r\n        case 38://monasterio\r\n            $title_2 = t(\"Monasterios y Conventos\");\r\n          break;\r\n        case 39://monasterio\r\n            $title_2 = t(\"Palacios Reales\");\r\n          break;\r\n}\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_3 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_3 = token_replace(\"[node:title]\");\r\n}\r\nreturn array(t(\'Home\'), $title_1, $title_2, $title_3);\r\n\r\n?>','<?php\r\n$url_1 = url(\'real-sitio\');\r\nswitch ($node->field_tipo_real_sitio[\'und\'][0][\'tid\']) {\r\n        case 38://monasterio\r\n            $url_2 =  url(\'real-sitio/monasterios\');\r\n          break;\r\n        case 39://monasterio\r\n            $url_2 =  url(\'real-sitio/palacios\');\r\n          break;\r\n}\r\n$url_3 = \"node/\" . token_replace(\"[node:nid]\");\r\nreturn array(\'\', $url_1, $url_2, $url_3);\r\n?>','return TRUE;','real_sitio',''),(18,'Nodo Exposiciones','<?php\r\n$title_1 = t(\"Royal Collections\");\r\nif ($node->field_actual_pasada[\'und\'][0][\'value\'] == 0) {\r\n            $title_2 = t(\"Exposiciones Anteriores\");\r\n}else {\r\n            $title_2 = t(\"Exposiciones Temporales\");\r\n}\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_3 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_3 = token_replace(\"[node:title]\");\r\n}\r\n\r\nreturn array(t(\"Home\"), $title_1, $title_2, $title_3);\r\n?>','<?php\r\n$url_1 = url(\'colecciones-reales\');\r\nif ($node->field_actual_pasada[\'und\'][0][\'value\'] == 0) {\r\n  $url_2 = url(\'colecciones-reales/exposiciones\');\r\n}else {\r\n  $url_2 = url(\'colecciones-reales/exposiciones-anteriores\');\r\n}\r\n$url_3 = \"node/\" . token_replace(\"[node:nid]\");\r\nreturn array(\'\', $url_1, $url_2, $url_3);\r\n?>\r\n','return TRUE;','exposiciones',''),(19,'Nodo Elemento Restauración','<?php\r\n$title_1 = t(\"Home\");\r\n$title_2 = t(\"Colecciones reales\");\r\n$title_3 = t(\"Restauración\");\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_4 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_4 = token_replace(\"[node:title]\");\r\n}\r\nreturn array($title_1, $title_2, $title_3, $title_4);\r\n?>','/\r\ncolecciones-reales\r\ncolecciones-reales/restauracion/[node:field-tipo-coleccion-real:name]\r\n[current-page:url:relative]\r\n','return TRUE;','elemento_restauracion',''),(20,'Nodo Medio Natural','<?php\r\n$title_1 = t(\"Home\");\r\n$title_2 = t(\"Medio Natural\");\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_3 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_3 = token_replace(\"[node:title]\");\r\n}\r\nreturn array($title_1, $title_2, $title_3);\r\n?>','/\r\nmedio-natural\r\n[current-page:url:relative]','return TRUE;','medio_natural',''),(21,'Nodo Publicaciones','<?php\r\n$title_1 = t(\"Home\");\r\n$title_2 = t(\"Programas Culturales\");\r\n$title_3 = t(\"Publicaciones\");\r\n$title_4 = t(\"Otras publicaciones\");\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_5 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_5 = token_replace(\"[node:title]\");\r\n}\r\nreturn array($title_1, $title_2, $title_3, $title_4, $title_5);\r\n?>','/\r\nprogramas-culturales\r\nprogramas-culturales/publicaciones\r\nprogramas-culturales/publicaciones/otras-publicaciones\r\n[current-page:url:relative]\r\n','return TRUE;','publication',''),(22,'Nodo Noticias','<?php\r\n$title_1 = t(\"Home\");\r\n$title_2 = t(\"Noticias\");\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_3 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_3 = token_replace(\"[node:title]\");\r\n}\r\nreturn array($title_1, $title_2, $title_3);\r\n?>','/\r\nnoticias\r\n[current-page:url:relative]','return TRUE;','noticias_prensa',''),(23,'Nodo Cesión de Espacios','<?php\r\n$title_1 = t(\"Home\");\r\n$title_2 = t(\"Cesión de espacios\");\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_3 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_3 = token_replace(\"[node:title]\");\r\n}\r\nreturn array($title_1, $title_2, $title_3);\r\n?>','/\r\ncesion-espacios\r\n[current-page:url:relative]','return TRUE;','cesion_espacio',''),(24,'Nodo Alquileres','<?php\r\n$title_1 = t(\"Home\");\r\n$title_2 = t(\"Alquileres\");\r\n$title_3 = token_replace(\"[node:field-tipo-de-alquiler:name]\");\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_4 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_4 = token_replace(\"[node:title]\");\r\n}\r\nreturn array($title_1, $title_2, $title_3, $title_4);\r\n?>','/\r\nalquiler-espacios\r\nalquiler-espacios/[node:field-tipo-de-alquiler:name]\r\n[current-page:url:relative]','return TRUE;','alquiler_espacios',''),(25,'Nodo Premios','<?php\r\n$title_1 = t(\"Home\");\r\n$title_2 = t(\"Programas culturales\");\r\n$title_3 = t(\"Premios y concursos\");\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_4 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_4 = token_replace(\"[node:title]\");\r\n}\r\nreturn array($title_1, $title_2, $title_3, $title_4);\r\n?>','/\r\nprogramas-culturales\r\nprogramas-culturales/premios_listado\r\n[current-page:url:relative]','return TRUE;','premio',''),(26,'Nodo Revistas','<?php\r\n$title_1 = t(\"Home\");\r\n$title_2 = t(\"Programas Culturales\");\r\n$title_3 = t(\"Publicaciones\");\r\n$title_4 = t(\"Revista Reales Sitios\");\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_5 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_5 = token_replace(\"[node:title]\");\r\n}\r\nreturn array(t(\'Home\'), $title_1, $title_2, $title_3, $title_4, $title_5);\r\n\r\n?>','/\r\nprogramas-culturales/\r\nprogramas-culturales/publicaciones/\r\nprogramas-culturales/publicaciones/listado_revista_reales_sitios\r\n[current-page:url:relative]','return TRUE;','revista_reales_sitios',''),(27,'Nodo Programas Educativos','<?php\r\n$title_1 = t(\"Programas Culturales\");\r\nif (0 == $node->field_actual_pasada_progr[\'und\'][0][\'value\']) {\r\n   $title_2 = t(\'Programas educativos anteriores\');\r\n}else{\r\n   $title_2 = t(\'Programas educativos actuales\');\r\n\r\n}\r\n\r\nif(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n  $title_3 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n}else{\r\n  $title_3 = token_replace(\"[node:title]\");\r\n}\r\n\r\nreturn array(t(\"Home\"), $title_1, $title_2, $title_3);\r\n?>\r\n','<?php\r\n$url_1 = \'programas-culturales/conciertos\';\r\n$fecha_inicio_concierto = new DateTime($node->field_fecha_inicio_ciclo[\'und\'][0][\'value\']);\r\n$anio_nodo = $fecha_inicio_concierto->format(\'Y\');\r\nif ($anio_nodo != date(\'Y\', time())) {\r\n  $url_2 = \'programas-culturales/conciertos/conciertos_anteriores\';\r\n  $url_3 = \'programas-culturales/conciertos/conciertos_anteriores/\' . $anio_nodo;\r\n  $url_4 = token_replace(\"[node:title]\");\r\n  return array(\'\', $url_1, $url_2, $url_3, $url_4);\r\n}else {\r\n  $url_2 = \'programas-culturales/conciertos\';\r\n  $url_3 = token_replace(\"[current-page:url:relative]\");\r\n  return array(\'\', $url_1, $url_2, $url_3);\r\n}\r\n?>','return TRUE;','programas_educativos',''),(28,'Nodo Conciertos','<?php\r\n$title_1 = t(\"Programas Culturales\");\r\n$fecha_inicio_concierto = new DateTime($node->field_fecha_inicio_ciclo[\'und\'][0][\'value\']);\r\n$anio_nodo = $fecha_inicio_concierto->format(\'Y\');\r\nif ($anio_nodo != date(\'Y\', time())) {\r\n  $title_2 = t(\'Todos los conciertos\');\r\n  $title_3 = $anio_nodo;\r\n  if(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n    $title_4 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n  }else{\r\n    $title_4 = token_replace(\"[node:title]\");\r\n  }\r\n  return array(t(\"Home\"), $title_1, $title_2, $title_3, $title_4);\r\n}else {\r\n  $title_2 = t(\'Conciertos\');\r\n  if(!empty($node->field_title_breadcrumb[\'und\'][0][\'value\'])){\r\n    $title_3 = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n  }else{\r\n    $title_3 = token_replace(\"[node:title]\");\r\n  }\r\n  return array(t(\"Home\"), $title_1, $title_2, $title_3);\r\n}\r\n?>','<?php\r\n$url_1 = \'programas-culturales/conciertos\';\r\n$fecha_inicio_concierto = new DateTime($node->field_fecha_inicio_ciclo[\'und\'][0][\'value\']);\r\n$anio_nodo = $fecha_inicio_concierto->format(\'Y\');\r\nif ($anio_nodo != date(\'Y\', time())) {\r\n  $url_2 = \'programas-culturales/conciertos/conciertos_anteriores\';\r\n  $url_3 = \'programas-culturales/conciertos/conciertos_anteriores/[node:field-anio-de-concierto:tid]\';\r\n  $url_4 = token_replace(\"[current-page:url:relative]\");\r\n  return array(\'\', $url_1, $url_2, $url_3, $url_4);\r\n}else {\r\n  $url_2 = \'programas-culturales/conciertos\';\r\n  $url_3 = token_replace(\"[current-page:url:relative]\");\r\n  return array(\'\', $url_1, $url_2, $url_3);\r\n}\r\n?>','return TRUE;','ciclo_de_conciertos','');
/*!40000 ALTER TABLE `custom_breadcrumb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `custom_breadcrumbs_paths`
--

DROP TABLE IF EXISTS `custom_breadcrumbs_paths`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `custom_breadcrumbs_paths` (
  `bid` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Unique identifier for the custom_breadcrumbs_views.',
  `name` varchar(128) DEFAULT NULL COMMENT 'An optional name for the custom breadcrumb.',
  `titles` varchar(255) NOT NULL DEFAULT '' COMMENT 'A return-delimited list of titles for the breadcrumb links.',
  `paths` varchar(255) DEFAULT NULL COMMENT 'A return-delimited list of url paths for the breadcrumb links.',
  `visibility_php` mediumtext NOT NULL COMMENT 'An optional PHP snippet to control the custom_breadcrumbs_views visibility.',
  `specific_path` varchar(255) NOT NULL COMMENT 'Path to the view for this custom breadcrumb.',
  `language` varchar(12) NOT NULL DEFAULT '' COMMENT 'The language this breadcrumb is for; if blank, the breadcrumb will be used for unknown languages.',
  PRIMARY KEY (`bid`),
  KEY `language` (`language`),
  KEY `path_language` (`specific_path`,`language`)
) ENGINE=InnoDB AUTO_INCREMENT=43 DEFAULT CHARSET=utf8 COMMENT='Stores custom breadcrumb trails for specific paths.';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `custom_breadcrumbs_paths`
--

LOCK TABLES `custom_breadcrumbs_paths` WRITE;
/*!40000 ALTER TABLE `custom_breadcrumbs_paths` DISABLE KEYS */;
INSERT INTO `custom_breadcrumbs_paths` VALUES (6,'Ruta La institución - Presentación','<?php\r\n$titulo = t(\"Presentación\");\r\nreturn array(t(\"Home\"), token_replace(\"[node:title]\"),$titulo);\r\n?>','/\r\n[node:url:path]\r\n[node:url:path]','return TRUE;','la-institucion/presentacion',''),(7,'Ruta La institución - Presentación EN','<?php\r\n$titulo = t(\"Presentation\");\r\nreturn array(token_replace(\"[node:title]\"),$titulo);\r\n?>','[node:url:path]\r\n[node:url:path]','return TRUE;','en/the-institution/presentation','en'),(8,'Ruta Elementos La institución','<?php\r\n$titulo = t(\"La Institución\");\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$url = \"la-institucion\";\r\nreturn array(\'\', $url,token_replace(\"[node:url:path]\"));\r\n?>\r\n','return TRUE;','la-institucion/*',''),(9,'Ruta Elementos La institución EN','<?php\r\n$titulo = t(\"The Institution\");\r\nreturn array($titulo, token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$url = \"the-institution/presentation\";\r\nreturn array($url, token_replace(\"[node:url:path]\"));\r\n?>\r\n','return TRUE;','en/la-institucion/*','en'),(13,'Ruta Prensa','Inicio\r\n[view:title]','/\r\n[view:url:path]','return true;','prensa',''),(19,'Ruta Contratación','Inicio\r\n[node:title]','/\r\n[node:url:path]','return TRUE;','contratacion',''),(20,'Ruta Contacto','[node:title]','[node:url:path]','return TRUE;','contacto',''),(21,'Ruta Contacto EN','[node:title]','[node:url:path]','return TRUE;','contact',''),(22,'Ruta Restauración','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[current-page:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return true;','colecciones-reales/restauracion',''),(24,'Ruta Adquisición Publicaciones ES','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$titulo = t($view_aux->get_title());\r\n$subtitulo = t(\"Publicaciones\");\r\nreturn array($titulo, $subtitulo, token_replace(\"[current-page:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url= $view_aux->get_url();\r\n$url2 =\"programas-culturales/publicaciones\";\r\nreturn array($url,$url2 ,token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','programas-culturales/publicaciones/adquisicion-de-publicaciones',''),(25,'Ruta Mapa del Sitio','[current-page:title]','[current-page:url:path]','return true;','sitemap',''),(26,'Ruta Accesibilidad','[current-page:title]','[current-page:url:path]','return TRUE;','accesibilidad',''),(27,'Ruta Tramites','[current-page:title]','[current-page:url:path]','return TRUE;','tramites',''),(28,'Ruta Aviso Legal','[current-page:title]','[current-page:url:path]','return true;','aviso-legal',''),(29,'Ruta Politica de Privacidad','[current-page:title]','[current-page:url:path]','return true;','politica-de-privacidad',''),(32,'Ruta Obras en Préstamo','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[current-page:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$url = $view_aux->get_url();\r\nreturn array(\"\", $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return true;','colecciones-reales/obras-en-prestamo',''),(33,'Ruta Reales Sitios','Inicio\r\n[view:title]','/\r\n[current-page:url:path]','return TRUE;','real-sitio',''),(34,'Ruta becas Contratación','<?php\r\n$tit = t(\"Contratación\");\r\nreturn array(t(\"Home\"), $tit, token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$url = \"contratacion\";\r\nreturn array(\'\', $url, token_replace(\"[node:url:path]\"));\r\n?>\r\n','return True;','becas','es'),(35,'Ruta empleo público ','<?php\r\n$tit = t(\"Contratación\");\r\nreturn array($tit, token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$url= t(\"contratacion\");\r\nreturn array($url, token_replace(\"[node:url:path]\"));\r\n?>','return true;','empleo-publico','es'),(37,'Ruta Becas EN ','<?php\r\n$titulo = t(\"Contracts\");\r\nreturn array($titulo, token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$url = \"contratacion\";\r\nreturn array($url, token_replace(\"[node:url:path]\"));\r\n?>','return TRUE;','en/becas','en'),(38,'Ruta Empleo Público EN ','<?php\r\n$title= t(\'Contracts\');\r\nreturn array(t(\"Home\"), $title, token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$url = \"contratacion\";\r\nreturn array(\'\', $url, token_replace(\"[node:url:path]\"));\r\n?>','return True;','en/empleo-publico','en'),(39,'Vista Publicaciones','Inicio\r\nProgramas Culturales\r\nPublicaciones','/\r\nprogramas-culturales/publicaciones\r\n[current-page:url:relative]','return TRUE;','programas-culturales/publicaciones',''),(40,'Nodo Empleo Público','<?php\r\n$titlep = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n$title = token_replace(\"[node:title]\");\r\nif($titlep){\r\n  $title = $titlep;\r\n}\r\nreturn array(t(\"Home\"), t(\"Contratación\"), $title);\r\n?>','contratacion\r\n[current-page:url:relative]','return TRUE;','contratacion/empleo-publico',''),(41,'Nodo Becas','<?php\r\n$titlenode = $node->field_title_breadcrumb[\'und\'][0][\'value\'];\r\n$title_3 = token_replace(\"[node:title]\");\r\nif($titlenode){\r\n  $title_3 = $titlenode;\r\n}\r\nreturn array(t(\"Home\"), t(\"Contratación\"), $title_3);\r\n?>','contratacion\r\n[current-page:url:relative]','return TRUE;','contratacion/becas',''),(42,'Breadcrumb para Archivos Generales','<?php\r\nif($node->title)$t=token_replace(\"[node:cb_pntitle]\");else $t=token_replace(\"[view:title]\");\r\nreturn array(t(\"Home\"),t(\"Colecciones Reales\"),t(\"Archivo General de Palacio\"),token_replace(\"[node:cb_ptitle]\"),$t);\r\n?>','/\r\ncolecciones-reales\r\ncolecciones-reales/archivo-general-de-palacio\r\n[node:cb_ppath]\r\n[current-page:url:relative]','return TRUE;','colecciones-reales/archivo-general-de-palacio/*','');
/*!40000 ALTER TABLE `custom_breadcrumbs_paths` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `custom_breadcrumbs_taxonomy_term`
--

DROP TABLE IF EXISTS `custom_breadcrumbs_taxonomy_term`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `custom_breadcrumbs_taxonomy_term` (
  `bid` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Unique identifier for the custom_breadcrumbs_taxonomy breadcrumbs.',
  `name` varchar(128) DEFAULT NULL COMMENT 'An optional name for the custom breadcrumb.',
  `titles` varchar(255) NOT NULL DEFAULT '' COMMENT 'A title for the breadcrumb link.',
  `paths` varchar(255) DEFAULT NULL COMMENT 'A path for the breadcrumb link.',
  `tid` int(10) unsigned NOT NULL COMMENT 'The taxonomy term id for this breadcrumb.',
  `visibility_php` mediumtext NOT NULL COMMENT 'An optional PHP snippet to control the custom_breadcrumbs_views visibility.',
  `language` varchar(12) NOT NULL DEFAULT '' COMMENT 'The language this breadcrumb is for; if blank, the breadcrumb will be used for unknown languages.',
  PRIMARY KEY (`bid`),
  KEY `language` (`language`),
  KEY `tid_language` (`tid`,`language`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='Stores custom breadcrumbs for taxonomy terms';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `custom_breadcrumbs_taxonomy_term`
--

LOCK TABLES `custom_breadcrumbs_taxonomy_term` WRITE;
/*!40000 ALTER TABLE `custom_breadcrumbs_taxonomy_term` DISABLE KEYS */;
/*!40000 ALTER TABLE `custom_breadcrumbs_taxonomy_term` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `custom_breadcrumbs_taxonomy_vocabulary`
--

DROP TABLE IF EXISTS `custom_breadcrumbs_taxonomy_vocabulary`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `custom_breadcrumbs_taxonomy_vocabulary` (
  `bid` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Unique identifier for the custom_breadcrumbs_taxonomy breadcrumbs.',
  `name` varchar(128) DEFAULT NULL COMMENT 'An optional name for the custom breadcrumb.',
  `titles` varchar(255) NOT NULL DEFAULT '' COMMENT 'A titles for the breadcrumb link.',
  `paths` varchar(255) DEFAULT NULL COMMENT 'A paths for the breadcrumb link.',
  `vid` int(10) unsigned NOT NULL COMMENT 'The taxonomy vocabulary id for this breadcrumb.',
  `visibility_php` mediumtext NOT NULL COMMENT 'An optional PHP snippet to control the custom_breadcrumbs_views visibility.',
  `language` varchar(12) NOT NULL DEFAULT '' COMMENT 'The language this breadcrumb is for; if blank, the breadcrumb will be used for unknown languages.',
  PRIMARY KEY (`bid`),
  KEY `language` (`language`),
  KEY `vid_language` (`vid`,`language`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='Stores custom breadcrumbs for taxonomy vocabularies';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `custom_breadcrumbs_taxonomy_vocabulary`
--

LOCK TABLES `custom_breadcrumbs_taxonomy_vocabulary` WRITE;
/*!40000 ALTER TABLE `custom_breadcrumbs_taxonomy_vocabulary` DISABLE KEYS */;
/*!40000 ALTER TABLE `custom_breadcrumbs_taxonomy_vocabulary` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `custom_breadcrumbs_views`
--

DROP TABLE IF EXISTS `custom_breadcrumbs_views`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `custom_breadcrumbs_views` (
  `bid` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Unique identifier for the custom_breadcrumbs_views.',
  `name` varchar(128) DEFAULT NULL COMMENT 'An optional name for the custom breadcrumb.',
  `titles` varchar(255) NOT NULL DEFAULT '' COMMENT 'A return-delimited list of titles for the breadcrumb links.',
  `paths` varchar(255) DEFAULT NULL COMMENT 'A return-delimited list of url paths for the breadcrumb links.',
  `visibility_php` mediumtext NOT NULL COMMENT 'An optional PHP snippet to control the custom_breadcrumbs_views visibility.',
  `views_path` varchar(255) NOT NULL COMMENT 'Path to the view for this custom breadcrumb.',
  `language` varchar(12) NOT NULL DEFAULT '' COMMENT 'The language this breadcrumb is for; if blank, the breadcrumb will be used for unknown languages.',
  PRIMARY KEY (`bid`),
  KEY `language` (`language`),
  KEY `vpath_language` (`views_path`,`language`)
) ENGINE=InnoDB AUTO_INCREMENT=51 DEFAULT CHARSET=utf8 COMMENT='Stores custom breadcrumb trail overrides for views pages.';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `custom_breadcrumbs_views`
--

LOCK TABLES `custom_breadcrumbs_views` WRITE;
/*!40000 ALTER TABLE `custom_breadcrumbs_views` DISABLE KEYS */;
INSERT INTO `custom_breadcrumbs_views` VALUES (1,'Vista Colecciones Reales','Inicio\r\n[view:title]','/\r\n[current-page:url:path]','return TRUE;','colecciones-reales',''),(2,'Vista Elementos Colecciones Reales','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[current-page:url:args:value:2]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$url = $view_aux->get_url();\r\nreturn array(\"\", $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','colecciones-reales/colecciones/%',''),(3,'Vista Medio Natural','Inicio\r\n[current-page:title]','/\r\n[current-page:url:path]','return TRUE;','medio-natural',''),(4,'Vista Programas Culturales','Inicio\r\n[view:title]','/\r\n[current-page:url:path]','return TRUE;','programas-culturales',''),(5,'Vista Conciertos','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','programas-culturales/conciertos',''),(6,'Vista Revista Reales Sitios','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$subtitulo = t(\"Publicaciones\");\r\nreturn array(t(\"Home\"), t($view_aux->get_title()), $subtitulo, token_replace(\"[current-page:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url = $view_aux->get_url();\r\n$url2 = \"programas-culturales/publicaciones\";\r\nreturn array(\'\', $url, $url2, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','programas-culturales/publicaciones/listado_revista_reales_sitios',''),(7,'Vista Programas Educativos','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','programas-culturales/programas_educativos_actuales',''),(8,'Vista Exposiciones Temporales','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','colecciones-reales/exposiciones',''),(9,'Vista Premios y Concursos','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','programas-culturales/premios_listado',''),(10,'Vista Comunicados de Prensa','<?php\r\n$titulo = t(\"Prensa\");\r\nreturn array($titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$url = \"prensa\";\r\nreturn array($url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','comunicados_prensa',''),(11,'Vista Noticias','<?php\r\nreturn array(t(\"Home\"), token_replace(\"[view:title]\"));\r\n?>','<?php\r\nreturn array(\'\', token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','noticias',''),(12,'Vista Recursos Profesionales','<?php\r\n$titulo = t(\"Prensa\");\r\nreturn array($titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$url = \"prensa\";\r\nreturn array($url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','listado_recursos',''),(15,'Vista Reales Sitios Monasterios','<?php\r\n$titulo = t(\"Reales Sitios\");\r\nreturn array(t(\'Home\'), $titulo, token_replace(\"[current-page:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"reales_sitios_pn\");\r\n$url = $view_aux->get_url();\r\nreturn array(\"\", $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return True;','real-sitio/monasterios',''),(16,'Vista Detalle Real Sitio Monasterio','<?php\r\n$titulo = t(\"Reales Sitios\");\r\n$titulo2 = t(\"Monasterios y Conventos\");\r\nreturn array($titulo, $titulo2, token_replace(\"[current-page:title]\") );\r\n?>','<?php\r\n$view_aux = views_get_view(\"reales_sitios_pn\");\r\n$url = $view_aux->get_url();\r\n$url2= \"real-sitio/monasterios\";\r\nreturn array($url,  $url2, token_replace(\"[current-page:url:path]\"));\r\n?>','return true;','real-sitio/monasterios/%',''),(17,'Vista Detalle Real Sitio Palacio','<?php\r\n$titulo = t(\"Reales Sitios\");\r\n$titulo2 = t(\"Palacios Reales\");\r\nreturn array($titulo, $titulo2, token_replace(\"[current-page:title]\") );\r\n?>','<?php\r\n$view_aux = views_get_view(\"reales_sitios_pn\");\r\n$url = $view_aux->get_url();\r\n$url2= \"real-sitio/palacios\";\r\nreturn array($url,  $url2, token_replace(\"[current-page:url:path]\"));\r\n?>','return true;','real-sitio/palacios/%',''),(18,'Vista Otras Publicaciones Listado','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$titulo = t($view_aux->get_title());\r\n$subtitulo = t(\"Publicaciones\");\r\nreturn array(t(\"Home\"), $titulo, $subtitulo, token_replace(\"[current-page:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url= $view_aux->get_url();\r\n$url2 =\"programas-culturales/publicaciones\";\r\nreturn array(\'\', $url,$url2 ,token_replace(\"[current-page:url:path]\"));\r\n?>','return true;','programas-culturales/publicaciones/otras-publicaciones',''),(22,'Vista Retratos SSMM Listado','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$titulo = t($view_aux->get_title());\r\n$subtitulo = t(\"Publicaciones\");\r\nreturn array(t(\'Home\'), $titulo, $subtitulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url= $view_aux->get_url();\r\n$url2 =\"programas-culturales/publicaciones\";\r\nreturn array(\'\', $url,$url2 ,token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','programas-culturales/publicaciones/retratos_SSMM',''),(26,'Vista Exposiciones Temporales Anteriores','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$url = $view_aux->get_url();\r\nreturn array(\"\", $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return True;','colecciones-reales/exposiciones-anteriores',''),(27,'Vista Archivo Palacio','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$url = $view_aux->get_url();\r\nreturn array(\"\", $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return true;','bookmarks',''),(28,'Vista Reales Sitios Palacios','<?php\r\n$titulo = t(\"Reales Sitios\");\r\nreturn array(t(\'Home\'), $titulo, token_replace(\"[current-page:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"reales_sitios_pn\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return True;','real-sitio/palacios',''),(29,'Vista Detalle Medio Natural','<?php\r\n$view_aux = views_get_view(\"listado_medio_natural\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array($titulo, token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"listado_medio_natural\");\r\n$url = $view_aux->get_url();\r\nreturn array($url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','medio-natural/detalles/%',''),(30,'Vista Todos los Conciertos','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','programas-culturales/conciertos/conciertos_anteriores',''),(33,'Vista Programas Educativos Anteriores','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','programas-culturales/programas_educativos_anteriores',''),(36,'Vista Otras Publicaciones','Inicio\r\nProgramas Culturales  \r\nPublicaciones\r\nOtras Publicaciones\r\n[node:title]','/\r\nprogramas-culturales\r\nprogramas-culturales/publicaciones\r\nprogramas-culturales/publicaciones/otras-publicaciones\r\n[current-page:url:relative]\r\n','return TRUE;','programas-culturales/publicaciones/otras-publicaciones/%',''),(37,'Vista Otras Actividades Anteriores','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array($titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$url = $view_aux->get_url();\r\nreturn array($url, token_replace(\"[current-page:url:path]\"));\r\n?>','return true;','otras_actividades_anteriores',''),(40,'Vista Cesión de Espacios','Inicio\r\n[view:title]','/\r\n[current-page:url]','return TRUE;','cesion-espacios',''),(42,'Vista Alquiler de espacios','Inicio\r\n[view:title]','/\r\n[current-page:url]','return TRUE;','alquiler-espacios',''),(43,'Vista Categorías Alquileres','<?php\r\n$view_aux = views_get_view(\"alquileres\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[current-page:url:args:value:1]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"alquileres\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','alquiler-espacios/%',''),(45,'Vista Detalle Elemento Restauracion','<?php\r\n$titulo =t(views_get_view(\"colecciones_reales_taxonomia\")->get_title());\r\n$subtitulo= t(views_get_view(\"restauracion\")->get_title());\r\nreturn array($titulo,$subtitulo,token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$url  = views_get_view(\"colecciones_reales_taxonomia\")->get_url();\r\n$url2  = views_get_view(\"restauracion\")->get_url();\r\nreturn array($url,$url2,token_replace(\"[current-page:url:path]\"));\r\n?>','return FALSE;','colecciones-reales/restauracion/detalles/%/%',''),(48,'Vista Detalle Exposiciones Actual','<?php\r\n$titulo =t(views_get_view(\"colecciones_reales_taxonomia\")->get_title());\r\n$subtitulo= t(views_get_view(\"divulgacion_cultural_exposiciones\")->get_title());\r\nreturn array($titulo,$subtitulo,token_replace(\"[node:title]\"));\r\n?>','<?php\r\n$url  = views_get_view(\"colecciones_reales_taxonomia\")->get_url();\r\n$url2  = views_get_view(\"divulgacion_cultural_exposiciones\")->get_url();\r\nreturn array($url,$url2,token_replace(\"[current-page:url:path]\"));\r\n?>','return FALSE;','colecciones-reales/exposiciones/detalles/%',''),(49,'Vista Restauración','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$titulo = t($view_aux->get_title());\r\nreturn array(t(\"Home\"), $titulo, token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$view_aux = views_get_view(\"colecciones_reales_taxonomia\");\r\n$url = $view_aux->get_url();\r\nreturn array(\'\', $url, token_replace(\"[current-page:url:path]\"));\r\n?>','return FALSE;','colecciones-reales/restauracion',''),(50,'Vista Años Conciertos Anteriores ','<?php\r\n$view_aux = views_get_view(\"programas_culturales\");\r\n$subtitulo =t(views_get_view(\"conciertos_anteriores_taxonomia\")->get_title());\r\nreturn array(t(\"Home\"), t($view_aux->get_title()), $subtitulo,token_replace(\"[view:title]\"));\r\n?>','<?php\r\n$url = views_get_view(\"programas_culturales\")->get_url();\r\n$url2 = views_get_view(\"conciertos_anteriores_taxonomia\")->get_url();\r\nreturn array(\'\', $url,$url2, token_replace(\"[current-page:url:path]\"));\r\n?>','return TRUE;','programas-culturales/conciertos/conciertos_anteriores/%','');
/*!40000 ALTER TABLE `custom_breadcrumbs_views` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `custom_breadcrumbsapi`
--

DROP TABLE IF EXISTS `custom_breadcrumbsapi`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `custom_breadcrumbsapi` (
  `bid` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Unique identifier for the custom_breadcrumbsapi.',
  `name` varchar(128) DEFAULT NULL COMMENT 'An optional name for the custom breadcrumb.',
  `titles` varchar(255) NOT NULL DEFAULT '' COMMENT 'A return-delimited list of titles for the breadcrumb links.',
  `paths` varchar(255) DEFAULT NULL COMMENT 'A return-delimited list of url paths for the breadcrumb links.',
  `visibility_php` mediumtext NOT NULL COMMENT 'An optional PHP snippet to control the custom_breadcrumbsapi visibility.',
  `module_page` varchar(255) NOT NULL COMMENT 'Name of module page implementing custom breadcrumbs.',
  `language` varchar(12) NOT NULL DEFAULT '' COMMENT 'The language this breadcrumb is for; if blank, the breadcrumb will be used for unknown languages.',
  PRIMARY KEY (`bid`),
  KEY `language` (`language`),
  KEY `module_language` (`module_page`,`language`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='Stores custom breadcrumb for module pages.';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `custom_breadcrumbsapi`
--

LOCK TABLES `custom_breadcrumbsapi` WRITE;
/*!40000 ALTER TABLE `custom_breadcrumbsapi` DISABLE KEYS */;
/*!40000 ALTER TABLE `custom_breadcrumbsapi` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2016-04-11 10:48:23
