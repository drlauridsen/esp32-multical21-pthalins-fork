// JSON payloads for Home Assistant MQTT discovery config

// Water Temp discovery sensor
  String water_temp_json_config = "{";
  water_temp_json_config += "\"name\": \"" + String(water_temp_name) + "\",";
  water_temp_json_config += "\"state_topic\": \"" + String(node_id) + "/0/sensor/mydatajson\",";
  water_temp_json_config += "\"value_template\": \"{{ value_json.WaterTemp }}\",";
  water_temp_json_config += "\"unit_of_measurement\": \"°C\",";
  water_temp_json_config += "\"unique_id\": \"" + String(device_identifier) + "_water_temp\",";
  water_temp_json_config += "\"device_class\": \"temperature\",";
  water_temp_json_config += "\"device\": {";
  water_temp_json_config += "\"identifiers\": [\"" + String(device_identifier) + "\"],";
  water_temp_json_config += "\"name\": \"" + String(device_name) + "\",";
  water_temp_json_config += "\"manufacturer\": \"" + String(device_manufacturer) + "\",";
  water_temp_json_config += "\"model\": \"" + String(device_model) + "\",";
  water_temp_json_config += "\"serial_number\": \"" + String(device_serial) + "\",";
  water_temp_json_config += "\"suggested_area\": \"" + String(device_suggested_area) + "\",";
  water_temp_json_config += "\"hw_version\": \"" + String(device_hw_version) + "\"";
  water_temp_json_config += "}";
  water_temp_json_config += "}";

// Room Temp discovery sensor
  String room_temp_json_config = "{";
  room_temp_json_config += "\"name\": \"" + String(room_temp_name) + "\",";
  room_temp_json_config += "\"state_topic\": \"" + String(node_id) + "/0/sensor/mydatajson\",";
  room_temp_json_config += "\"value_template\": \"{{ value_json.RoomTemp }}\",";
  room_temp_json_config += "\"unit_of_measurement\": \"°C\",";
  room_temp_json_config += "\"unique_id\": \"" + String(device_identifier) + "_room_temp\",";
  room_temp_json_config += "\"device_class\": \"temperature\",";
  room_temp_json_config += "\"device\": {";
  room_temp_json_config += "\"identifiers\": [\"" + String(device_identifier) + "\"],";
  room_temp_json_config += "\"name\": \"" + String(device_name) + "\",";
  room_temp_json_config += "\"manufacturer\": \"" + String(device_manufacturer) + "\",";
  room_temp_json_config += "\"model\": \"" + String(device_model) + "\",";
  room_temp_json_config += "\"serial_number\": \"" + String(device_serial) + "\",";
  room_temp_json_config += "\"suggested_area\": \"" + String(device_suggested_area) + "\",";
  room_temp_json_config += "\"hw_version\": \"" + String(device_hw_version) + "\"";
  room_temp_json_config += "}";
  room_temp_json_config += "}";

  // Water Usage discovery sensor
  String water_usage_json_config = "{";
  water_usage_json_config += "\"name\": \"" + String(water_usage_name) + "\",";
  water_usage_json_config += "\"state_topic\": \"" + String(node_id) + "/0/sensor/mydatajson\",";
  water_usage_json_config += "\"value_template\": \"{{ value_json.CurrentValue }}\",";
  water_usage_json_config += "\"unit_of_measurement\": \"m³\",";
  water_usage_json_config += "\"unique_id\": \"" + String(device_identifier) + "_usage\",";
  water_usage_json_config += "\"device_class\": \"water\",";
  water_usage_json_config += "\"state_class\": \"total_increasing\",";
  water_usage_json_config += "\"device\": {";
  water_usage_json_config += "\"identifiers\": [\"" + String(device_identifier) + "\"],";
  water_usage_json_config += "\"name\": \"" + String(device_name) + "\",";
  water_usage_json_config += "\"manufacturer\": \"" + String(device_manufacturer) + "\",";
  water_usage_json_config += "\"model\": \"" + String(device_model) + "\",";
  water_usage_json_config += "\"serial_number\": \"" + String(device_serial) + "\",";
  water_usage_json_config += "\"suggested_area\": \"" + String(device_suggested_area) + "\",";
  water_usage_json_config += "\"hw_version\": \"" + String(device_hw_version) + "\"";
  water_usage_json_config += "}";
  water_usage_json_config += "}";

  // Water Meter Month Start Value discovery sensor
  String water_usage_month_start_json_config = "{";
  water_usage_month_start_json_config += "\"name\": \"" + String(water_usage_month_start_name) + "\",";
  water_usage_month_start_json_config += "\"state_topic\": \"" + String(node_id) + "/0/sensor/mydatajson\",";
  water_usage_month_start_json_config += "\"value_template\": \"{{ value_json.MonthStartValue }}\",";
  water_usage_month_start_json_config += "\"unit_of_measurement\": \"m³\",";
  water_usage_month_start_json_config += "\"unique_id\": \"" + String(device_identifier) + "_month_start_value\",";
  water_usage_month_start_json_config += "\"device_class\": \"water\",";
  water_usage_month_start_json_config += "\"state_class\": \"total_increasing\",";
  water_usage_month_start_json_config += "\"device\": {";
  water_usage_month_start_json_config += "\"identifiers\": [\"" + String(device_identifier) + "\"],";
  water_usage_month_start_json_config += "\"name\": \"" + String(device_name) + "\",";
  water_usage_month_start_json_config += "\"manufacturer\": \"" + String(device_manufacturer) + "\",";
  water_usage_month_start_json_config += "\"model\": \"" + String(device_model) + "\",";
  water_usage_month_start_json_config += "\"serial_number\": \"" + String(device_serial) + "\",";
  water_usage_month_start_json_config += "\"suggested_area\": \"" + String(device_suggested_area) + "\",";
  water_usage_month_start_json_config += "\"hw_version\": \"" + String(device_hw_version) + "\"";
  water_usage_month_start_json_config += "}";
  water_usage_month_start_json_config += "}";