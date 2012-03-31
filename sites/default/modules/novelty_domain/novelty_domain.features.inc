<?php
/**
 * @file
 * novelty_domain.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function novelty_domain_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function novelty_domain_node_info() {
  $items = array(
    'domain' => array(
      'name' => t('Domain'),
      'base' => 'node_content',
      'description' => t('Create a new domain'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
