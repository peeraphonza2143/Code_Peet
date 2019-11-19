#include <Wire.h>
#include <Servo.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 20, 4);
Servo myservo;
Servo myservo1;
#define Pir_Sensor    3
#define Sensor_Full   4

void setup()
{
/*Set_UNO_R3*/
Serial.begin(9600);

/*Set_LCD*/
lcd.begin();
lcd.backlight();
LCD_Rady();
delay(1000);
lcd.clear();
LCD_Start();
delay(3000);
lcd.clear();
LCD_Rady2();

/*Set_PIR*/
pinMode(Pir_Sensor ,INPUT_PULLUP);
pinMode(Sensor_Full,INPUT_PULLUP);

/*Set_Servo*/
myservo.attach(9); 
myservo1.attach(10);
myservo.write(180);
myservo1.write(0);
}
void loop() {
 System(); 

}
 
