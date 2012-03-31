<?php
/**
 * @file
 * novelty_domain.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function novelty_domain_field_default_fields() {
  $fields = array();

  // Exported field: 'node-domain-body'
  $fields['node-domain-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'domain',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Any text placed here will be displayed as the single page of the related domain.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-domain-field_domain'
  $fields['node-domain-field_domain'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_domain',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'machine_name',
      'settings' => array(
        'max_length' => 128,
        'replace' => '_',
        'replace_pattern' => '[^a-z0-9_]+',
      ),
      'translatable' => '0',
      'type' => 'machine_name',
    ),
    'field_instance' => array(
      'bundle' => 'domain',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'This will be the subdomain this node responds to.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_domain',
      'label' => 'Domain',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'machine_name',
        'settings' => array(
          'size' => 128,
        ),
        'type' => 'machine_name_machine_name',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Any text placed here will be displayed as the single page of the related domain.');
  t('Body');
  t('Domain');
  t('This will be the subdomain this node responds to.');

  return $fields;
}
