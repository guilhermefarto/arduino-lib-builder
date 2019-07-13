#include <%LIB_NAME%.h>

%LIB_NAME% %LIB_NAME_OBJ% = %LIB_NAME%();

void setup() {
  Serial.begin(9600);

  Serial.println("%LIB_NAME% - Basic Sample");

  %LIB_NAME_OBJ%.begin();

  delay(2000);
}

void loop() {
  %LIB_NAME_OBJ%.test();

  Serial.println(%LIB_NAME_OBJ%.getCounter());

  bool status = %LIB_NAME_OBJ%.ledToggle();

  Serial.println(status ? "Led is on" : "Led is off");

  // %LIB_NAME_OBJ%.led(status);

  delay(1000);
}
