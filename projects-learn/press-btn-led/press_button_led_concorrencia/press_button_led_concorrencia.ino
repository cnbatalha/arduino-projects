/* Arduino */

const int ledPin1 = 8; // led no pino 13
const int ledPin2 = 7; // led no pino 12
const int botao1 = 13; // botao no pino 2
const int botao2 = 2; // botao no pino 3
const int botaoReset = 3;
int estadoBotaoReset = 0;
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
  estadoBotaoReset = digitalRead(botaoReset);    
  if ( estadoBotaoReset )
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW); 
    estadoBotaoReset = 0;
    estadoBotao1 = 0;
    estadoBotao2 = 0;
  }
  
  
  // capturando estado do botao 
  if ( !estadoBotao2 && !estadoBotao1)  
  {
    estadoBotao1 = digitalRead(botao1);    
    digitalWrite(ledPin1, estadoBotao1);
  }
  
  if ( !estadoBotao1 && !estadoBotao2 )
  {
    estadoBotao2 = digitalRead(botao2);    
    digitalWrite(ledPin2, estadoBotao2);
  }
  
  
  
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
