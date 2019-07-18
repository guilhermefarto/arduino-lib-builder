/*
	LedUtils - 1.0.0

	Guilherme de Cleva Farto
	guilherme.farto@gmail.com

	Creative Commons Attribution Share-Alike
*/

#include <LedUtils.h>

LedUtils::LedUtils() {
}

void LedUtils::begin(int pin) {
	_pin = pin;
	_status = false;
	pinMode(_pin, OUTPUT);
}

void LedUtils::blink() {
	digitalWrite(_pin, HIGH);
	delay(1000);
	digitalWrite(_pin, LOW);
	delay(1000);
}

bool LedUtils::toggle() {
	_status = !_status;

	digitalWrite(_pin, _status ? HIGH : LOW);

	return _status;
}
