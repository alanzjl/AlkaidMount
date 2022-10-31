// ---------------------------------------------------------------------------------------------------------------------------------
// Configuration for OnStep SmartWebServer Add-on

/*
 *               For more information on setting this addon up see https://onstep.groups.io/g/main/wiki/7119 
 *                           and join the OnStep Groups.io at https://groups.io/g/onstep
 * 
 *           *** Read the compiler warnings and errors, they are there to help guard against invalid configurations ***
*/

// ---------------------------------------------------------------------------------------------------------------------------------
// ADJUST THE FOLLOWING TO CONFIGURE YOUR ADD-ON'S FEATURES ------------------------------------------------------------------------
// <-Req'd = always must set, <-Often = usually must set, Option = optional, Adjust = adjust as req'd, Infreq = infrequently changed

// For Wifi successful startup an AP will appear with an SSID of "ONSTEP", after connecting: the web-site is at "192.168.0.1" and
// the cmd channel is at "192.168.0.1:9999". If locked out selecting "Erase Flash: All Flash Contents" from the Arduino Tools menu 
// before uploading/flashing again can help restore access to the ESP8266.

//      Parameter Name              Value   Default  Notes                                                                      Hint
// OPERATIONAL MODE ----------------------------------------------------------------------------------------------------------------
#define OPERATIONAL_MODE             WIFI //   WIFI, Or use ETHERNET_W5100 or ETHERNET_W5500                                  Adjust

// SERIAL PORTS --------------------------------------------------------------------------------------------------------------------
#define SERIAL_BAUD_DEFAULT          9600 //   9600, Common baud rates for this parameter are 9600,19200,57600,115200,etc.    Infreq
                                          //         The OnStep serial port this is wired to must use the same rate above.
#define SERIAL_BAUD                 57600 //  57600, Or use 19200,57600,115200. For 230400,460800 set all three to the same rate
                                          //         (OnStep and here.)  Automatically uses 19200 if talking to a Mega2560 OnStep.
#define SERIAL_SWAP                  AUTO //   AUTO, Automatic check both, ON for swapped port or OFF for default port only.  Infreq
                                          //         this option is ignored in ETHERNET modes

// STATUS LED ----------------------------------------------------------------------------------------------------------------------
#define LED_STATUS                     ON //     ON, Enable LED flashes while connecting then steady once connected.          Infreq

// DISPLAY -------------------------------------------------------------------------------------------------------------------------
#define DISPLAY_LANGUAGE             L_en //   L_en, English. Specify language with two letter country code, if supported.    Adjust
#define DISPLAY_WEATHER               OFF //    OFF, ON ambient conditions in locale default units.                           Option
#define DISPLAY_INTERNAL_TEMPERATURE  OFF //    OFF, ON internal MCU temp. in locale default units.                           Option
#define DISPLAY_WIFI_SIGNAL_STRENGTH   ON //     ON, Wireless signal strength reported via web interface. OFF otherwise.      Option
#define DISPLAY_RESET_CONTROLS        OFF //    OFF, ON to allow reset of OnStep, FWU for STM32 firmware upload pin HIGH.     Option

#define DISPLAY_SPECIAL_CHARS          ON //     ON, For standard ASCII special symbols (compatibility.)                      Infreq
#define DISPLAY_ADVANCED_CHARS         ON //     ON, For standard "RA/Dec" instead of symbols.                                Infreq
#define DISPLAY_HIGH_PRECISION_COORDS OFF //    OFF, ON for high precision coordinate display on status page.                 Infreq

// DRIVE CONFIGURATION -------------------------------------------------------------------------------------------------------------
#define DRIVE_CONFIGURATION            ON //    ON, to display/modify mount, rotator, focuser settings                        Option
#define DRIVE_MAIN_AXES_MICROSTEPS     ON //    ON, to display Axis1/2 Microsteps if available.                               Option
#define DRIVE_MAIN_AXES_CURRENT        ON //    ON, to display Axis1/2 IRUN if available.                                     Option
#define DRIVE_MAIN_AXES_REVERSE        ON //    ON, to display Axis1/2 Reverse if available.                                  Option

// COMMAND CHANNELS ----------------------------------------------------------------------------------------------------------------
#define STANDARD_COMMAND_CHANNEL       ON //     ON, Enable standard cmd channel port 9999 use w/Android App & ASCOM driver.  Infreq
#define PERSISTENT_COMMAND_CHANNEL     ON //     ON, Enable persistent cmd channel port 9998 use w/INDI? & Stellarium Mobile. Infreq
                                          //         Experimental, possibly causes problems w/standard cmd channel if enabled.

// ENCODER SUPPORT -----------------------------------------------------------------------------------------------------------------
// Some of these settings are stored in NV (EEPROM) as the default values when first uploaded.  Later changes below may be
// ignored unless NV is wiped or you configure to revert to the defaults again at runtime.
// BC_BISSC SUPPORT IS AN EXPERIMENTAL FEATURE
#define ENC_AUTO_SYNC_DEFAULT          ON //     ON, Automatically sync Encoders to OnStep.                                   Option
#define ENC_AUTO_SYNC_MEMORY          OFF //    OFF, ON Remember automatic sync setting across power cycles.                  Option

#define AXIS1_ENC                     OFF //    OFF, CWCCW, AB, BC_BISSC. RA/Azm Axis (A/CW/MA) & (B/CCW/SLO.)                Option
#define AXIS1_ENC_TICKS_DEG      22.22222 // 22.222, n, (ticks/degree.) Encoder ticks per degree.                             Adjust
#define AXIS1_ENC_REVERSE             OFF //    OFF, ON to reverse the count direction.                                       Adjust
#define AXIS1_ENC_DIFF_LIMIT_TO       300 //    300, n, (arcsec.) Minimum diff. between encoder/OnStep for sync. to OnStep    Adjust
#define AXIS1_ENC_DIFF_LIMIT_FROM     OFF //    OFF, n, (arcsec.) Maximum diff. between encoder/OnStep for sync. from OnStep  Adjust
                                          //         for absolute encoders, leave off when setting Zero, then enable.

#define AXIS2_ENC                     OFF //    OFF, CWCCW, AB, BC_BISSC. Dec/Alt Axis (A/CW/MA) & (B/CCW/SLO.)               Option
#define AXIS2_ENC_TICKS_DEG      22.22222 // 22.222, n, (ticks/degree.) Encoder ticks per degree.                             Adjust
#define AXIS2_ENC_REVERSE             OFF //    OFF, ON to reverse the count direction.                                       Option
#define AXIS2_ENC_DIFF_LIMIT_TO       300 //    300, n, (arcsec.) Minimum diff. between encoder/OnStep for sync. to OnStep.   Adjust
#define AXIS2_ENC_DIFF_LIMIT_FROM     OFF //    OFF, n, (arcsec.) Maximum diff. between encoder/OnStep for sync. from OnStep. Adjust
                                          //         for absolute encoders, leave off when setting Zero, then enable.

// ENCODER RATE CONTROL
// THIS IS AN EXPERIMENTAL FEATURE
#define AXIS1_ENC_RATE_CONTROL        OFF //    OFF, ON Rate control for RA high resolution encoder. EQ mounts only.          Infreq
#define AXIS1_ENC_INTPOL_COS          OFF //    OFF, ON enables cosine compensation feature.                                  Infreq
#define AXIS1_ENC_RATE_AUTO           OFF //    OFF, n, (Worm period in seconds.) Adjusts avg encoder pulse rate to account   Option
                                          //         for skew in the average guide rate over the last worm period.            Option
#define AXIS1_ENC_BIN_AVG             OFF //    OFF, n, (Number of bins.)  Enables binned rolling average feature.            Option

// THAT'S IT FOR USER CONFIGURATION!
// -------------------------------------------------------------------------------
