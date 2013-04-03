<?php
/**
 * @file
 * hr_geographic_level.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hr_geographic_level_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-geographic_level-name_field'
  $field_instances['taxonomy_term-geographic_level-name_field'] = array(
    'bundle' => 'geographic_level',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A field replacing taxonomy term name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A field replacing taxonomy term name.');
  t('Name');

  return $field_instances;
}
