<?php
/**
 * @file
 * Utilities to read xml files.
 */

/**
 * Read a xml.
 *
 * @NOTE: The only different respect MigrateXMLReader is the way to detect
 * the tags, see @WORKAROUND!
 */
class CMMigrateXMLReader extends MigrateXMLReader {

  /**
   * Overrides MigrateXMLReader::next().
   */
  public function next() {
    migrate_instrument_start('CMMigrateXMLReader::next');
    $this->currentElement = $this->currentId = NULL;

    // Loop over each node in the XML file, looking for elements at a path
    // matching the input query string (represented in $this->elementsToMatch).
    while ($this->reader->read()) {
      if ($this->reader->nodeType == XMLREADER::ELEMENT) {
        if ($this->prefixedName) {
          $this->currentPath[$this->reader->depth] = $this->reader->name;
        }
        else {
          $this->currentPath[$this->reader->depth] = $this->reader->localName;
        }
        // @WORKAROUND: let xpath extract all elements from document which tag
        // is tag mentioned in xpath.
        if (end($this->currentPath) == end($this->elementsToMatch)) {
          // We're positioned to the right element path - if filtering on an
          // attribute, check that as well before accepting this element.
          if (empty($this->attributeName) ||
            ($this->reader->getAttribute($this->attributeName) ==
             $this->attributeValue)
          ) {
            // We've found a matching element - get a SimpleXML object
            // representing it.We must associate the DOMNode with a
            // DOMDocument to be able to import
            // it into SimpleXML.
            // Despite appearances, this is almost twice as fast as
            // simplexml_load_string($this->readOuterXML());
            $node = $this->reader->expand();
            if ($node) {
              $dom = new DOMDocument();
              $node = $dom->importNode($node, TRUE);
              $dom->appendChild($node);
              $this->currentElement = simplexml_import_dom($node);
              $idnode = $this->currentElement->xpath($this->idQuery);
              if (is_array($idnode)) {
                $this->currentId = (string) reset($idnode);
              }
              else {
                throw new Exception(t('Failure retrieving ID, xpath: !xpath',
                  array('!xpath' => $this->idQuery)));
              }
              break;
            }
            else {
              foreach (libxml_get_errors() as $error) {
                $error_string = MigrateItemsXML::parseLibXMLError($error);
                if ($migration = Migration::currentMigration()) {
                  $migration->saveMessage($error_string);
                }
                else {
                  Migration::displayMessage($error_string);
                }
              }
            }
          }
        }
      }
      elseif ($this->reader->nodeType == XMLREADER::END_ELEMENT) {
        // Remove this element and any deeper ones from the current path.
        foreach ($this->currentPath as $depth => $name) {
          if ($depth >= $this->reader->depth) {
            unset($this->currentPath[$depth]);
          }
        }
      }
    }
    migrate_instrument_stop('CMMigrateXMLReader::next');
  }

}