#define FIXED_CONFIG_NO_EEPROM

#define FIXED_RF_POWER 7
#define FIXED_CARRIER_FREQUENCY 435000000  // Hz  startup frequency
#define FIXED_CHANNEL_SPACING 5 // 50kHz
#define FIXED_HOPLIST 22,10,19,34,49,41
#define FIXED_RF_MAGIC 0xDEADFEED
#define FIXED_DATARATE 2
#define FIXED_BAUDRATE 115200
#define FIXED_FLAGS (0x01 | 0x10)

struct RX_config fixed_RXConfig;

fixed_RXConfig.rx_type = 0;
fixed_RXConfig.pinMapping = 123456; // 13 er array
fixed_RXConfig.flags = ALWAYS_BIND;
fixed_RXConfig.RSSIpwm = 255; // disabled
fixed_RXConfig.beacon_frequency = 0; // disabled beacon
fixed_RXConfig.beacon_deadtime = 30; // 30s till beaconmode is enabled
fixed_RXConfig.beacon_interval = 10; // transmit beacon every 10 seconds!
fixed_RXConfig.minsync = 3000;
fixed_RXConfig.failsafeDelay = 10; // 1 second
fixed_RXConfig.ppmStopDelay = 0;
fixed_RXConfig.pwmStopDelay = 0;
