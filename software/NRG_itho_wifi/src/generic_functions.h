#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_task_wdt.h"

#include <Arduino.h>
#include <Ticker.h>
#include <ArduinoOTA.h>
#include <ESPmDNS.h>

#include "IthoQueue.h"
#include "SystemConfig.h"
#include "WifiConfig.h"
#include "hardware.h"
#include "globals.h"
#include "Dbglog.h"
#include "flashLog.h"
#include "notifyClients.h"
#include "IthoSystem.h"

// globals

const char *hostName();
void getIthoStatusJSON(JsonObject root);
void getRemotesInfoJSON(JsonObject root);
void getIthoSettingsBackupJSON(JsonObject root);
bool ithoExecCommand(const char *command, cmdOrigin origin);
bool ithoI2CCommand(uint8_t remoteIndex, const char *command, cmdOrigin origin);
bool ithoSetSpeed(const char *speed, cmdOrigin origin);
bool ithoSetSpeed(uint16_t speed, cmdOrigin origin);
bool ithoSetTimer(const char *timer, cmdOrigin origin);
bool ithoSetTimer(uint16_t timer, cmdOrigin origin);
bool ithoSetSpeedTimer(const char *speed, const char *timer, cmdOrigin origin);
bool ithoSetSpeedTimer(uint16_t speed, uint16_t timer, cmdOrigin origin);
void logLastCommand(const char *command, cmdOrigin origin);
void logLastCommand(const char *command, const char *source);
void getLastCMDinfoJSON(JsonObject root);
void updateItho();
void add2queue();
bool writeIthoVal(uint16_t value);
void setRFdebugLevel(uint8_t level);
double round(double value, int precision);
