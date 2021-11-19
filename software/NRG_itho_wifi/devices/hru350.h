#pragma once

const uint8_t itho_HRU350setting1[] { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,255};
const uint8_t itho_HRU350setting3[] { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,74,75,76,77,78,91,79,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,87,88,89,90,255};


const __FlashStringHelper *ithoHRU350SettingsLabels[] =  {
    F("Percentage set 2 (%)"),
    F("Temp frost protection (°C)"),
    F("Frost temp offset (°C)"),
    F("Min frost speed (%)"),
    F("Max frost speed (%)"),
    F("Frost supply fan off time (sec)"),
    F("Frost supply fan on time (sec)"),
    F("Frost speed change (%)"),
    F("Frost speed change (%)"),
    F("Max ratio exhaust / supply during frost protection (%)"),
    F("Summer temp (°C)"),
    F("Summer temp GHE (°C)"),
    F("Summer day time (K*hr)"),
    F("Requested temp bypass regulation (°C)"),
    F("Offset bypass regulation (K)"),
    F("Max bypass open time (hrs)"),
    F("Max rpm fast var. Pwm (rpm)"),
    F("Max rpm slow var. Pwm (rpm)"),
    F("Max rpm  fast fixed pwm (rpm)"),
    F("Speed offset (rpm)"),
    F("High frequency var pwm (kHz)"),
    F("Low frequency var pwm (kHz)"),
    F("High frequency fixed pwm (kHz)"),
    F("Low frequentie fixed pwm (kHz)"),
    F("Start speed vkk exhaust fan (%)"),
    F("Vkk valve close time (sec)"),
    F("Rpm exhaust fan with min position potmeter low (rpm)"),
    F("Rpm exhaust fan with max position potmeter low (rpm)"),
    F("Rpm exhaust fan with vkk with min position potmeter low (rpm)"),
    F("Rpm exhaust fan with vkk with max position potmeter low (rpm)"),
    F("Rpm exhaust fan with min position potmeter high (rpm)"),
    F("Rpm exhaust fan with max position potmeter high (rpm)"),
    F("Min rpm supply fan (rpm)"),
    F("Max rpm supply fan (rpm)"),
    F("Min value balance setting (%)"),
    F("Max value balance setting (%)"),
    F("Min zeta supply value"),
    F("Max zeta supply value"),
    F("Stop both motors with motor fault"),
    F("Correction rpm with min rpm during bypass (%)"),
    F("Correction rpm with max.rpm during bypass (%)"),
    F("Supply fan of during vkk test"),
    F("Manual control"),
    F("Manual speed supply fan (rpm)"),
    F("Manual speed exhaust fan (rpm)"),
    F("Manual valve position"),
    F("Air quality"),
    F("Filter live time (Month)"),
    F("Filter counter (Hours)"),
    F("Output Constant Ca2"),
    F("Output Constant Ca1"),
    F("Output Constant Ca0"),
    F("Output Constant Cb2"),
    F("Output Constant Cb1"),
    F("Output Constant Ca0"),
    F("Output Constant Cc2"),
    F("Output Constant Cc1"),
    F("Output Constant Cc0"),
    F("Supply Constant Ca2"),
    F("Supply Constant Ca1"),
    F("Supply Constant Ca0"),
    F("Supply Constant Cb2"),
    F("Supply Constant Cb1"),
    F("Supply Constant Cb0"),
    F("Supply Constant Cc2"),
    F("Supply Constant Cc1"),
    F("Supply Constant Cc0"),
    F("PIR level 1 (%)"),
    F("PIR level 2 (%)"),
    F("PIR level 1 wait time (sec)"),
    F("PIR level 2 wait time (sec)"),
    F("PIR run-on level 1 (sec)"),
    F("PIR run-on level 2 (sec)"),
    F("Min ventilation level (%)"),
    F("Max time High speed (Min)"),
    F("Max time other speeds (Min)"),
    F("Fallback previous speeds"),
    F("PoorCo2Quality (ppm)"),
    F("GoodCo2Quality (ppm)"),
    F("Inhabitants (Inhab)"),
    F("Night min vent speed 1 person (%)"),
    F("Night min vent speed 2 persons (%)"),
    F("Night min vent speed 3 or more persons (%)"),
    F("Debug only (sec)"),
    F("Debug only (sec)"),
    F("Debug only (min)"),
    F("Debug only (K_min)"),
    F("Debug only (min)"),
    F("Debug only (min)"),
    F("Debug only"),
    F("Debug only (%)"),
    F("Number of floors (floor)"),
    F("Min ventilation level multi-floor (%)"),
    F("Min ventilation level one-floor (%)"),
    F("Night min vent optima 1 multi-floor 1 person (%)"),
    F("Night min vent optima 1 multi-floor 2 persons (%)"),
    F("Night min vent optima 1 multi-floor 3+ persons (%)"),
    F("Night min vent optima 1 one-floor 1 person (%)"),
    F("Night min vent optima 1 one-floor 2 persons (%)"),
    F("Night min vent optima 1 one-floor 3+ persons (%)"),
    F("Night min vent optima 2 multi-floor 1 person (%)"),
    F("Night min vent optima 2 multi-floor 2 persons (%)"),
    F("Night min vent optima 2 multi-floor 3+ persons (%)"),
    F("Night min vent optima 2 one-floor 1 person (%)"),
    F("Night min vent optima 2 one-floor 2 persons (%)"),
    F("Night min vent optima 2 one-floor 3+ persons (%)"),
    F("Summer night boost enable (-)"),
    F("Summer night degree (-)"),
    F("Summer night setpoint (°C)"),
    F("Summer night boost ventilation level (%)"),
    F("Summer night max area degree hours (-)"),
    F("FrostTimer (sec)"),
    F("StartupCounter (sec)"),
    F("BoilerTestTimer (min)"),
    F("SummerCounter (K/min)")
};
const uint8_t itho_HRU350status1_3[] { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,255};


const __FlashStringHelper *ithoHRU350StatusLabels[] =  {
    F("Requested fanspeed (%)"),
    F("Balance (%)"),
    F("Supply fan (rpm)"),
    F("Supply fan actual (rpm)"),
    F("Exhaust fan (rpm)"),
    F("Exhaust fan actual (rpm)"),
    F("Supply temp (°C)"),
    F("Exhaust temp (°C)"),
    F("Status"),
    F("Room temp (°C)"),
    F("Outdoor temp (°C)"),
    F("Valve position"),
    F("Bypass position"),
    F("Summercounter"),
    F("Summerday (K_min)"),
    F("Frost timer"),
    F("Boiler timer"),
    F("Frost block"),
    F("Current position"),
    F("VKKswitch"),
    F("GHEswitch"),
    F("Airfilter counter"),
    F("Global fault code"),
    F("Actual Mode"),
    F("Pir fan speed level"),
    F("Highest received CO2 value (ppm)"),
    F("Highest received RH value (% RH)"),
    F("Air Quality (%)"),
    F("Remaining override timer (sec)"),
    F("Fallback speed timer (sec)")
};



const uint8_t *ithoHRU350SettingsMap[] =      { nullptr, itho_HRU350setting1, nullptr, itho_HRU350setting1 };
const uint8_t  *ithoHRU350StatusMap[] =      { nullptr, itho_HRU350status1_3, nullptr, itho_HRU350status1_3 };

