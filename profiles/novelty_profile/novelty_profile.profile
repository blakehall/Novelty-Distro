<?php


/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function novelty_profile_form_install_configure_form_alter(&$form, $form_state) {
  // Create our first node here since by now the required modules will all be enabled.
  // I know this isn't the best way to do it, but come on this profile already requires Bad Judgement.
  $node = new stdClass();
  $node->type = 'domain';
  $node->title = 'Cats';
  $node->uid = 1;
  $node->status= 1;
  $node->field_domain['und'][0]['value'] = 'cats';
  $node->body['und'][0]['safe_value'] = $node->body['und'][0]['value'] = '<img src="http://upload.wikimedia.org/wikipedia/commons/thumb/a/a1/Feral-kitten-eating-adult-cottontail-rabbit.jpg/220px-Feral-kitten-eating-adult-cottontail-rabbit.jpg" />';
  $node->body['und'][0]['format'] = 'full_html';

  node_save($node);

}