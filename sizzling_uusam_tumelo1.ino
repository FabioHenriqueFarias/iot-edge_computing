#include <LiquidCrystal.h>

LiquidCrystal lcd (13,12, 11, 10, 9 ,8);
float entrada_temp =0.0, vel_motor=0.0;

void setup()
{
 lcd.begin (16,2);
}

void loop()
{
 entrada_temp = 15.0;
  float temp = (entrada_temp* (5.0/1023)/0.01);
  
  lcd.print ("temp: ");
  lcd.print (temp);
  
  lcd.setCursor (0,1);
  
  lcd.print ("motor: ");
  lcd.print (vel_motor);
  lcd.print (" RPM ");
  
  delay (1000);
  lcd.clear();
}