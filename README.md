# SpectralMicroArduino
Arduino library to control your spectral micro over Arduino board!

[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT) ![Issues](https://img.shields.io/github/issues/PCrnjak/Source-Robotics-Toolbox) ![release](https://img.shields.io/github/v/release/PCrnjak/Source-Robotics-Toolbox)


# Example code

### Example: Teensy 4.1 with Spectral Micro

This example demonstrates how to communicate with the Spectral Micro using Serial1 on a Teensy 4.1. USB Serial is used for debugging.

```cpp
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
```

# TODO
* Update uart commands
* Add CAN support
* Examples



# More about our projects
- [Youtube](https://www.youtube.com/channel/UCp3sDRwVkbm7b2M-2qwf5aQ)
- [Instagram](https://www.instagram.com/source_robotics/)
- [Twitter](https://twitter.com/SourceRobotics)
- [Discord](https://discord.com/invite/prjUvjmGpZ )
- [Forum](https://discourse.source-robotics.com/)
- [Blog](https://source-robotics.com/blogs/blog)


# Liability 
1. The software and hardware are still in development and may contain bugs, errors, or incomplete features.
2. Users are encouraged to use this software and hardware responsibly and at their own risk.

# Support the project

The majority of this project is open source and freely available to everyone. Your assistance, whether through donations or advice, is highly valued. Thank you!

 [![General badge](https://img.shields.io/badge/PayPal-00457C?style=for-the-badge&logo=paypal&logoColor=white)](https://paypal.me/PCrnjak?locale.x=en_US)
[![General badge](https://img.shields.io/badge/Patreon-F96854?style=for-the-badge&logo=patreon&logoColor=white)](https://www.patreon.com/PCrnjak)

# Project is under MIT Licence
