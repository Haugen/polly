api = 2
core = 7.24

projects[advancedqueue][version] = 1.0-alpha2
projects[advancedqueue][subdir] = contrib

projects[air][type] = module
projects[air][download][type] = git
projects[air][download][branch] = 7.x-1.x
projects[air][download][url] = git@github.com:konzilo/air.git
projects[air][subdir] = contrib

projects[coder][version] = 2.0-beta2
projects[coder][subdir] = contrib

projects[ctools][version] = 1.3
projects[ctools][type] = module
projects[ctools][download][type] = git
projects[ctools][download][revision] = 9d092cc
projects[ctools][subdir] = contrib

projects[diff][version] = 3.2
projects[diff][subdir] = contrib

projects[defaultconfig][version] = 1.0-alpha9
projects[defaultconfig][subdir] = contrib
projects[defaultconfig][patch][1900574] = https://drupal.org/files/1900574.defaultconfig.undefinedindex_11.patch

projects[devel][version] = 1.3
projects[devel][subdir] = contrib

projects[elysia_cron][version] = 2.1
projects[elysia_cron][subdir] = contrib

projects[entity][version] = 1.2
projects[entity][subdir] = contrib
projects[entity][patch][1780646] = https://drupal.org/files/1780646-202-entity-node-access_0.patch

projects[entity_mapper][type] = module
projects[entity_mapper][download][type] = git
projects[entity_mapper][download][branch] = 7.x-1.x
projects[entity_mapper][download][url] = git@github.com:konzilo/drupal-entity_mapper.git
projects[entity_mapper][subdir] = contrib

projects[entity_translation][version] = 1.0-beta3
projects[entity_translation][subdir] = contrib

projects[entityreference][version] = 1.1
projects[entityreference][subdir] = contrib

projects[email][version] = 1.2
projects[email][subdir] = contrib

projects[features][version] = 2.0
projects[features][subdir] = contrib

projects[file_entity][version] = 2.0-alpha3
projects[file_entity][subdir] = contrib

projects[globalredirect][version] = 1.5
projects[globalredirect][subdir] = contrib

projects[i18n][version] = 1.9
projects[i18n][subdir] = contrib

projects[inline_entity_form][version] = 1.3
projects[inline_entity_form][subdir] = contrib

projects[konzilo][type] = module
projects[konzilo][download][type] = git
projects[konzilo][download][branch] = 7.x-1.x
projects[konzilo][download][url] = git@github.com:konzilo/drupal-konzilo.git
projects[konzilo][subdir] = contrib

projects[konzilo_features][type] = module
projects[konzilo_features][download][type] = git
projects[konzilo_features][download][branch] = 7.x-1.x
projects[konzilo_features][download][url] = git@github.com:konzilo/konzilo_features.git
projects[konzilo_features][subdir] = contrib

projects[libraries][version] = 2.1
projects[libraries][subdir] = contrib

projects[link][version] = 1.1
projects[link][subdir] = contrib

projects[linkit][version] = 2.6
projects[linkit][subdir] = contrib

projects[markdown][version] = 1.2
projects[markdown][subdir] = contrib

projects[media][version] = 2.0-alpha2
projects[media][subdir] = contrib

projects[menu_block][version] = 2.3
projects[menu_block][subdir] = contrib

projects[metatag][version] = 1.0-beta7
projects[metatag][subdir] = contrib

projects[oauth2_server][version] = 1.0-rc3
projects[oauth2_server][subdir] = contrib

;projects[oembed][version] = 1.0-rc2
projects[oembed][subdir] = contrib
projects[oembed][type] = module
projects[oembed][download][type] = git
projects[oembed][download][revision] = 63898e1

projects[panels][version] = 3.3
projects[panels][subdir] = contrib

projects[panels_everywhere][version] = 1.0-rc1
projects[panels_everywhere][subdir] = contrib

projects[panels_ref_formatter][version] = 1.0-alpha5
projects[panels_ref_formatter][subdir] = contrib

projects[panelizer][version] = 3.1
projects[panelizer][subdir] = contrib

projects[pathauto][version] = 1.2
projects[pathauto][subdir] = contrib

projects[pathologic][version] = 2.11
projects[pathologic][subdir] = contrib

; We need to patch services for oauth2_server to work.
projects[services][type] = module
projects[services][version] = 7.x-3.x
projects[services][download][type] = git
projects[services][download][revision] = 492920e
projects[services][subdir] = contrib
projects[services][patch][1154420] = https://drupal.org/files/fix_controller_settings-1154420-51.patch

projects[strongarm][version] = 2.0
projects[strongarm][subdir] = contrib

projects[title][version] = 1.0-alpha7
projects[title][subdir] = contrib

projects[token][version] = 1.5
projects[token][subdir] = contrib

projects[transliteration][version] = 3.1
projects[transliteration][subdir] = contrib

projects[variable][version] = 2.2
projects[variable][subdir] = contrib

projects[views][version] = 3.7
projects[views][subdir] = contrib

projects[wysiwyg][type] = module
projects[wysiwyg][version] = 2.2
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][revision] = ee64524

projects[xmlsitemap][version] = 2.0-rc2
projects[xmlsitemap][subdir] = contrib

projects[xautoload][version] = 3.3
projects[xautoload][subdir] = contrib

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1.3/ckeditor_4.1.3_standard.zip
libraries[ckeditor][destination] = libraries

libraries[oauth2-server-php][download][type] = get
libraries[oauth2-server-php][download][url] = https://github.com/bshaffer/oauth2-server-php/archive/v1.0.tar.gz
libraries[oauth2-server-php][destination] = libraries

libraries[flexslider][download][type] = get
libraries[flexslider][download][url] = https://github.com/woothemes/FlexSlider/archive/master.zip
libraries[flexslider][destination] = libraries

projects[shiny][type] = theme
projects[shiny][version] = 1.4

projects[zilophy][type] = theme
projects[zilophy][download][type] = git
projects[zilophy][download][url] = git@github.com:konzilo/zilophy.git

projects[mothership][type] = theme
projects[mothership][download][type] = git
projects[mothership][download][revision] = ac8fd6a
projects[mothership][patch][2139097] = https://drupal.org/files/issues/2139097_change_variable_name.patch
