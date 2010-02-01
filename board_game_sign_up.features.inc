<?php

/**
 * Implementation of hook_content_default_fields().
 */
function board_game_sign_up_content_default_fields() {
  module_load_include('inc', 'board_game_sign_up', 'board_game_sign_up.defaults');
  $args = func_get_args();
  return call_user_func_array('_board_game_sign_up_content_default_fields', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function board_game_sign_up_imagecache_default_presets() {
  module_load_include('inc', 'board_game_sign_up', 'board_game_sign_up.defaults');
  $args = func_get_args();
  return call_user_func_array('_board_game_sign_up_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function board_game_sign_up_node_info() {
  module_load_include('inc', 'board_game_sign_up', 'board_game_sign_up.features.node');
  $args = func_get_args();
  return call_user_func_array('_board_game_sign_up_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function board_game_sign_up_views_default_views() {
  module_load_include('inc', 'board_game_sign_up', 'board_game_sign_up.features.views');
  $args = func_get_args();
  return call_user_func_array('_board_game_sign_up_views_default_views', $args);
}
