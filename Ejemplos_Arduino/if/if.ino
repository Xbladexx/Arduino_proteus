 int led01=13, led02=12, led03=11, led04=10;

 

 void setup()
 {
     Serial.begin(9600);//Libera el puerto USB
     pinMode(led01, OUTPUT);//5V
     pinMode(led02, OUTPUT);
     pinMode(led03, OUTPUT);
     pinMode(led04, OUTPUT);
 }
 void loop()
 {
    char teclado = Serial.read();//leemos el puerto USB
    if(teclado=='a'){digitalWrite(led01, HIGH);}
    if(teclado=='q'){digitalWrite(led01, LOW);}
    if(teclado=='s'){digitalWrite(led02, HIGH);}
    if(teclado=='w'){digitalWrite(led02, LOW);}
    if(teclado=='d'){digitalWrite(led03, HIGH);}
    if(teclado=='e'){digitalWrite(led03, LOW);}
    if(teclado=='f'){digitalWrite(led04, HIGH);}
    if(teclado=='r'){digitalWrite(led04, LOW);}
 }