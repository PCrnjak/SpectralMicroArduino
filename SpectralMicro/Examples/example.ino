// Tested on Teensy 4.1 with Spectral Micro
// Use serial1 for communication with the Spectral Micro and usb serial for debugging
// Teensy 4.1 has Serial1 on pins 0 and 1, which are the RX and TX pins respectively
#include <SpectralMicro.h>

SerialCommandLibrary mySerial(Serial1);

void setup() {
    Serial.begin(256000);
    mySerial.begin(256000);
    delay(1000); // Give some time for the serial connection to establish

    // Example commands
    mySerial.KV(0.123);
    mySerial.L(1.234);
    mySerial.R(2.345);
    mySerial.Cal();
}

void loop() {
    mySerial.Cal();
    Serial.println("testing");
    mySerial.loop(); // Continuously check for incoming data
    delay(1000); // Give some time for the serial connection to establish
}
