// LED EFFECTS LIBRARY
#include "FILLSOLID.h"
#include <FastLED.h>
#define NUM_LEDS  120
#define LED_PIN   2
CRGB leds_fill[NUM_LEDS];

FILLSOLID::FILLSOLID(){
    FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_fill, NUM_LEDS);
    FastLED.setBrightness(200);
  }

// PRESET FILL COLORS
//---------------------------------------------------------------
void FILLSOLID::green(){
  fill_solid(leds_fill, NUM_LEDS, CRGB::Green);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_fill, NUM_LEDS);
  FastLED.setBrightness(200);}
void FILLSOLID::red(){
  fill_solid(leds_fill, NUM_LEDS, CRGB::Red);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_fill, NUM_LEDS);
  FastLED.setBrightness(200);}
void FILLSOLID::orange(){
  fill_solid(leds_fill, NUM_LEDS, CRGB::Orange);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_fill, NUM_LEDS);
  FastLED.setBrightness(200);}
void FILLSOLID::purple(){
  fill_solid(leds_fill, NUM_LEDS, CRGB::Purple);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_fill, NUM_LEDS);
  FastLED.setBrightness(200);}
void FILLSOLID::blue(){
  fill_solid(leds_fill, NUM_LEDS, CRGB::Blue);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_fill, NUM_LEDS);
  FastLED.setBrightness(200);}
  void FILLSOLID::yellow(){
  fill_solid(leds_fill, NUM_LEDS, CRGB::Yellow);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_fill, NUM_LEDS);
  FastLED.setBrightness(200);}


  
// TURN OFF EFFECTS
//---------------------------------------------------------------
void FILLSOLID::fadetoblackby(int rate){
  fadeToBlackBy(leds_fill, NUM_LEDS, rate);
  FastLED.show();}
  
void FILLSOLID::clearall(){
  FastLED.clear();
  FastLED.show();}
  

// ANIMATIONS
//---------------------------------------------------------------
void FILLSOLID::phasesparkle(){
  uint8_t sinBeat   = beatsin8(30, 0, NUM_LEDS - 1, 0, 0);
  uint8_t sinBeat2  = beatsin8(30, 0, NUM_LEDS - 1, 0, 85);
  uint8_t sinBeat3  = beatsin8(30, 0, NUM_LEDS - 1, 0, 170);
  leds_fill[sinBeat]   = CRGB::Red;
  leds_fill[sinBeat2]  = CRGB::Orange;
  leds_fill[sinBeat3]  = CRGB::Pink;
  fadeToBlackBy(leds_fill, NUM_LEDS, 10);
  EVERY_N_MILLISECONDS(10){
  FastLED.show(); }
}


void FILLSOLID::redsparklebuild(){
  uint8_t sinBeat   = random8();
  uint8_t sinBeat2   = random8();
  uint8_t sinBeat3   = random8();
  uint8_t sinBeat4   = random8();
  uint8_t sinBeat5   = random8();
  leds_fill[sinBeat]   = CRGB::Red;
  leds_fill[sinBeat2]   = CRGB::Red;
  leds_fill[sinBeat3]   = CRGB::Red;
  leds_fill[sinBeat4]   = CRGB::Red;
  leds_fill[sinBeat5]   = CRGB::Red;
  EVERY_N_MILLISECONDS(5){
  FastLED.show();}
}

void FILLSOLID::redsparklefade(){
  uint8_t sinBeat   = random8();
  uint8_t sinBeat2   = random8();
  uint8_t sinBeat3   = random8();
  uint8_t sinBeat4   = random8();
  uint8_t sinBeat5   = random8();
  leds_fill[sinBeat]   = CRGB::Red;
  leds_fill[sinBeat2]   = CRGB::Red;
  leds_fill[sinBeat3]   = CRGB::Red;
  leds_fill[sinBeat4]   = CRGB::Red;
  leds_fill[sinBeat5]   = CRGB::Red;
  fadeToBlackBy(leds_fill, NUM_LEDS, 100);
  EVERY_N_MILLISECONDS(5){
  FastLED.show();}
}

void FILLSOLID::whitesparklefade(){
  uint8_t sinBeat   = random8();
  uint8_t sinBeat2   = random8();
  uint8_t sinBeat3   = random8();
  uint8_t sinBeat4   = random8();
  uint8_t sinBeat5   = random8();
  leds_fill[sinBeat]   = CRGB::White;
  leds_fill[sinBeat2]   = CRGB::White;
  leds_fill[sinBeat3]   = CRGB::White;
  leds_fill[sinBeat4]   = CRGB::White;
  leds_fill[sinBeat5]   = CRGB::White;
  fadeToBlackBy(leds_fill, NUM_LEDS, 100);
  EVERY_N_MILLISECONDS(5){
  FastLED.show();}
}

void FILLSOLID::redwhitesparklefade(){
  uint8_t sinBeat   = random8();
  uint8_t sinBeat2   = random8();
  uint8_t sinBeat3   = random8();
  uint8_t sinBeat4   = random8();
  uint8_t sinBeat5   = random8();
  leds_fill[sinBeat]   = CRGB::White;
  leds_fill[sinBeat2]   = CRGB::Red;
  leds_fill[sinBeat3]   = CRGB::White;
  leds_fill[sinBeat4]   = CRGB::Red;
  leds_fill[sinBeat5]   = CRGB::White;
  fadeToBlackBy(leds_fill, NUM_LEDS, 100);
  EVERY_N_MILLISECONDS(5){
  FastLED.show();}
}

void FILLSOLID::redwhitesparklebuild(){
  uint8_t sinBeat   = random8();
  uint8_t sinBeat2   = random8();
  uint8_t sinBeat3   = random8();
  uint8_t sinBeat4   = random8();
  uint8_t sinBeat5   = random8();
  leds_fill[sinBeat]   = CRGB::Red;
  leds_fill[sinBeat2]   = CRGB::White;
  leds_fill[sinBeat3]   = CRGB::Red;
  leds_fill[sinBeat4]   = CRGB::White;
  leds_fill[sinBeat5]   = CRGB::Red;
  EVERY_N_MILLISECONDS(5){
  FastLED.show();}
}

void FILLSOLID::sawtooth(){
  uint8_t pos = map(beat16(40, 0), 0, 65535, 0, NUM_LEDS -1);
  uint8_t hue = 0;
  leds_fill[pos] = CHSV( hue, 200, 255);
  fadeToBlackBy(leds_fill, NUM_LEDS, 3);
  EVERY_N_MILLISECONDS( 10 ) {
    hue++;}
  EVERY_N_MILLISECONDS(10) {
    Serial.println(pos);}
  FastLED.show();
  }

  void FILLSOLID::rainbow(){
  uint16_t beatA = beatsin16(30, 0, 255);
  fill_rainbow(leds_fill, NUM_LEDS, (beatA/2), 8);
  FastLED.show();
  }
  
  void FILLSOLID::rainbow2(){
  uint16_t beatA = beatsin16(30, 0, 255);
  uint16_t beatB = beatsin16(20, 0, 255);
  fill_rainbow(leds_fill, NUM_LEDS, (beatA+beatB)/2, 8);
  FastLED.show();
  }
