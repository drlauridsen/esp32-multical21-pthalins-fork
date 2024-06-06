#ifndef MQTTSENSORCONFIG_H
#define MQTTSENSORCONFIG_H

// You probably want to customize between --- but the rest is optional
// --
// Enable/Disable the Home Assistant discovery sensors, 0 or 1, default is 1 = enabled
const bool enable_HA_discovery_sensors = 1;

// MQTT Device details - these are the device info that is shown for the Home Assistant auto discovered MQTT device
const char* device_name = "Watermeter TEST";
const char* device_manufacturer = "Kamstrup";
const char* device_model = "Multical 21";
const char* device_serial = "123456789";
const char* device_identifier = "watermeter_123456789";  // Unique ID for the device
const char* device_suggested_area = "";
const char* device_hw_version = "";

// Sensor names (mqtt sensors will have device name + sensor name as friendly name in HA, so dont include device name in sensor name)
const char* water_temp_name = "Water Temperature";
const char* room_temp_name = "Room Temperature";
const char* water_usage_name = "Usage";
const char* water_usage_month_start_name = "Month Start Value";

// Nodeid is part of all MQTT topics, default is "watermeter", if more than one watermeter, change this for every device
const char* node_id = "watermeter_test";
// ---

// Prefix for HA autodicovery topics, default is homeassistant
const char* discovery_prefix = "homeassistant";

// MQTT sensor discovery config topics
const char* water_temp_config_topic = "water_temp";
const char* room_temp_config_topic = "room_temp";
const char* water_usage_config_topic = "water_usage";
const char* water_usage_month_start_config_topic = "water_usage_month_start";
#endif // MQTTSENSORCONFIG_H