#include <SpectralMicro.h>

SerialCommandLibrary mySerial(Serial);

void setup() {
    Serial.begin(9600);
    mySerial.begin(9600);
    delay(1000); // Give some time for the serial connection to establish

    // Example commands
    mySerial.KV(0.123);
    mySerial.L(1.234);
    mySerial.R(2.345);
    mySerial.Cal();
}

void loop() {
    mySerial.loop(); // Continuously check for incoming data
}
