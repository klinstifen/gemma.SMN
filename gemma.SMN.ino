/**
*
*  gemma.SMN
*
*  Convert string to morse code and display via Neopixels
*
*  7/6/2015
*  klinstifen
*  https://github.com/klinstifen/gemma.SMN
*
**/

#include <Adafruit_NeoPixel.h>

// --- BEGIN DECLARATION (PINS, PIXELS, COLORS, ETC) ---

#define PIN 1
#define NUMPIXELS 12
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

uint32_t red = pixels.Color(255, 0, 0);
uint32_t lightred = pixels.Color(140, 0, 0);
uint32_t off = pixels.Color(0, 0, 0);

uint8_t dit = 60;
uint8_t dah = 180;
uint8_t shogap = 180;
uint8_t medgap = 420;
uint8_t interchar = 60;

// --- END DECLARATION (PINS, PIXELS, COLORS, ETC) ---

void setup() {
  pixels.begin(); // Initialize the NeoPixel library.
  pixels.show();
}

void loop() {
  convert("paris");
  convert("hello world");
  convert("i am a leaf on the wind watch how i soar");
  convert("be a rock in the stream");
}

/**
 * 
 * Convert messages to morse code
 * 
 */
void convert(String mCode) {
  for (int i = 0; i < mCode.length() + 1; i++) {
    switch (mCode.charAt(i)) {
      case 'a':
        mark(dit);
        mark(dah);
        break;
      case 'b':
        mark(dah);
        mark(dit);
        mark(dit);
        mark(dit);
        break;
      case 'c':
        mark(dah);
        mark(dit);
        mark(dah);
        mark(dit);
        break;
      case 'd':
        mark(dah);
        mark(dit);
        mark(dit);
        break;
      case 'e':
        mark(dit);
        break;
      case 'f':
        mark(dit);
        mark(dit);
        mark(dah);
        mark(dit);
        break;
      case 'g':
        mark(dah);
        mark(dah);
        mark(dit);
        break;
      case 'h':
        mark(dit);
        mark(dit);
        mark(dit);
        mark(dit);
        break;
      case 'i':
        mark(dit);
        mark(dit);
        break;
      case 'j':
        mark(dit);
        mark(dah);
        mark(dah);
        mark(dah);
        break;
      case 'k':
        mark(dah);
        mark(dit);
        mark(dah);
        break;
      case 'l':
        mark(dit);
        mark(dah);
        mark(dit);
        mark(dit);
        break;
      case 'm':
        mark(dah);
        mark(dah);
        break;
      case 'n':
        mark(dah);
        mark(dit);
        break;
      case 'o':
        mark(dah);
        mark(dah);
        mark(dah);
        break;
      case 'p':
        mark(dit);
        mark(dah);
        mark(dah);
        mark(dit);
        break;
      case 'q':
        mark(dah);
        mark(dah);
        mark(dit);
        mark(dah);
        break;
      case 'r':
        mark(dit);
        mark(dah);
        mark(dit);
        break;
      case 's':
        mark(dit);
        mark(dit);
        mark(dit);
        break;
      case 't':
        mark(dah);
        break;
      case 'u':
        mark(dit);
        mark(dit);
        mark(dah);
        break;
      case 'v':
        mark(dit);
        mark(dit);
        mark(dit);
        mark(dah);
        break;
      case 'w':
        mark(dit);
        mark(dah);
        mark(dah);
        break;
      case 'x':
        mark(dah);
        mark(dit);
        mark(dit);
        mark(dah);
        break;
      case 'y':
        mark(dah);
        mark(dit);
        mark(dah);
        mark(dah);
        break;
      case 'z':
        mark(dah);
        mark(dah);
        mark(dit);
        mark(dit);
        break;
      case ' ':
        pause(medgap);
        break;
    }
    pause(shogap);
  }
  eot();
}

/**
 *
 * Display short or long mark
 *
 */
void mark(uint8_t blip) {
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, red);
  }
  pixels.show();
  delay(blip);
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, off);
  }
  pixels.show();
  delay(interchar);
}

/**
 *
 * Pause between a letter or word
 *
 */
void pause(uint8_t wait) {
  delay(wait);
}

/**
 *
 * Display end of transmission animation
 *
 */
void eot() {
  for(int j = 0; j < 10; j++){
    for (int i = 0; i < NUMPIXELS; i = i + 2) {
     pixels.setPixelColor(i, red);
    }
    pixels.show();
    delay(50);
    for (int i = 0; i < NUMPIXELS; i = i + 2) {
     pixels.setPixelColor(i, off);
    }
    pixels.show();
    delay(50);
    for (int i = 1; i < NUMPIXELS; i = i + 2) {
      pixels.setPixelColor(i, lightred);
    }
    pixels.show();
    delay(50);
    for (int i = 1; i < NUMPIXELS; i = i + 2) {
      pixels.setPixelColor(i, off);
    }
    pixels.show();
    delay(50);
  }
  delay(500);
}

