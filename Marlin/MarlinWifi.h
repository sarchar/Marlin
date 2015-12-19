#ifndef MARLIN_WIFI_H
#define MARLIN_WIFI_H

#define WIFI_COMMAND_MAGIC1 ((uint8_t)0xAC)
#define WIFI_COMMAND_MAGIC2 ((uint8_t)0xE9)

#define WIFI_COMMAND_STATUS ((uint8_t)0x01)
#define WIFI_COMMAND_STATUS_ERROR ((uint8_t)0x00)
#define WIFI_COMMAND_STATUS_IDLE ((uint8_t)0x01)
#define WIFI_COMMAND_STATUS_PRINTING ((uint8_t)0x02)

#define WIFI_COMMAND_SERIAL ((uint8_t)0x02)

#endif
