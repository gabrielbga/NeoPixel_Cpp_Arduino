#include "SecuenciaLedsNeoPixels.h"
#include "Control.h"

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMBER_OF_PIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  strip.begin();
  strip.setBrightness(50);
  strip.show(); // Initialize all pixels to 'off'
  attachInterrupt(digitalPinToInterrupt(PULSADOR_1), controlDireccion, FALLING);
  attachInterrupt(digitalPinToInterrupt(PULSADOR_2), controlVelocidad, FALLING);
}

int incomingByte = 0; // for incoming serial data
int i_dir = 0;

void loop() {
  runningLamp();

  // ESTE BLOQUE ES PARA EFECTOS DE PRUEBAS NETAMENTE.
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();
    if (incomingByte == 65) {
      Flag=Flag+1;
      } else if (incomingByte == 66) {
        if (i_dir == 0) {         // Cambio Dirección Der --> Izq
          Flag2 = 1;
          i_dir = 1;
        } else if (i_dir == 1){   // Cambio Dirección Izq --> Der
          Flag2 = 0;
          i_dir = 0;
        } 
      }   
  }
}


void runningLamp (void){
 
  switch(Flag){
    case(0):
      //Aquí entra primera velocidad.
      Serial.println("Esperando...");
      break;
    case(1):
      Serial.println("Velocidad: 0.14285s x LED");
      if(Flag2 == 0){
          colorWipe(strip.Color(255, 255, 255, 0), vel_1);
      }
      if(Flag2 == 1){
          colorWipeLeft(strip.Color(255, 255, 255, 0), vel_1);
        }
      break;
    case(2):
      Serial.println("Velocidad: 0.11428s x LED");
      if(Flag2 == 0){
          colorWipe(strip.Color(255, 255, 255, 0), vel_2);
      }
      if(Flag2 == 1){
          colorWipeLeft(strip.Color(255, 255, 255, 0), vel_2);
        }
      break;
    case(3):
      Serial.println("Velocidad: 0.071428s x LED");
      if(Flag2 == 0){
          colorWipe(strip.Color(255, 255, 255, 0), vel_3);
      }
      if(Flag2 == 1){
          colorWipeLeft(strip.Color(255, 255, 255, 0), vel_3);
        }
      break;
    case(4):
      rainbow(5);
      break;
    case(5):
      justOneOn();
      Flag = 0;
      break;
    }
  }

 // Fill the dots one after the other with a color
void justOneOn() {
  for(uint16_t i=1; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, 0);
  }
  strip.setPixelColor(0, strip.Color(255, 255, 255, 0));
  strip.show();
}
 
void colorWipe(uint32_t c, uint8_t wait) {
  strip.setPixelColor(0, c);
  strip.show();
  delay(wait);
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    
    strip.setPixelColor(i, strip.Color(0, 0, 0, 255));
    strip.setPixelColor(i+1, c);
    strip.show();
    delay(wait);
  }
}

void colorWipeRainbowRight(uint8_t wait) {
  uint16_t i, j;
  for(j=0; j<256; j=j+10) {
    strip.setPixelColor(0, Wheel((i+j) & 255));
    strip.show();
    delay(wait);
    for(i=0; i<strip.numPixels(); i++) { 
      strip.setPixelColor(i, strip.Color(0, 0, 0, 255));
      strip.setPixelColor(i+1, Wheel((i+j) & 255));
      strip.show();
      delay(wait);
    }
  
  }
}

void colorWipeLeft(uint32_t c, uint8_t wait) {
  strip.setPixelColor(0, c);
  strip.show();
  delay(wait);
  for(uint16_t i=strip.numPixels(); i>0; i--) {
    strip.setPixelColor(0, strip.Color(0, 0, 0, 255));
    strip.setPixelColor(i, strip.Color(0, 0, 0, 255));
    strip.setPixelColor(i-1, c);
    strip.show();
    delay(wait);
  }
}

void colorWipeRainbowLeft(uint8_t wait) {
  uint16_t i, j;
  for(j=0; j<256; j=j+10) {
    strip.setPixelColor(0, Wheel((i+j) & 255));
    strip.show();
    delay(wait);
    for(i=strip.numPixels(); i>0; i--) { 
      strip.setPixelColor(0, strip.Color(0, 0, 0, 255));
      strip.setPixelColor(i, strip.Color(0, 0, 0, 255));
      strip.setPixelColor(i-1, Wheel((i+j) & 255));
      strip.show();
      delay(wait);
    }
  
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
