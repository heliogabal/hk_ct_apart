<?php
/**
 * @file
 * hk_ct_apart.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hk_ct_apart_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_akkordeon|node|apartment|default';
  $field_group->group_name = 'group_akkordeon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_text';
  $field_group->data = array(
    'label' => 'Akkordeon',
    'weight' => '2',
    'children' => array(
      0 => 'group_lage',
      1 => 'group_sonstiges',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-akkordeon field-group-accordion',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_akkordeon|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apart_publish|node|apartment|form';
  $field_group->group_name = 'group_apart_publish';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Veröffentlichen',
    'weight' => '1',
    'children' => array(
      0 => 'field_save_workflow',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-apart-publish field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_apart_publish|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|apartment|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Basic fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_apart_living_space',
      1 => 'field_apart_no',
      2 => 'field_apart_price',
      3 => 'field_apart_rooms',
      4 => 'field_object_ref',
      5 => 'title_field',
      6 => 'field_kategorie',
      7 => 'field_objektid_nunumeric',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_basic|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|node|apartment|teaser';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '0',
    'children' => array(
      0 => 'field_apart_living_space',
      1 => 'field_apart_price',
      2 => 'field_apart_pictures',
      3 => 'field_kategorie',
      4 => 'flag_merken',
      5 => 'adresse',
      6 => 'neu_label',
      7 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-card',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card|node|apartment|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_costs|node|apartment|form';
  $field_group->group_name = 'group_costs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Costs',
    'weight' => '2',
    'children' => array(
      0 => 'field_apart_hoa_fee',
      1 => 'field_apart_price_parking',
      2 => 'field_apart_commission',
      3 => 'field_apart_net_rent',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-costs field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_costs|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features|node|apartment|form';
  $field_group->group_name = 'group_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Features',
    'weight' => '5',
    'children' => array(
      0 => 'field_apart_bathrooms',
      1 => 'field_apart_floor',
      2 => 'field_apart_sleeping_rooms',
      3 => 'field_moving_in_from',
      4 => 'field_ausstattung',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-features field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_features|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal|node|apartment|form';
  $field_group->group_name = 'group_horizontal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Menu',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_costs',
      2 => 'group_features',
      3 => 'group_images',
      4 => 'group_texte',
      5 => 'group_returns',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-horizontal field-group-htabs',
      ),
    ),
  );
  $export['group_horizontal|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|apartment|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '6',
    'children' => array(
      0 => 'field_apart_pictures',
      1 => 'field_apart_floor_plan',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-images field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_images|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lage|node|apartment|default';
  $field_group->group_name = 'group_lage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_akkordeon';
  $field_group->data = array(
    'label' => 'Lage',
    'weight' => '7',
    'children' => array(
      0 => 'lage_von_wohnung_oder_objekt',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-lage field-group-accordion-item',
      ),
    ),
  );
  $export['group_lage|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_merkmale|node|apartment|default';
  $field_group->group_name = 'group_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '32',
    'children' => array(
      0 => 'field_apart_bathrooms',
      1 => 'field_apart_floor',
      2 => 'field_apart_hoa_fee',
      3 => 'field_apart_price_parking',
      4 => 'field_apart_sleeping_rooms',
      5 => 'field_moving_in_from',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Merkmale',
      'instance_settings' => array(
        'classes' => 'group-merkmale',
        'element' => 'table',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_merkmale|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_returns|node|apartment|form';
  $field_group->group_name = 'group_returns';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Returns',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-returns field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_returns|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sonstiges|node|apartment|default';
  $field_group->group_name = 'group_sonstiges';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_akkordeon';
  $field_group->data = array(
    'label' => 'Sonstiges',
    'weight' => '8',
    'children' => array(
      0 => 'sonstiges_von_wohnung_oder_objek',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Sonstiges',
      'instance_settings' => array(
        'classes' => 'group-sonstiges field-group-accordion-item',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sonstiges|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_texte|node|apartment|form';
  $field_group->group_name = 'group_texte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_horizontal';
  $field_group->data = array(
    'label' => 'Texte',
    'weight' => '4',
    'children' => array(
      0 => 'field_apart_description',
      1 => 'field_apart_location',
      2 => 'field_apart_other',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-texte field-group-tab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_texte|node|apartment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|apartment|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '4',
    'children' => array(
      0 => 'texte_von_wohnung_oder_objekt',
      1 => 'group_akkordeon',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text',
        'wrapper' => 'article',
      ),
    ),
  );
  $export['group_text|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|apartment|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '36',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-wrapper field-group-fieldset',
      ),
    ),
  );
  $export['group_wrapper|node|apartment|teaser'] = $field_group;

  return $export;
}
