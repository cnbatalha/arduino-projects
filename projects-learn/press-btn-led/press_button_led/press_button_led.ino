/* Arduino */

const int ledPin = 13; // led no pino 13
const int botao = 2; // botao no pino 2
int estadoBotao = 0; // status do botao press/not press

void setup(){
  pinMode(ledPin, OUTPUT); // pino com led sera saida
  pinMode(botao, INPUT);// pino com botao sera a entrada
}

void loop()
{
  // capturando estado do botao
  estadoBotao = digitalRead(botao);
  
  digitalWrite(ledPin, estadoBotao);
  
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
