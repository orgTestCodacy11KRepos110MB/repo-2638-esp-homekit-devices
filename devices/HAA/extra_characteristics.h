/*
 * Home Accessory Architect
 *
 * Copyright 2019-2020 José Antonio Jiménez Campos (@RavenSystem)
 *
 */

#ifndef __HAA_EXTRA_CHARACTERISTICS__
#define __HAA_EXTRA_CHARACTERISTICS__

#define HOMEKIT_CUSTOM_SERVICE_UUID(value)                          (value "-0218-2017-81BF-AF2B7C833924")
#define HOMEKIT_CUSTOM_UUID(value)                                  (value "-0218-2017-81BF-AF2B7C833922")
#define HOMEKIT_CUSTOM_EXTRA_UUID(value)                            (value "-0218-2017-81BF-AF2B7C833923")
#define HOMEKIT_CUSTOM_CH_DATE_UUID(value)                          (value "-0218-2017-81BF-AF2B7C833925")

// HAA SERVICES
#define HOMEKIT_SERVICE_CUSTOM_POWER_MONITOR                        HOMEKIT_CUSTOM_SERVICE_UUID("F0000900")
#define HOMEKIT_SERVICE_CUSTOM_DATA_HISTORY                         HOMEKIT_CUSTOM_SERVICE_UUID("F0009000")
#define HOMEKIT_SERVICE_CUSTOM_FREE_MONITOR                         HOMEKIT_CUSTOM_SERVICE_UUID("F0090000")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_SWITCH                    HOMEKIT_CUSTOM_SERVICE_UUID("A0000001")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_PROGRAMMABLE_SWITCH       HOMEKIT_CUSTOM_SERVICE_UUID("A0000003")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_LOCK                      HOMEKIT_CUSTOM_SERVICE_UUID("A0000004")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_BINARY_SENSOR             HOMEKIT_CUSTOM_SERVICE_UUID("A0000005")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_AIR_QUALITY_SENSOR        HOMEKIT_CUSTOM_SERVICE_UUID("A0000015")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_VALVE                     HOMEKIT_CUSTOM_SERVICE_UUID("A0000020")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_HEATER_COOLER             HOMEKIT_CUSTOM_SERVICE_UUID("A0000021")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_TEMPERATURE_SENSOR        HOMEKIT_CUSTOM_SERVICE_UUID("A0000022")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_HUMIDITY_SENSOR           HOMEKIT_CUSTOM_SERVICE_UUID("A0000023")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_HUMIDIFIER_DEHUMIDIFIER   HOMEKIT_CUSTOM_SERVICE_UUID("A0000026")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_LIGHTBULB                 HOMEKIT_CUSTOM_SERVICE_UUID("A0000030")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_GARAGE_DOOR_OPENER        HOMEKIT_CUSTOM_SERVICE_UUID("A0000040")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_WINDOW_COVERING           HOMEKIT_CUSTOM_SERVICE_UUID("A0000045")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_LIGHT_SENSOR              HOMEKIT_CUSTOM_SERVICE_UUID("A0000050")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_SECURITY_SYSTEM           HOMEKIT_CUSTOM_SERVICE_UUID("A0000055")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_TELEVISION                HOMEKIT_CUSTOM_SERVICE_UUID("A0000060")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_INPUT_SOURCE              HOMEKIT_CUSTOM_SERVICE_UUID("A0000160")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_FAN                       HOMEKIT_CUSTOM_SERVICE_UUID("A0000065")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_BATTERY_SERVICE           HOMEKIT_CUSTOM_SERVICE_UUID("A0000070")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_POWER_MONITOR             HOMEKIT_CUSTOM_SERVICE_UUID("A0000075")
#define HOMEKIT_SERVICE_CUSTOM_HAA_HIDDEN_FREE_MONITOR              HOMEKIT_CUSTOM_SERVICE_UUID("A0000076")

// HAA SETUP OPTIONS
#define HOMEKIT_SERVICE_CUSTOM_SETUP_OPTIONS                        HOMEKIT_CUSTOM_UUID("F0000100")

#define HOMEKIT_CHARACTERISTIC_CUSTOM_SETUP_OPTION HOMEKIT_CUSTOM_UUID("F0000101")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_SETUP_OPTION(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_SETUP_OPTION, \
    .format = HOMEKIT_FORMAT_STRING, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_PAIRED_WRITE \
                | HOMEKIT_PERMISSIONS_HIDDEN, \
    .value = HOMEKIT_STRING_(_value), \
    ##__VA_ARGS__

// HAA DATA HISTORY
#define HOMEKIT_CHARACTERISTIC_CUSTOM_DATA_HISTORY HOMEKIT_CUSTOM_EXTRA_UUID("F9900000")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_DATA_HISTORY(_value, _size, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_DATA_HISTORY, \
    .format = HOMEKIT_FORMAT_DATA, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_HIDDEN, \
    .value = HOMEKIT_DATA_(_value, _size), \
    ##__VA_ARGS__

// HAA FREE MONITOR
#define HOMEKIT_CHARACTERISTIC_CUSTOM_FREE_VALUE HOMEKIT_CUSTOM_EXTRA_UUID("F0090001")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_FREE_VALUE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_FREE_VALUE, \
    .description = "Value", \
    .format = HOMEKIT_FORMAT_FLOAT, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_NOTIFY, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

// HAA POWER MONITOR
#define HOMEKIT_CHARACTERISTIC_CUSTOM_VOLT HOMEKIT_CUSTOM_EXTRA_UUID("F0000901")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_VOLT(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_VOLT, \
    .description = "Voltage", \
    .format = HOMEKIT_FORMAT_FLOAT, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_NOTIFY, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CUSTOM_AMPERE HOMEKIT_CUSTOM_EXTRA_UUID("F0000902")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_AMPERE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_AMPERE, \
    .description = "Current", \
    .format = HOMEKIT_FORMAT_FLOAT, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_NOTIFY, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CUSTOM_WATT HOMEKIT_CUSTOM_EXTRA_UUID("F0000903")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_WATT(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_WATT, \
    .description = "Power", \
    .format = HOMEKIT_FORMAT_FLOAT, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_NOTIFY, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CUSTOM_CONSUMP HOMEKIT_CUSTOM_EXTRA_UUID("F0000904")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_CONSUMP(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_CONSUMP, \
    .description = "Consumption", \
    .format = HOMEKIT_FORMAT_FLOAT, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_NOTIFY, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CUSTOM_CONSUMP_RESET_DATE HOMEKIT_CUSTOM_CH_DATE_UUID("F0000905")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_CONSUMP_RESET_DATE(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_CONSUMP_RESET_DATE, \
    .description = "Last Reset", \
    .format = HOMEKIT_FORMAT_INT, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_NOTIFY \
                | HOMEKIT_PERMISSIONS_HIDDEN, \
    .value = HOMEKIT_INT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CUSTOM_CONSUMP_BEFORE_RESET HOMEKIT_CUSTOM_EXTRA_UUID("F0000906")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_CONSUMP_BEFORE_RESET(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_CONSUMP_BEFORE_RESET, \
    .description = "Last Consumption", \
    .format = HOMEKIT_FORMAT_FLOAT, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_NOTIFY, \
    .value = HOMEKIT_FLOAT_(_value), \
    ##__VA_ARGS__

#define HOMEKIT_CHARACTERISTIC_CUSTOM_CONSUMP_RESET HOMEKIT_CUSTOM_UUID("F0000907")
#define HOMEKIT_DECLARE_CHARACTERISTIC_CUSTOM_CONSUMP_RESET(_value, ...) \
    .type = HOMEKIT_CHARACTERISTIC_CUSTOM_CONSUMP_RESET, \
    .description = "Reset", \
    .format = HOMEKIT_FORMAT_STRING, \
    .permissions = HOMEKIT_PERMISSIONS_PAIRED_READ \
                | HOMEKIT_PERMISSIONS_PAIRED_WRITE \
                | HOMEKIT_PERMISSIONS_HIDDEN, \
    .value = HOMEKIT_STRING_(_value), \
    ##__VA_ARGS__

#endif  // __HAA_EXTRA_CHARACTERISTICS__
