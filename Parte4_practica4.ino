/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 4 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 25 de abril
*/

#define avance 2
#define retroceso 3
#define configINPUT(pin) pinMode(pin, INPUT)
int a = 0;
int pines[4] = {4, 5, 6, 7};

void setup(){
  Serial.begin(9600);
  configINPUT(avance);
  configINPUT(retroceso);
  for(int p = 0; p < 4 ; p++){
    pinMode(pines[p], OUTPUT);
  }
}

void loop(){
  for(int b = 0; b < 10; b++){
    for(int c = 0; c < 4; c++){
      digitalWrite(pines[c], (b = c));
    }
    
  if(digitalRead(avance) == HIGH){
    Serial.println(a);
    delay(300);
    if(a < 99){
      a++;
       
    }
  }
  
  if(digitalRead(retroceso) == HIGH){
    Serial.println(a);
    delay(300);
    if(a > 0){
      a--;
    }
  }
    
    delay(20);
  }
}
