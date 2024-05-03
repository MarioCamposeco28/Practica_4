/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 2 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 25 de abril
*/

#define switch_1 2
#define switch_2 3
#define led_1 4
#define led_2 5
#define led_3 6
#define led_4 7
#define led_5 8
#define led_6 9
#define configINPUT(pin) pinMode(pin, INPUT)
#define configOUTPUT(pin) pinMode(pin, OUTPUT)
#define configHIGH(pin) digitalWrite(pin, HIGH)
#define configLOW(pin) digitalWrite(pin, LOW)

void setup(){
  Serial.begin(9600);
  configINPUT(switch_1);
  configINPUT(switch_2);
  configOUTPUT(led_1);
  configOUTPUT(led_2);
  configOUTPUT(led_3);
  configOUTPUT(led_4);
  configOUTPUT(led_5);
  configOUTPUT(led_6);
}

void loop(){
  if (digitalRead(switch_1) == LOW){
    Serial.print("Secuencia velocidad 1");
    for (int b = 0; b < 3; b++){
      for (int a = 0; a <= 6; a++){
        if (a == 0){
          configHIGH(led_1);
          delay(500);
        }

        if (a == 1){
          configLOW(led_1);
          configHIGH(led_2);
          delay(500);
        }

        if (a == 2){
          configLOW(led_2);
          configHIGH(led_3);
          delay(500);
        }

        if (a == 3){
          configLOW(led_3);
          configHIGH(led_4);
          delay(500);
        }

        if (a == 4){
          configLOW(led_4);
          configHIGH(led_5);
          delay(500);
        }

        if (a == 5){
          configLOW(led_5);
          configHIGH(led_6);
          delay(500);
        }
      }

      for (int a = 6; a >= 0; a--) {
        if(a == 6){
          configHIGH(led_6);
          delay(500);
        }
        if (a == 5){
          configLOW(led_6);
          configHIGH(led_5);
          delay(500);
        }

        if (a == 4){
          configLOW(led_5);
          configHIGH(led_4);
          delay(500);
        }

        if (a == 3){
          configLOW(led_4);
          configHIGH(led_3);
          delay(500);
        }

        if (a == 2){
          configLOW(led_3);
          configHIGH(led_2);
          delay(500);
        }

        if (a == 1){
          configLOW(led_2);
          configHIGH(led_1);
          delay(500);
        }
      }
    }
    
    for (int i = 0; i < 4; i++){
      configHIGH(led_1);
      configHIGH(led_2);
      configHIGH(led_3);
      configHIGH(led_4);
      configHIGH(led_5);
      configHIGH(led_6);
      delay(500);
      configLOW(led_1);
      configLOW(led_2);
      configLOW(led_3);
      configLOW(led_4);
      configLOW(led_5);
      configLOW(led_6);
      delay(500);
    }
  }

  if(digitalRead(switch_2) == LOW){
    Serial.println("Secuencia velocidad 2");
    for(int b = 0; b < 3; b++){
      for (int a = 0; a <= 6; a++){
        if (a == 0){
          configHIGH(led_1);
          delay(250);
        }

        if (a == 1){
          configLOW(led_1);
          configHIGH(led_2);
          delay(250);
        }

        if (a == 2){
          configLOW(led_2);
          configHIGH(led_3);
          delay(250);
        }

        if (a == 3){
          configLOW(led_3);
          configHIGH(led_4);
          delay(250);
        }

        if (a == 4){
          configLOW(led_4);
          configHIGH(led_5);
          delay(250);
        }

        if (a == 5){
          configLOW(led_5);
          configHIGH(led_6);
          delay(250);
        }
      }

      for (int a = 6; a >= 0; a--) {
        if(a == 6){
          configHIGH(led_6);
          delay(250);
        }
        
        if (a == 5){
          configLOW(led_6);
          configHIGH(led_5);
          delay(250);
        }

        if (a == 4){
          configLOW(led_5);
          configHIGH(led_4);
          delay(250);
        }

        if (a == 3){
          configLOW(led_4);
          configHIGH(led_3);
          delay(250);
        }

        if (a == 2){
          configLOW(led_3);
          configHIGH(led_2);
          delay(250);
        }

        if (a == 1){
          configLOW(led_2);
          configHIGH(led_1);
          delay(250);
        }
      }
    }
    
    for (int i = 0; i < 4; i++){
      configHIGH(led_1);
      configHIGH(led_2);
      configHIGH(led_3);
      configHIGH(led_4);
      configHIGH(led_5);
      configHIGH(led_6);
      delay(250);
      configLOW(led_1);
      configLOW(led_2);
      configLOW(led_3);
      configLOW(led_4);
      configLOW(led_5);
      configLOW(led_6);
      delay(250);
    }
  }
}
