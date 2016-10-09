/*
Intesc Electronics & Embedded - Daniel Hernández Rodríguez - Agosto 2016
Práctica 1. Muestra el uso de LEDs, conectados en el Puerto J, en Miuva PRO
*/

#include <18F87J50.h>
#fuses HSPLL, NOWDT, NOPROTECT, NODEBUG, PLL2
#use delay (clock=24M)           
#use standard_io(J)              //Predefine el puerto J

void main(){
   set_tris_J(0x00);             //Se define el puerto J como salida
   int contador = 0;             //Se declara una variable de tipo entero
   while(true){                  //Ciclo infinito
      contador = contador + 1;   //Se aumenta el valor del contador
      output_j(contador);        //Se muestra el contador en los leds
      delay_ms(200);             //Retardo de 200 milisegundos
   }
}
