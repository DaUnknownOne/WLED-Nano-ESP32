# WLED-Nano-ESP32
Custom Usermod for WLED that turns off the RGB LED of the Arduino Nano ESP32 so it doesn't remain in its bootloader indication state.

Normally, the Arduino Bootloader cycles the 3 GPIOs of the onboard RGB LED to reset it upon each boot. When installing a program directly to the ESP32-S3 chip instead of through the Arduino IDE or similar paths, the Arduino Bootloader gets overridden and the RGB LED remains in the state is was when the bootloader mode is active for flashing (faint purple color). This Usermod sets the pins to the correct state so the RGB LED turns off.
