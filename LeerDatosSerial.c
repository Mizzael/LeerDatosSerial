#include <18F4620.h>
#fuses HS,NOWDT,NOMCLR
#use delay(clock=16 MHZ)

//Aqui deben ir las interfaces tales como la rs-232, I^2C
#define _DEBUG_SERIAL_

#ifdef _DEBUG_SERIAL_
   #define TX_232    PIN_C6
   #define RX_232    PIN_C7
   #use RS232(BAUD=9600,XMIT=TX_232,BITS=8,PARITY=N,STOP=1,UART1,RCV=RX_232)
   #use fast_io(c)
#endif

char Dato;
int FlagSerial;

//Aqui deben ir la IsR's interrupciones
#int_rda
void isr_rda(void)
{
   Dato=getc();
}
   //int_timer0

//variables globales

//aqui el void main(void)
void main(void)
{
   
   //Aqui iniciaizamos todo
   while(1)
   {
      
   }
}

