// DEFINICION MAQUINA DE ESTADOS
// v1.1
// 
// E0:  Esperando...
// E1:  Derecha / Velocidad 1
// E2:  Izquierda / Velocidad 1
// E3:  Derecha / Velocidad 2
// E4:  Izquierda / Velocidad 2
// E5:  Derecha / Velocidad 3
// E6:  Izquierda / Velocidad 3

#define vel_1 142.85
#define vel_2 114.28
#define vel_3 71.428
#define PULSADOR_1 2 //PIN INTERRUPT 0
#define PULSADOR_2 3 //PIN INTERRUPT 1
#define PIN 6 // PIN SIGNAL NEO PIXELS
#define NUMBER_OF_PIXELS 7

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

int option;
int i = 0;
static int Flag = 0;
static int Flag2 = 0;

void controlVelocidad(void){
  Flag = Flag + 1;
}

void controlDireccion(void){
  if (i == 0) {         // Cambio Dirección Der --> Izq
    Flag2 = 1;
    i = 1;
  } else if (i == 1){   // Cambio Dirección Izq --> Der
    Flag2 = 0;
    i = 0;
  } 
  
}
