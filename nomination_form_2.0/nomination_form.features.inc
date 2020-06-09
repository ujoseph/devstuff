<?php

/**
 * @file
 * nomination_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nomination_form_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function nomination_form_default_entityform_type() {
  $items = array();
  $items['2021_nomination_form'] = entity_import('entityform_type', '{
    "type" : "2021_nomination_form",
    "label" : "2021 Nomination Form",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : 0, "3" : 0, "4" : 0, "5" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003E\\u003Cstrong\\u003ENational Medal for Museum and Library Service\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E(To be completed by the nominated organization.)\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "anonymous_links" : 0,
      "session_save" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
