/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 1 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 25 de abril
*/

#define BOTON_1 2 
#define BOTON_2 3
#define BOTON_3 4
int pines[4] = {5, 6, 7, 8};

const int numeros[10][4] = {
  {0, 0, 0, 0},
  {1, 0, 0, 0},
  {0, 1, 0, 0},
  {1, 1, 0, 0},
  {0, 0, 1, 0},
  {1, 0, 1, 0},
  {0, 1, 1, 0},
  {1, 1, 1, 0},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};

void setup() {
  pinMode(BOTON_1, INPUT);
  pinMode(BOTON_2, INPUT);
  pinMode(BOTON_3, INPUT);
}

void loop(){
   for(int b = 0; b < 10; b++){
    for(int c = 0; c < 4; c++){
      digitalWrite(pines[c], numeros[b][c]);
    }
    
    delay(500);
  
  for(int d = 0; d < 4; d++){
    digitalWrite(pines[d], HIGH);
  }
    
    if(digitalRead(BOTON_1) == HIGH){
      delay(1000);
    }
    
    else if(digitalRead(BOTON_2) == HIGH){
      delay(2000);
    }
   
    else if(digitalRead(BOTON_3) == HIGH){
      delay(3000);
    }
    
    else if(digitalRead(BOTON_1 && BOTON_2 && BOTON_3) == HIGH){
     delay(500);
    }
    
    else if(digitalRead(BOTON_1 && BOTON_2 && BOTON_3) == LOW){
     delay(500);
    }
    
    delay(500);
   }
}
