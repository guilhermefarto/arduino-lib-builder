/*
	%LIB_NAME% - %LIB_VERSION%

	%LIB_AUTHOR%
	%LIB_AUTHOR_MAIL%

	%LICENSE%
*/

#ifndef _%LIB_CAP%_H
#define _%LIB_CAP%_H

#if (ARDUINO >= 100) 
# include <Arduino.h>
#else
# include <WProgram.h>
#endif

class %LIB_NAME% {
    private:
    	int _counter;
		void increase();

		bool _ledStatus;

    public:
        %LIB_NAME%();
        void begin();
		void test();
		int next();
		int getCounter();

		void led(bool value);
		bool ledToggle();
};
#endif
