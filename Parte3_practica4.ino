/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 3 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 25 de abril
*/

#define switch_1 2
#define switch_2 3
#define switch_3 4
#define switch_4 5
#define A 6
#define B 7
#define C 8
#define D 9
#define E 10
#define F 11 
#define G 12
#define led_1 13
#define led_2 A0
#define led_3 A1
#define led_4 A2
#define led_5 A3
#define led_6 A4
#define configINPUT(pin) pinMode(pin, INPUT)
#define configHIGH(pin) digitalWrite(pin, HIGH)
#define configLOW(pin) digitalWrite(pin, LOW)

void setup(){
  Serial.begin(9600);
  configINPUT(switch_1);
  configINPUT(switch_2); 
  configINPUT(switch_3);
  configINPUT(switch_4);
}

void loop(){
  if (digitalRead(switch_2) == LOW){
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

  if(digitalRead(switch_1) == LOW){
    Serial.println("Practica No. 4 - Mario Camposeco");
    delay(500);
  }

  
  if(digitalRead(switch_3) == LOW){
    for(int c =0; c <= 7; c++){
      if(c == 0){ //C
        configHIGH(A);
        configLOW(B);
        configLOW(C);
        configHIGH(D);
        configHIGH(E);
        configHIGH(F);
        configLOW(G);
        delay(2000);
      }
      
      if(c == 1){ //U
        configLOW(A);
        configHIGH(B);
        configHIGH(C);
        configHIGH(D);
        configHIGH(E);
        configHIGH(F);
        configLOW(G);
        delay(2000);
      }
      
      if(c == 2){ //A
        configHIGH(A);
        configHIGH(B);
        configHIGH(C);
        configLOW(D);
        configHIGH(E);
        configHIGH(F);
        configHIGH(G);
        delay(2000);
      }
      
      if(c == 3){ //T
        configLOW(A);
        configLOW(B);
        configLOW(C);
        configHIGH(D);
        configHIGH(E);
        configHIGH(F);
        configHIGH(G);
        delay(2000);
      }
      
      if(c == 4){ //R
        configLOW(A);
        configLOW(B);
        configLOW(C);
        configLOW(D);
        configHIGH(E);
        configLOW(F);
        configHIGH(G);
        delay(2000);
      }
      
      if(c == 5){ // O
        configHIGH(A);
        configHIGH(B);
        configHIGH(C);
        configHIGH(D);
        configHIGH(E);
        configHIGH(F);
        configLOW(G);
        delay(2000);
      }
      
      delay(500);
    }
  }
  
  if(digitalRead(switch_1) == LOW && digitalRead(switch_3) == LOW || digitalRead(switch_2) == LOW && digitalRead(switch_4) == LOW){
    Serial.println("Gracias por su atencion");
    delay(300);
  }
}
