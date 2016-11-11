<?php

/**
 * @file
 * Extend file.inc
 */

/**
 * Handle cases where we're handed a URI, or local filespec, representing a file
 * to be imported to Drupal with Curl.
 */
class CMMigrateFileUriCurl extends MigrateFileUri {

  /**
   * Implementation of MigrateFile::copyFile().
   *
   * @param $destination
   *  Destination within Drupal.
   *
   * @return bool
   *  TRUE if the copy succeeded, FALSE otherwise.
   */
  protected function copyFile($destination) {
    if (!@$this->copy_curl($this->sourcePath, $destination)) {
      $migration = Migration::currentMigration();
      $migration->saveMessage(t('The specified file %file could not be copied to ' .
              '%destination.',
              array('%file' => $this->sourcePath, '%destination' => $destination)));
      return FALSE;
    }
    else {
      return TRUE;
    }
  }

  /**
   * Copy a file with curl
   * @param string $source
   * @param string $destination
   * @return boolean
   */
  protected function copy_curl($source, $destination) {
    $resource = curl_init();

    curl_setopt($resource, CURLOPT_URL, $source);
    curl_setopt($resource, CURLOPT_HEADER, false);
    curl_setopt($resource, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($resource, CURLOPT_CONNECTTIMEOUT, 10);
    curl_setopt($resource, CURLOPT_TIMEOUT, 20);

    $content = curl_exec($resource);
    curl_close($resource);

    if ($content != '') {
      $fp = fopen($destination, 'w');
      $fw = fwrite($fp, $content);
      fclose($fp);

      if ($fw != false) {
        return true;
      }
    }

    return false;
  }

}
