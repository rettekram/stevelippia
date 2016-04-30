<?php
/**
 * @file
 * stevelippia_events.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function stevelippia_events_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_specific_show'.
  $field_bases['field_specific_show'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_specific_show',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'specific_show',
          'parent' => 0,
        ),
      ),
      'field_permissions' => array(
        'create' => 0,
        'edit' => 0,
        'edit own' => 0,
        'view' => 0,
        'view own' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
