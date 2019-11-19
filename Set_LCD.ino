void LCD_Start()
{
lcd.setCursor(5, 0); 
lcd.print("SMART BIN");
lcd.setCursor(9, 1); 
lcd.print("BY");
lcd.setCursor(0, 2); 
lcd.print("Waiyawat 61080502254");
lcd.setCursor(0, 3); 
lcd.print("Sakdipat 61080502274");
}

void LCD_Rady()
{
lcd.setCursor(3, 1); 
lcd.print("SYSTEM ONLINE");
}

void LCD_Rady2()
{
lcd.setCursor(3, 1); 
lcd.print("SYSTEM ONLINE");
lcd.setCursor(3, 2); 
lcd.print("STATUS:");
}

void LCD_OPEN()
{
 lcd.setCursor(10, 2); 
 lcd.print("OPEN");
}

void LCD_CLOSE()
{
 lcd.setCursor(10, 2); 
 lcd.print("CLOSE");
}

void LCD_RADY()
{
 lcd.setCursor(10, 2); 
 lcd.print("RADY");
}

void LCD_FULL()
{
 lcd.setCursor(10, 2); 
 lcd.print("FULL");
}
