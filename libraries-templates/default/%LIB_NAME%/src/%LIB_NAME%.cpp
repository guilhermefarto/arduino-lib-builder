/*
	%LIB_NAME% - %LIB_VERSION%

	%LIB_AUTHOR%
	%LIB_AUTHOR_MAIL%

	%LICENSE%
*/

#include <%LIB_NAME%.h>

%LIB_NAME%::%LIB_NAME%() {
}

void %LIB_NAME%::begin() {
	_counter = 0;

	pinMode(LED_BUILTIN, OUTPUT);
}

void %LIB_NAME%::test() {
	Serial.print("Testing : ");
	Serial.println(_counter);

	increase();
}

void %LIB_NAME%::increase() {
	_counter++;
}

int %LIB_NAME%::next() {
	increase();

	return _counter;
}

int %LIB_NAME%::getCounter() {
	return _counter;
}

void %LIB_NAME%::led(bool value) {
	_ledStatus = value;

	digitalWrite(LED_BUILTIN, value ? HIGH : LOW);
}

bool %LIB_NAME%::ledToggle() {
	_ledStatus = !_ledStatus;

	led(_ledStatus);

	return _ledStatus;
}
