// FUNCIONES SECUENCIA DE LEDS 
// v1.0
// 

//#define LED_1  4
//#define LED_2  5
//#define LED_3  6
//#define LED_4  7
//#define LED_5  8
//#define LED_6  9
//#define LED_7  10
//
//void derecha(float vel){
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, HIGH);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, HIGH);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, HIGH);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, HIGH);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, HIGH);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, HIGH);
//        delay(vel);
//        digitalWrite(LED_1, HIGH);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//  }
//
//void izquierda(float vel){
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, HIGH);
//        delay(vel);
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, HIGH);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//         digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, HIGH);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, HIGH);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, HIGH);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//        digitalWrite(LED_1, LOW);
//        digitalWrite(LED_2, HIGH);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);        
//        digitalWrite(LED_1, HIGH);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//        delay(vel);
//  }
//
//void allOn(void){
//        digitalWrite(LED_1, HIGH);
//        digitalWrite(LED_2, HIGH);
//        digitalWrite(LED_3, HIGH);
//        digitalWrite(LED_4, HIGH);
//        digitalWrite(LED_5, HIGH);
//        digitalWrite(LED_6, HIGH);
//        digitalWrite(LED_7, HIGH);
//  }
//
//void oneOn(void){
//        digitalWrite(LED_1, HIGH);
//        digitalWrite(LED_2, LOW);
//        digitalWrite(LED_3, LOW);
//        digitalWrite(LED_4, LOW);
//        digitalWrite(LED_5, LOW);
//        digitalWrite(LED_6, LOW);
//        digitalWrite(LED_7, LOW);
//  }

/*
  if (Serial.available()>0){
    char option = Serial.read();
    if(option == 'a'){
      Serial.print("Modo : ");
      Serial.println(option);
      Serial.println("Velocidad: 0.14285s x LED");
      while(i < 10){
        derecha(vel_1);
        i++;
        }
      i = 0;
      }
    if(option == 'z'){
      Serial.print("Modo : ");
      Serial.println(option);
      Serial.println("Velocidad: 0.14285s x LED");
      while(i < 10){
        izquierda(vel_1);
        i++;
        }
      i = 0;
      }
    if(option == 'b'){
      Serial.print("Modo: ");
      Serial.println(option);
      Serial.println("Velocidad: 0.11428s x LED");
      while(i < 10){
        derecha(vel_2);
        i++;
        }
      i = 0;
      }  
    if(option == 'c'){
      Serial.print("Modo: ");
      Serial.println(option);
      Serial.println("Velocidad: 0.071428s x LED");
      while(i < 10){
        derecha(vel_3);
        i++;
        }
      }
    if(option >= '1' && option <= '9'){
      option -= '0';
      for(int i = 0; i < option; i++){
        digitalWrite(LED_1, HIGH);
        digitalWrite(LED_2, LOW);
        delay(100);
        digitalWrite(LED_1, LOW);
        digitalWrite(LED_2, HIGH);
        delay(200);
        }
      }  
    }
    */
