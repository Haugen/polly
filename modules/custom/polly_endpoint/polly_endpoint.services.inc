<?php
/**
 * @file
 * polly_endpoint.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function polly_endpoint_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'polly';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'polly';
  $endpoint->authentication = array(
    'oauth2_server' => array(
      'server' => 'polly',
    ),
  );
  $endpoint->server_settings = array(
    'formatters' => array(
      'bencode' => TRUE,
      'json' => TRUE,
      'php' => TRUE,
      'xml' => TRUE,
      'jsonp' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/xml' => TRUE,
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
      'application/x-www-form-urlencoded' => FALSE,
    ),
  );
  $endpoint->resources = array(
    'job' => array(
      'operations' => array(
        'create' => array(
          'enabled' => '1',
          'settings' => array(
            'oauth2_server' => array(
              'require_authentication' => '1',
              'scope' => '',
            ),
          ),
        ),
        'retrieve' => array(
          'enabled' => '1',
          'settings' => array(
            'oauth2_server' => array(
              'require_authentication' => '1',
              'scope' => '',
            ),
          ),
        ),
        'update' => array(
          'enabled' => '1',
          'settings' => array(
            'oauth2_server' => array(
              'require_authentication' => '1',
              'scope' => '',
            ),
          ),
        ),
        'index' => array(
          'enabled' => '1',
          'settings' => array(
            'oauth2_server' => array(
              'require_authentication' => '1',
              'scope' => '',
            ),
          ),
        ),
      ),
    ),
    'pubsettings' => array(
      'operations' => array(
        'create' => array(
          'enabled' => '1',
          'settings' => array(
            'oauth2_server' => array(
              'require_authentication' => '1',
              'scope' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['polly'] = $endpoint;

  return $export;
}
