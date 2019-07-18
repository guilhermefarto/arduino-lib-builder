/*
	LedUtils - 1.0.0

	Guilherme de Cleva Farto
	guilherme.farto@gmail.com

	Creative Commons Attribution Share-Alike
*/

#ifndef _ledutils_H
#define _ledutils_H

#if (ARDUINO >= 100) 
# include <Arduino.h>
#else
# include <WProgram.h>
#endif

class LedUtils {
    private:
    	int _pin;
		bool _status;

    public:
        LedUtils();
        void begin(int pin);
		void blink();
		bool toggle();
};
#endif
