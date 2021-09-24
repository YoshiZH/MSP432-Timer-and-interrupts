



#include "Energia.h"


#include "Timer.h"


uint8_t status = 1;
const uint8_t myLED = BLUE_LED;
int num;


Timer myTimer;


void timerFunction()
{
    status = 1 - status;
    digitalWrite(myLED, status);
}

 Timer myTimer2;
 
 
 void timerFunction2()
 {
 
 
 Serial.println(num++);

 }
 

// Add setup code
void setup()
{
    Serial.begin(115200);
    pinMode(myLED, OUTPUT);
     pinMode(PUSH2, INPUT_PULLUP);
     pinMode(23,INPUT_PULLUP);
     
    attachInterrupt(digitalPinToInterrupt(PUSH2), funcionInterrupcion, CHANGE);
    attachInterrupt(digitalPinToInterrupt(23), funcionInterrupcion2, CHANGE);
    
    
    myTimer.begin(timerFunction, 2000, 1000);

    myTimer2.begin(timerFunction2, 1000,1000);
    
    myTimer.start();
    
    myTimer2.start();
     
 
}

// Add loop code
void loop() 
{
    Serial.println("Jesus Joshua Munoz Pacheco    No. Control 18060728");
    Serial.println("Daniel Fernando Gonzalez Lara    No. Control 18060727");
    while(!Serial.available());
    Serial.setTimeout(2000);
    interrupts();
}

void funcionInterrupcion(void){
  Serial.println("");
  Serial.println("Contador detenido");
  myTimer2.stop();

}
void funcionInterrupcion2(void){
  Serial.println("");
  Serial.println("Contador encendido");
  myTimer2.start();
}
