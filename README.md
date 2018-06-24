# esp8266_p1meter

Software for the ESP2866 that sends P1 smart meter data to an mqtt broker (with CRC checking and OTA firmware updates)

### Connection of the P1 meter to the ESP8266

| ESP8266 Pin | P1 Pin |
| ----        | ----   |
| GND         | GND    |
| 3V3         | RTS    |
| DATA (RXD)  | D2     |

To connect my Landys and Gyr E350 (ZCF110), I used a 10K resistor connected between DATA (RXD) and RTS.
Many howto's mention RTS requires 5V (VIN) to activate the P1 port, but for me 3V3 suffices.

![RJ11 P1 connetor](http://gejanssen.com/howto/Slimme-meter-uitlezen/RJ11-pinout.png)


## Thanks to

This sketch is mostly copied and pasted from several other projects.
Standing on the heads of giants, big thanks and great respect to:

- https://github.com/jantenhove/P1-Meter-ESP8266
- https://github.com/neographikal/P1-Meter-ESP8266-MQTT
- http://romix.macuser.nl/software.html

