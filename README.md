# Arduino Lib Builder

This project aims to simplify the (initial) development of new libraries for the Arduino platform.

The official page for this project is: [https://github.com/guilhermefarto/arduino-lib-builder](https://github.com/guilhermefarto/arduino-lib-builder)

## Usage

* (i) Create an OS environment variable `"ARDUINO_HOME"` that points to the directory Arduino IDE installation directory;

* (ii) Copy the ["libraries-templates" directory](https://github.com/guilhermefarto/arduino-lib-builder/tree/master/libraries-templates) (from GitHub) to the root directory of the Arduino IDE;

* (iii) Install [Nodejs](https://nodejs.org/en/) (version equal or greater than v10.13.0)

* (iv) Install **`arduino-lib-builder`** package from NPM:

> `npm install -g arduino-lib-builder`

* (v) Execute **`arduino-lib-builder`**:

> `arduino-lib-builder`

* (vi) Fill in the information needed to build the new Arduino library:

| Building a new Arduino library |
| ------------------------ |
| ![](assets/arduino-lib-builder.png) |

## Additional information

1. After the new library is generated for the Arduino platform, the Visual Studio Code will be initialized based on the directory where the library was generated (_if Visual Studio Code is installed_);

| Visual Studio Code initialized with generated Arduino library source |
| ------------------------ |
| ![](assets/ArduinoLibrary_sample1.png) |

2. The Arduino IDE will also be initialized;

| Arduino IDE showing example of generated library |
| ------------------------ |
| ![](assets/ArduinoLibrary_sample2.png) |

## Dependencies

* npm install --save chalk figlet inquirer shelljs
* npm install --save ncp
* npm install --save replace-in-file
* npm install --save rimraf

## Contact / License

Feel free to contact me by mail: guilherme.farto@gmail.com
