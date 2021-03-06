<?php
/**
 * @file
 * hk_ct_apart.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hk_ct_apart_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|apartment|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'apartment';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ds_flag_merken' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'adresse' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:14:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:1;s:19:"override_title_text";s:6:"<none>";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"apartment";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'anfrage_button' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'apartmentkarte' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:12:"attachment_1";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:1;s:19:"override_title_text";s:6:"<none>";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"apartment";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'apartment_characteristics' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:17:"apartment-details";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_field',
          'lbw' => 1,
        ),
      ),
    ),
    'expose_drucken' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'lage_von_wohnung_oder_objekt' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:22:"apartment-panel_pane_3";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'objekt_id_vom_objekt' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:22:"apartment-panel_pane_2";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'sonstiges_von_wohnung_oder_objek' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:22:"apartment-panel_pane_4";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'texte_von_wohnung_oder_objekt' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:22:"apartment-panel_pane_1";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'thumbslider' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:16:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_1";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"apartment";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'field_apart_living_space' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_no' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_apart_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Price',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_rooms' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_pictures' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<a href=?width=500&height=500&inline=true#flexslider-1" class="colorbox-inline">',
          'suffix' => '</a>',
        ),
      ),
    ),
    'field_apart_commission' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ausstattung' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'ausstattung',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_apart_floor_plan' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|apartment|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|apartment|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'apartment';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'adresse' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:2:{s:9:"arguments";a:1:{s:3:"nid";s:10:"[node:nid]";}s:7:"context";a:1:{i:0;s:25:"argument_entity_id:node_1";}}s:4:"type";s:11:"views_panes";s:7:"subtype";s:23:"apartment-objektadresse";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="address"><i class="icon-hk-icon-location"></i> ',
          'suffix' => '</div>',
        ),
      ),
    ),
    'neu_label' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_apart_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|apartment|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hk_ct_apart_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'anfrage_button';
  $ds_field->label = 'Anfrage Button';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/anfrage?field_angefragte_wohnung=[node:nid]&template=colorbox&width=600&height=90%25" class="colorbox-node btn full"><?php print t("Inquiry")?></a>
',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['anfrage_button'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'apartment_characteristics';
  $ds_field->label = 'Details';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['apartment_characteristics'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'apartmentkarte';
  $ds_field->label = 'Apartmentkarte';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['apartmentkarte'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'expose_drucken';
  $ds_field->label = 'Exposé drucken';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="/node/[node:nid]/exposes?template=colorbox&width=90%25&height=90%25&iframe=true" class="colorbox-load expose"><?php print t("Print exposé") ?></a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['expose_drucken'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'neu_label';
  $ds_field->label = 'Neu Label';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  if (!empty($entity->created)) {
    $now = new DateTime();
    $interval = ($now->format(\'U\') - $entity->created) / 86400;
    if ($interval <= 40) print "<span class=\\"new\\">Neu!&nbsp;</span>";
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['neu_label'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'objekt_id_vom_objekt';
  $ds_field->label = 'Objekt-ID vom Objekt';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['objekt_id_vom_objekt'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'thumbslider';
  $ds_field->label = 'Thumbslider';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['thumbslider'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hk_ct_apart_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'texte_von_wohnung_oder_objekt',
        1 => 'lage_von_wohnung_oder_objekt',
        2 => 'sonstiges_von_wohnung_oder_objek',
        4 => 'field_apart_pictures',
        5 => 'field_apart_floor_plan',
        6 => 'group_akkordeon',
        7 => 'thumbslider',
        8 => 'group_text',
        11 => 'group_lage',
        13 => 'group_sonstiges',
      ),
      'header' => array(
        3 => 'adresse',
      ),
      'right' => array(
        9 => 'apartmentkarte',
        10 => 'objekt_id_vom_objekt',
        12 => 'field_apart_no',
        14 => 'field_apart_living_space',
        15 => 'field_apart_rooms',
        16 => 'field_apart_price',
        17 => 'field_apart_commission',
        18 => 'anfrage_button',
        19 => 'ds_flag_merken',
        20 => 'expose_drucken',
        21 => 'apartment_characteristics',
        22 => 'field_ausstattung',
      ),
    ),
    'fields' => array(
      'texte_von_wohnung_oder_objekt' => 'left',
      'lage_von_wohnung_oder_objekt' => 'left',
      'sonstiges_von_wohnung_oder_objek' => 'left',
      'adresse' => 'header',
      'field_apart_pictures' => 'left',
      'field_apart_floor_plan' => 'left',
      'group_akkordeon' => 'left',
      'thumbslider' => 'left',
      'group_text' => 'left',
      'apartmentkarte' => 'right',
      'objekt_id_vom_objekt' => 'right',
      'group_lage' => 'left',
      'field_apart_no' => 'right',
      'group_sonstiges' => 'left',
      'field_apart_living_space' => 'right',
      'field_apart_rooms' => 'right',
      'field_apart_price' => 'right',
      'field_apart_commission' => 'right',
      'anfrage_button' => 'right',
      'ds_flag_merken' => 'right',
      'expose_drucken' => 'right',
      'apartment_characteristics' => 'right',
      'field_ausstattung' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|apartment|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_objektid_nunumeric',
        2 => 'field_apart_no',
        3 => 'field_apart_living_space',
        4 => 'field_apart_rooms',
        5 => 'field_moving_in_from',
        6 => 'group_horizontal',
        7 => 'field_apart_price',
        8 => 'group_basic',
        9 => 'group_apart_publish',
        10 => 'field_kategorie',
        11 => 'group_costs',
        12 => 'field_object_ref',
        13 => 'path',
        14 => 'group_returns',
        15 => 'redirect',
        16 => 'group_texte',
        18 => 'group_features',
        20 => 'group_images',
        21 => 'field_apart_description',
        22 => 'field_apart_location',
        23 => 'field_apart_other',
        24 => 'field_apart_floor',
        25 => 'field_apart_hoa_fee',
        26 => 'field_apart_sleeping_rooms',
        27 => 'field_apart_net_rent',
        28 => 'field_apart_price_parking',
        29 => 'field_apart_bathrooms',
        30 => 'field_apart_floor_plan',
        31 => 'field_ausstattung',
        32 => 'field_apart_commission',
        33 => 'field_apart_pictures',
        34 => 'field_save_workflow',
      ),
      'hidden' => array(
        17 => 'language',
        19 => 'field_objekt_wkt',
        35 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_content',
      'field_apart_no' => 'ds_content',
      'field_apart_living_space' => 'ds_content',
      'field_apart_rooms' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'group_horizontal' => 'ds_content',
      'field_apart_price' => 'ds_content',
      'group_basic' => 'ds_content',
      'group_apart_publish' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'group_costs' => 'ds_content',
      'field_object_ref' => 'ds_content',
      'path' => 'ds_content',
      'group_returns' => 'ds_content',
      'redirect' => 'ds_content',
      'group_texte' => 'ds_content',
      'language' => 'hidden',
      'group_features' => 'ds_content',
      'field_objekt_wkt' => 'hidden',
      'group_images' => 'ds_content',
      'field_apart_description' => 'ds_content',
      'field_apart_location' => 'ds_content',
      'field_apart_other' => 'ds_content',
      'field_apart_floor' => 'ds_content',
      'field_apart_hoa_fee' => 'ds_content',
      'field_apart_sleeping_rooms' => 'ds_content',
      'field_apart_net_rent' => 'ds_content',
      'field_apart_price_parking' => 'ds_content',
      'field_apart_bathrooms' => 'ds_content',
      'field_apart_floor_plan' => 'ds_content',
      'field_ausstattung' => 'ds_content',
      'field_apart_commission' => 'ds_content',
      'field_apart_pictures' => 'ds_content',
      'field_save_workflow' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_apart_pictures',
        1 => 'group_card',
        2 => 'flag_merken',
        3 => 'neu_label',
        4 => 'field_kategorie',
        5 => 'title',
        6 => 'field_apart_living_space',
        7 => 'field_apart_price',
        8 => 'adresse',
      ),
    ),
    'fields' => array(
      'field_apart_pictures' => 'ds_content',
      'group_card' => 'ds_content',
      'flag_merken' => 'ds_content',
      'neu_label' => 'ds_content',
      'field_kategorie' => 'ds_content',
      'title' => 'ds_content',
      'field_apart_living_space' => 'ds_content',
      'field_apart_price' => 'ds_content',
      'adresse' => 'ds_content',
    ),
    'limit' => array(
      'field_apart_pictures' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|tile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'tile';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_apart_pictures',
        1 => 'field_apart_category',
        2 => 'field_apart_living_space',
        3 => 'field_apart_price',
        4 => 'field_apart_commission',
        5 => 'field_apart_rooms',
      ),
    ),
    'fields' => array(
      'field_apart_pictures' => 'ds_content',
      'field_apart_category' => 'ds_content',
      'field_apart_living_space' => 'ds_content',
      'field_apart_price' => 'ds_content',
      'field_apart_commission' => 'ds_content',
      'field_apart_rooms' => 'ds_content',
    ),
    'limit' => array(
      'field_apart_pictures' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|tile'] = $ds_layout;

  return $export;
}
