<?php
/**********************************************************************
    Copyright (C) Grameen Solutions Ltd.(www.grameensolutions.com)
***********************************************************************/
include_once($path_to_root . "/includes/date_functions.inc");
include_once($path_to_root . "/includes/banking.inc");
include_once($path_to_root . "/includes/manufacturing.inc");

include_once($path_to_root . "/inventory/includes/db/items_category_db.inc");
include_once($path_to_root . "/inventory/includes/db/items_trans_db.inc");
include_once($path_to_root . "/inventory/includes/db/items_prices_db.inc");
include_once($path_to_root . "/inventory/includes/db/items_purchases_db.inc");
include_once($path_to_root . "/inventory/includes/db/items_codes_db.inc");
include_once($path_to_root . "/inventory/includes/db/items_db.inc");
include_once($path_to_root . "/inventory/includes/db/items_locations_db.inc");
include_once($path_to_root . "/inventory/includes/db/movement_types_db.inc");
include_once($path_to_root . "/inventory/includes/db/items_adjust_db.inc");
include_once($path_to_root . "/inventory/includes/db/items_transfer_db.inc");
include_once($path_to_root . "/inventory/includes/db/items_units_db.inc");

function item_img_name($stock_id)
{
	return strtr($stock_id, "><\\/:|*?", '________');
}

?>