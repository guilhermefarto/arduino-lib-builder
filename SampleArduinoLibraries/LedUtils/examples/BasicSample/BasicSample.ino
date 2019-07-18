#include <LedUtils.h>

LedUtils ledUtils = LedUtils();

void setup() {
  ledUtils.begin(LED_BUILTIN);
}

void loop() {
  ledUtils.blink();
}
