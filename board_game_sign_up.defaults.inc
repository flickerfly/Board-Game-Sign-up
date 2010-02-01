<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _board_game_sign_up_content_default_fields() {
  $fields = array();

  // Exported field: field_date_time
  $fields[] = array(
    'field_name' => 'field_date_time',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'short',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'long',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datetime',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - H:i:s',
      'input_format_custom' => '',
      'increment' => '15',
      'text_parts' => array(),
      'year_range' => '-1:+3',
      'label_position' => 'above',
      'label' => 'Date & Time',
      'weight' => '-4',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_event_graphic
  $fields[] = array(
    'field_name' => 'field_event_graphic',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'event',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Picture',
      'weight' => '-2',
      'description' => 'Any graphic that represents the event or doesn\'t is fine. It just needs to be original. It can be pictures of people having fun at the location from previous events or just a silly image that makes you laugh and will set the environment.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_event_location
  $fields[] = array(
    'field_name' => 'field_event_location',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'location' => 'location',
      'event' => 0,
      'game' => 0,
      'page' => 0,
      'poll' => 0,
      'table' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '-3',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_game_box_image
  $fields[] = array(
    'field_name' => 'field_game_box_image',
    'type_name' => 'game',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'medium_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'medium_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Box Picture',
      'weight' => '-4',
      'description' => 'A picture of the box the game comes in.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_location_map
  $fields[] = array(
    'field_name' => 'field_location_map',
    'type_name' => 'location',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_location_map][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Map',
      'weight' => '-3',
      'description' => 'Head to <a href="http://local.google.com">Google Maps</a> and find your location. Then click Link in the upper-right to get some HTML to put in this box.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_game
  $fields[] = array(
    'field_name' => 'field_game',
    'type_name' => 'table',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'game' => 'game',
      'event' => 0,
      'location' => 0,
      'page' => 0,
      'poll' => 0,
      'table' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Game',
      'weight' => '-4',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_table_event
  $fields[] = array(
    'field_name' => 'field_table_event',
    'type_name' => 'table',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'event' => 'event',
      'game' => 0,
      'location' => 0,
      'page' => 0,
      'poll' => 0,
      'table' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Event',
      'weight' => '-3',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_table_start_time
  $fields[] = array(
    'field_name' => 'field_table_start_time',
    'type_name' => 'table',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datetime',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '+3 Saturday',
      'default_value2' => 'strtotime',
      'default_value_code2' => '+3 Saturday',
      'input_format' => 'M j Y - g:i:sa',
      'input_format_custom' => '',
      'increment' => '15',
      'text_parts' => array(),
      'year_range' => '-1:+2',
      'label_position' => 'within',
      'label' => 'Start Time',
      'weight' => '-2',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Translatables
  array(
    t('Box Picture'),
    t('Date & Time'),
    t('Event'),
    t('Game'),
    t('Location'),
    t('Map'),
    t('Picture'),
    t('Start Time'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _board_game_sign_up_imagecache_default_presets() {
  $items = array(
    'Sidebar' => array(
      'presetname' => 'Sidebar',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '175px',
            'height' => '200px',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'medium' => array(
      'presetname' => 'medium',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '225px',
            'height' => '250px',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'small' => array(
      'presetname' => 'small',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '50px',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _board_game_sign_up_user_default_permissions() {
  $permissions = array();

  // Exported permission: access all views
  $permissions[] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: access comments
  $permissions[] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: access content
  $permissions[] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access user profiles
  $permissions[] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  // Exported permission: administer all signups
  $permissions[] = array(
    'name' => 'administer all signups',
    'roles' => array(),
  );

  // Exported permission: administer comments
  $permissions[] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
    ),
  );

  // Exported permission: administer signups for own content
  $permissions[] = array(
    'name' => 'administer signups for own content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
    ),
  );

  // Exported permission: administer users
  $permissions[] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'Event Host',
    ),
  );

  // Exported permission: cancel own signups
  $permissions[] = array(
    'name' => 'cancel own signups',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: cancel signups
  $permissions[] = array(
    'name' => 'cancel signups',
    'roles' => array(),
  );

  // Exported permission: change own username
  $permissions[] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create event content
  $permissions[] = array(
    'name' => 'create event content',
    'roles' => array(
      '0' => 'Event Host',
    ),
  );

  // Exported permission: create game content
  $permissions[] = array(
    'name' => 'create game content',
    'roles' => array(
      '0' => 'Table Host',
    ),
  );

  // Exported permission: create location content
  $permissions[] = array(
    'name' => 'create location content',
    'roles' => array(
      '0' => 'Event Host',
    ),
  );

  // Exported permission: create table content
  $permissions[] = array(
    'name' => 'create table content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
    ),
  );

  // Exported permission: delete any event content
  $permissions[] = array(
    'name' => 'delete any event content',
    'roles' => array(),
  );

  // Exported permission: delete any game content
  $permissions[] = array(
    'name' => 'delete any game content',
    'roles' => array(),
  );

  // Exported permission: delete any location content
  $permissions[] = array(
    'name' => 'delete any location content',
    'roles' => array(),
  );

  // Exported permission: delete any table content
  $permissions[] = array(
    'name' => 'delete any table content',
    'roles' => array(),
  );

  // Exported permission: delete own event content
  $permissions[] = array(
    'name' => 'delete own event content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  // Exported permission: delete own game content
  $permissions[] = array(
    'name' => 'delete own game content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  // Exported permission: delete own location content
  $permissions[] = array(
    'name' => 'delete own location content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  // Exported permission: delete own table content
  $permissions[] = array(
    'name' => 'delete own table content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  // Exported permission: edit any event content
  $permissions[] = array(
    'name' => 'edit any event content',
    'roles' => array(),
  );

  // Exported permission: edit any game content
  $permissions[] = array(
    'name' => 'edit any game content',
    'roles' => array(),
  );

  // Exported permission: edit any location content
  $permissions[] = array(
    'name' => 'edit any location content',
    'roles' => array(),
  );

  // Exported permission: edit any table content
  $permissions[] = array(
    'name' => 'edit any table content',
    'roles' => array(),
  );

  // Exported permission: edit own event content
  $permissions[] = array(
    'name' => 'edit own event content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  // Exported permission: edit own game content
  $permissions[] = array(
    'name' => 'edit own game content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  // Exported permission: edit own location content
  $permissions[] = array(
    'name' => 'edit own location content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  // Exported permission: edit own signups
  $permissions[] = array(
    'name' => 'edit own signups',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own table content
  $permissions[] = array(
    'name' => 'edit own table content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  // Exported permission: email all signed up users
  $permissions[] = array(
    'name' => 'email all signed up users',
    'roles' => array(
      '0' => 'Event Host',
    ),
  );

  // Exported permission: email users signed up for own content
  $permissions[] = array(
    'name' => 'email users signed up for own content',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
    ),
  );

  // Exported permission: post comments
  $permissions[] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: rate content
  $permissions[] = array(
    'name' => 'rate content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: sign up for content
  $permissions[] = array(
    'name' => 'sign up for content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view all signups
  $permissions[] = array(
    'name' => 'view all signups',
    'roles' => array(
      '0' => 'Event Host',
    ),
  );

  // Exported permission: view imagecache Sidebar
  $permissions[] = array(
    'name' => 'view imagecache Sidebar',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache medium
  $permissions[] = array(
    'name' => 'view imagecache medium',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache small
  $permissions[] = array(
    'name' => 'view imagecache small',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view revisions
  $permissions[] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'Event Host',
      '1' => 'Table Host',
      '2' => 'Veteran Gamer',
    ),
  );

  return $permissions;
}
