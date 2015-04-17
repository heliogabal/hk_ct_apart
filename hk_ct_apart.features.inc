<?php
/**
 * @file
 * hk_ct_apart.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_ct_apart_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_ct_apart_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entity_rule_setting().
 */
function hk_ct_apart_default_entity_rule_setting() {
  $items = array();
  $items['3'] = entity_import('entity_rule_setting', '{
    "id" : "3",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_objekt_id_vom_objekt_update",
    "weight" : "0",
    "args" : null,
    "false_msg" : null
  }');
  $items['4'] = entity_import('entity_rule_setting', '{
    "id" : "4",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "update",
    "rules_config" : "rules_kopiere_standort_vom_objekt",
    "weight" : "1",
    "args" : null,
    "false_msg" : null
  }');
  $items['7'] = entity_import('entity_rule_setting', '{
    "id" : "7",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_objekt_id_vom_objekt",
    "weight" : "-7",
    "args" : null,
    "false_msg" : null
  }');
  $items['8'] = entity_import('entity_rule_setting', '{
    "id" : "8",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_kategorie_vom_objekt",
    "weight" : "-6",
    "args" : null,
    "false_msg" : null
  }');
  $items['9'] = entity_import('entity_rule_setting', '{
    "id" : "9",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_beschreibung_vom_objekt_falls_leer",
    "weight" : "-10",
    "args" : null,
    "false_msg" : null
  }');
  $items['10'] = entity_import('entity_rule_setting', '{
    "id" : "10",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_lage_vom_objekt_falls_leer",
    "weight" : "-9",
    "args" : null,
    "false_msg" : null
  }');
  $items['11'] = entity_import('entity_rule_setting', '{
    "id" : "11",
    "entity_type" : "node",
    "bundle" : "apartment",
    "op" : "create",
    "rules_config" : "rules_kopiere_sonstiges_vom_objekt_falls_leer",
    "weight" : "-8",
    "args" : null,
    "false_msg" : null
  }');
  return $items;
}

/**
 * Implements hook_flag_default_flags().
 */
function hk_ct_apart_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favoriten".
  $flags['merken'] = array(
    'entity_type' => 'node',
    'title' => 'Favoriten',
    'global' => 0,
    'types' => array(
      0 => 'apartment',
    ),
    'flag_short' => 'Add to favorites',
    'flag_long' => 'add apartment to your personal favorites list',
    'flag_message' => 'apartment added',
    'unflag_short' => 'Remove from favorites',
    'unflag_long' => '',
    'unflag_message' => 'apartment removed',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'map_popup' => 0,
      'project' => 0,
      'tile' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 1,
    'api_version' => 3,
    'module' => 'hk_ct_apart',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function hk_ct_apart_node_info() {
  $items = array(
    'apartment' => array(
      'name' => t('Wohnung'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
