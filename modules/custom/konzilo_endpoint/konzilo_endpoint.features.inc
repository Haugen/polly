<?php
/**
 * @file
 * konzilo_endpoint.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function konzilo_endpoint_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_default_oauth2_server().
 */
function konzilo_endpoint_default_oauth2_server() {
  $items = array();
  $items['konzilo'] = entity_import('oauth2_server', '{
    "name" : "konzilo",
    "label" : "konzilo",
    "settings" : {
      "enforce_state" : true,
      "default_scope" : "basic",
      "allow_implicit" : 0,
      "grant_types" : {
        "authorization_code" : "authorization_code",
        "refresh_token" : "refresh_token",
        "client_credentials" : 0,
        "password" : 0
      },
      "always_issue_new_refresh_token" : 1,
      "access_lifetime" : "3600",
      "refresh_token_lifetime" : "1209600"
    },
    "scopes" : [
      {
        "name" : "basic",
        "description" : "View basic information about your account."
      }
    ]
  }');
  return $items;
}
