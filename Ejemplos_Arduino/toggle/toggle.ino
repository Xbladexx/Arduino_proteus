//Variables Globales
int led01=13 , led02= 12, led03=11, led04=10;
boolean ledOn01=false,ledOn02=false,ledOn03=false,ledOn04=false;
void toggle01(int Led)
{
	ledOn01 =! ledOn01;
	digitalWrite(Led, ledOn01);

}
void toggle02(int Led)
{
	ledOn02 =! ledOn02;
	digitalWrite(Led, ledOn02);
	
}
void toggle03(int Led )
{
	ledOn03 =! ledOn03;
	digitalWrite(Led, ledOn03);

}
 void toggle04(int Led)
 {
 	ledOn04 =! ledOn04;
 	digitalWrite(Led, ledOn04);
 }
void setup()
{//variables locales
	Serial.begin(9600);

	pinMode(led01, OUTPUT);
	pinMode(led02, OUTPUT);
	pinMode(led03, OUTPUT);
	pinMode(led04, OUTPUT);

}
void loop()
{//variables locales
	char teclado = Serial.read();
	if(teclado=='a'){toggle01(led01);}
	if(teclado=='s'){toggle02(led02);}
	if(teclado=='d'){toggle03(led03);}
	if(teclado=='f'){toggle04(led04);}
}