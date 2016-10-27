/* LED RGB */

const int R = 9;
const int G = 10;
const int B = 11;

int valorRed = 255;
int valorGreen = 0;
int valorBlue = 0;

void setup()
{
  // inicializando pinos
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);    
  
  // valor inicial 
  analogWrite(R, valorRed);
  analogWrite(G, valorGreen);
  analogWrite(B, valorBlue);
}

void loop()
{
  
  for (valorGreen = 0; valorGreen < 255; valorGreen+=5)
  {
    analogWrite(G, valorGreen);
    delay(50);
  }
  
  for (valorRed = 0; valorRed < 255; valorRed+=5)
  {
    analogWrite(R, valorRed);
    delay(50);
  }
  

}



