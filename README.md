# MSP432-Timer-and-interrupts
Este es un ejemplo sobre el MSP432 donde se usan interrupciones y timers

Sobre Hardware:
El pin 6.1 de la MSP432P401R se usa como una entrada de boton para una interrupcion externa, es necesario configurar el hardware necesario para la entrada (3.3V - 5V) ah dicho pin
usar una resistencia de 220 ohms entre Vcc y el Push Botton 
si quiere cuidar los aspectos del rebote del boton utilizar un capacitor (Recomendado 10 microF) entre GND y el push botton.

Sobre timers:
Se utilizan dos timers disponibles de los 4 que posee el MSP432P401R aleatoriamente pero pueden ser especificados 
en en archivo Timer.cpp cambiando ANY por el que se desee (A0,A1,A2,A3)

Sobre las interrupciones:
Se utliza y se declara que las interupciones son mediante el boton PUSH2 de la MSP432P401R y el pin 6.1.
Las interrupciones se toman cuando se detecta un cambio en esos pines (CHANGE).
