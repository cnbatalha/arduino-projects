#include<LiquidCrystal.h>

int freq = 200;
int botao1 = 8;
int botao2 = 9;
int estadoBtn1 = 0;
int estadoBtn2 = 0;
int buzzer = 6;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0, 0);
  lcd.print("Frequencia = ");
  lcd.setCursor(6, 1);  
  lcd.print("Hz");
  pinMode(botao1, OUTPUT);
  pinMode(botao2, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  estadoBtn1 = digitalRead(botao1);
  estadoBtn2 = digitalRead(botao2);
  
  if(estadoBtn1 == HIGH)
  {
    freq = freq + 100;
  }

  if(estadoBtn2 == HIGH)
  {
    freq = freq - 100;
  }
  
  if(freq >= 2000)
  {
    freq = 2000;
  }
  
  if(freq <= 99)
  {
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(1,1);
    lcd.print(" ");
    lcd.setCursor(1,1);
    lcd.print(" ");
    lcd.setCursor(3,1);
  }

  if(freq >= 1000)
  {
    lcd.setCursor(0,1);
  }
  
  if(freq < 1000)
  {
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(1,1);    
  }


  if(freq >= 10000)
  {
    lcd.setCursor(0,1);
  }

  //lcd.setCursor(0, 1);
  lcd.print(freq);
  tone(buzzer, freq);

  delay(100) ;
  
}

