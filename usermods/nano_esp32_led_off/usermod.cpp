#include "wled.h"

class UsermodNanoESP32LedOff : public Usermod {
  public:
    void setup() override {
		
      const uint8_t PIN_RED   = 46;
      const uint8_t PIN_GREEN = 0;
      const uint8_t PIN_BLUE  = 45;

      pinMode(PIN_RED, OUTPUT);
      pinMode(PIN_GREEN, OUTPUT);
      pinMode(PIN_BLUE, OUTPUT);

      digitalWrite(PIN_RED, HIGH);
      digitalWrite(PIN_GREEN, HIGH);
      digitalWrite(PIN_BLUE, HIGH);
    }

    void loop() override {
      // Empty
    }
};

REGISTER_USERMOD(UsermodNanoESP32LedOff);
