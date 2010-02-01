<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _board_game_sign_up_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('An event is simply a date, time, location and description. It will have tables associated with it to facilitate the gathering of multiple games (each indicated by tables) at an event.'),
      'has_title' => '1',
      'title_label' => t('Event Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'game' => array(
      'name' => t('Game'),
      'module' => 'features',
      'description' => t('A game has a name, description and picture to go along with it. If various version of the same game exist, such as expansion packs to a game, they should be entered as a separate game.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'location' => array(
      'name' => t('Location'),
      'module' => 'features',
      'description' => t('Information about a place where games are played.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('Information like size, directions, parking and who the main contact person with contact information should be put into the description field to help people make it to any event. Please also list information like stairs other things that may be important for handicapped people.'),
    ),
    'table' => array(
      'name' => t('Table'),
      'module' => 'features',
      'description' => t('A table is associated with events. There is one game on each table. The same game may be played on multiple tables. When people sign-up for an event, they sign up for one or more specific tables. Table conversation can also be had prior to the event in the comment area.

Tables have a game, start time, event associations and sign-ups.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
