void System()
{ 
  if(digitalRead(Sensor_Full)==1)
  {
      if(digitalRead(Pir_Sensor)==0)
      {  
        LCD_Rady2(); LCD_RADY();
      }
      else 
      { 
        while(1)
        {
          if(digitalRead(Pir_Sensor)==1)
          {
           LCD_Rady2(); 
           LCD_OPEN();
           Servo_OPEN();
          }
          else 
          {
           delay(2000);
           LCD_Rady2(); 
           LCD_CLOSE();
           Servo_CLOSE();
           break; 
          }
        }
      }
  }
  else
  {
     if(digitalRead(Pir_Sensor)==0)
      {  
        LCD_Rady2(); LCD_FULL();
      }
      else 
      { 
        while(1)
        {
          if(digitalRead(Pir_Sensor)==1)
          {
           LCD_Rady2(); 
           LCD_OPEN();
           Servo_OPEN();
          }
          else 
          {
           delay(2000);
           LCD_Rady2(); 
           LCD_CLOSE();
           delay(2000);
           Servo_CLOSE();
           
           break; 
          }
        }
      }
  }
}
void Servo_OPEN()
{
  myservo.write(0);             
  myservo1.write(180);  
  delay(200);
}

void Servo_CLOSE()
{
  myservo.write(180);             
  myservo1.write(0);  
  delay(200);
}
