/* Arduino */

const int ledPin1 = 13; // led no pino 13
const int ledPin2 = 12; // led no pino 12
const int botao1 = 2; // botao no pino 2
const int botao2 = 3; // botao no pino 3
int estadoBotao1 = 0; // status do botao press/not press
int estadoBotao2 = 0; // status do botao press/not press

void setup(){
  pinMode(ledPin1, OUTPUT); // pino com led sera saida
  pinMode(ledPin2, OUTPUT); // pino com led sera saida
  pinMode(botao1, INPUT);// pino com botao sera a entrada
  pinMode(botao2, INPUT);// pino com botao sera a entrada 
}

void loop()
{
  // capturando estado do botao
  estadoBotao1 = digitalRead(botao1);
  estadoBotao2 = digitalRead(botao2);
  
  digitalWrite(ledPin1, estadoBotao1);
  digitalWrite(ledPin2, estadoBotao2);
  
  /*
  if (estadoBotao == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
  */
}
