#ifndef SERIALCOMMANDLIBRARY_H
#define SERIALCOMMANDLIBRARY_H

#include <Arduino.h>

class SerialCommandLibrary {
public:
    SerialCommandLibrary(HardwareSerial& serialPort);
    void begin(long baudRate);
    void KV(float value);
    void L(float value);
    void R(float value);
    void Cal();
    void loop();

private:
    HardwareSerial& _serialPort;
    void sendCommand(const String& command);
};

#endif // SERIALCOMMANDLIBRARY_H
