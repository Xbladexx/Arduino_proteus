#include "SoftwareSerial.h"
SoftwareSerial BT(7,8); //7 es RX, 8 es TX
int ledPin1=13, ledPin2=12, ledPin3=11, ledPin4=10;
boolean ledOn01=false, ledOn02=false, ledOn03=false, ledOn04=false;

void exter(int Led)
{
  ledOn01=!ledOn01;
  digitalWrite(Led, ledOn01);  
}

void sala(int Led)
{
  ledOn02=!ledOn02;
  digitalWrite(Led, ledOn02);  
}

void cuarto(int Led)
{
  ledOn03=!ledOn03;
  digitalWrite(Led, ledOn03);  
}

void puerta(int Led)
{
  ledOn04=!ledOn04;
  digitalWrite(Led, ledOn04);  
}

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  BT.begin(9600);
  Serial.begin(9600);

}

void loop() {
  if (BT.available() > 0) {
      char bluetooh = BT.read();
      if(bluetooh=='a'){exter(ledPin1);}
      if(bluetooh=='s'){sala(ledPin2);}
      if(bluetooh=='d'){cuarto(ledPin3);}
      if(bluetooh=='f'){puerta(ledPin4);}  

  }

  if (Serial.available() > 0) {
      char teclado = Serial.read();
      if(teclado=='a'){exter(ledPin1);}
      if(teclado=='s'){sala(ledPin2);}
      if(teclado=='d'){cuarto(ledPin3);}
      if(teclado=='f'){puerta(ledPin4);} 
  }
}
