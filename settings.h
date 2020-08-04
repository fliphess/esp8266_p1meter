// **********************************
// * Ledstrip Settings              *
// **********************************

// * Baud rate for both hardware and software serial
#define BAUD_RATE 115200

// * P1 Meter RX pin
#define P1_SERIAL_RX D2

// * Max telegram length
#define P1_MAXLINELENGTH 1024

// * The hostname of our little creature
#define HOSTNAME "p1meter"

// * The password used for OTA
#define OTA_PASSWORD "admin"

// * Wifi timeout in milliseconds
#define WIFI_TIMEOUT 30000

// * MQTT network settings
#define MQTT_MAX_RECONNECT_TRIES 10

// * MQTT root topic
#define MQTT_ROOT_TOPIC "sensors/power/p1meter"

// * MQTT Last reconnection counter
long LAST_RECONNECT_ATTEMPT = 0;

// * To be filled with EEPROM data
char MQTT_HOST[64] = "";
char MQTT_PORT[6]  = "";
char MQTT_USER[32] = "";
char MQTT_PASS[32] = "";

// * Set to store received telegram
char telegram[P1_MAXLINELENGTH];

// * Set to store the data values read
long CONSUMPTION_LOW_TARIF;
long CONSUMPTION_HIGH_TARIF;
long ACTUAL_CONSUMPTION;
long INSTANT_POWER_CURRENT;
long INSTANT_POWER_USAGE;
long GAS_METER_M3;

// Set to store data counters read
long ACTUAL_TARIF;
long SHORT_POWER_OUTAGES;
long LONG_POWER_OUTAGES;
long SHORT_POWER_DROPS;
long SHORT_POWER_PEAKS;

// * Set during CRC checking
unsigned int currentCRC = 0;
