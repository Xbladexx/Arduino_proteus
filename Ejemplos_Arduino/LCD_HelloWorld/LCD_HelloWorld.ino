//DFRobot.com
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("   HAY ENTRO  ");
  lcd.setCursor(0,1);
  lcd.print("   CARAMELO  ");
  delay(6000);

  lcd.clear();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("voidloopRobotech");
  lcd.setCursor(0,1);
  lcd.print("     LISTO");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("             ");
  delay(500);
  
  
}
