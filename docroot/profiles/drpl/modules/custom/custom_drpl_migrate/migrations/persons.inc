<?php
/**
 * @file
 * Contains PersonsMigration.
 */

/**
 * Personas Migration.
 */
class PersonsMigration extends XMLMigration {
  public function fields() {
    return array(
      'Responsable' => '@nombre',
      'Persona_id'  => '@id',
      'ImagenGrande'  => 'datos/imagenGrande/@url',
      'NormativaNombramiento'  => 'datos/normativaNombramiento',
      'DeclaracionesRenta'  => 'datos/declaracionesRenta/documento/@url',
      'ContactoTitulo'  => 'datos/contacto/a/text()',
      'ContactoEnlace'  => 'datos/contacto/a/text()',
      'Cargo'  => '@cargo',
      'Links'  => 'datos/redes/enlace/@url',
      'DeclaracionesPatrimonio'  => 'datos/declaracionesPatrimonio/documento/@url',
      'DatosInteresResponsable'  => 'datos/fichaBio',
      'Organismo'  => '@organismo',
    );
  }
  public function __construct( $arguments ) {
    parent::__construct( $arguments );
    $this->description = t('Migrate "personas" from madrid.org.');
    $xml_fields = $this->fields();
    $this->source = new MigrateSourceXML(
      drupal_get_path('module', 'custom_drpl_migrate') . "/files/altosCargos.xml",
      '//persona',
      '@id',
      $xml_fields,
      array(
        'reader_class' => 'CMMigrateXMLReader',
      )
    );
    $this->destination = new MigrateDestinationNode('persons');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'persona_id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );
    // Fields:
    $this->addFieldMapping('language')->defaultValue('es');
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('status')->defaultValue(1);
    // @NOTE: solo se mapea en creación!
    $this->addFieldMapping('title', 'Responsable')->xpath('@nombre');
    // Shared id.
    $this->addFieldMapping('field_shared_id', 'Persona_id')->xpath('@id');
    $this->addFieldMapping('body:format')->defaultValue('full_html');
    $this->addFieldMapping('body', 'DatosInteresResponsable')->xpath('datos/fichaBio');
    $this->addFieldMapping('field_counseling', 'Organismo')->xpath('@organismo');
    $this->addFieldMapping('field_normative_designation:format')->defaultValue('rich_html');
    $this->addFieldMapping('field_normative_designation', 'NormativaNombramiento')->xpath('datos/normativaNombramiento');
    $this->addFieldMapping('field_position', 'Cargo')->xpath('@cargo');
    $this->addfieldMapping('field_mailto', 'ContactoEnlace')->xpath('datos/contacto')->callbacks(array($this, 'extractContact'));
    $this->addfieldMapping('field_mailto:title', 'ContactoTitulo')->xpath('datos/contacto')->callbacks(array($this, 'extractContactMailto'));
    $this->addFieldMapping('field_person_patrimony_declares', 'DeclaracionesPatrimonio')->xpath('datos/declaracionesPatrimonio/documento/@url')->callbacks(array($this, 'appendBaseUrl'));
    $this->addFieldMapping('field_person_patrimony_declares:file_class')->defaultValue('CMMigrateFileUriCurl');
    $this->addFieldMapping('field_person_patrimony_declares:destination_file')->defaultValue('patrimony_declares.pdf')->callbacks(array($this, 'generateFilename'));
    $this->addFieldMapping('field_person_patrimony_declares:description')->defaultValue('Bienes, actividades y retribuciones');
    $this->addFieldMapping('field_image', 'ImagenGrande')->xpath('datos/imagenGrande/@url')->callbacks(array($this, 'appendBaseUrl'));
    $this->addFieldMapping('field_image:file_class')->defaultValue('CMMigrateFileUriCurl');
    $this->addFieldMapping('field_image:destination_file')->defaultValue('person_image.jpg')->callbacks(array($this, 'generateFilename'));
    $this->addFieldMapping('field_image:alt', 'Responsable');
    $this->addFieldMapping('field_image:title', 'Responsable');
    $this->addFieldMapping('field_person_income_tax_returns', 'DeclaracionesRenta')->xpath('datos/declaracionesRenta/documento/@url')->callbacks(array($this, 'appendBaseUrl'));
    $this->addFieldMapping('field_person_income_tax_returns:file_class')->defaultValue('CMMigrateFileUriCurl');
    $this->addFieldMapping('field_person_income_tax_returns:description')->defaultValue('Última declaración de la renta');
    $this->addFieldMapping('field_person_income_tax_returns:destination_file')->defaultValue('income_tax_returns.pdf')->callbacks(array($this, 'generateFilename'));
    $this->addFieldMapping('field_links', 'Links')->xpath('datos/redes/enlace/@url');
  }
  public function appendBaseUrl($value) {
    if (!is_array($value)) {
      $value = CM_MIGRATE_FILES_URL . $value;
    }
    else {
      foreach ($value as $key => $val) {
        $value[$key] = CM_MIGRATE_FILES_URL . $val;
      }
    }
    return $value;
  }
  public function generateFilename($filename) {
    return $this->currentSourceKey()['persona_id'] . '-' . $filename;
  }

  public function extractContactParts($contact_link) {
    preg_match('/<a href=\"(.*)\">(.*)<\/a>/', $contact_link, $contact);
    return $contact;
  }

  public function extractContact($contact_link) {
    $parts = $this->extractContactParts($contact_link);
    return $parts[1];
  }
  public function extractContactMailto($contact_link) {
    $parts = $this->extractContactParts($contact_link);
    return $parts[2];
  }
}
