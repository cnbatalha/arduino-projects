// sensor luminosidade

const int LDR = 0;
const int LED = 12;
int valorLido = 0;

void setup()
{
  Serial.begin(9600);  
  pinMode(LED, OUTPUT);
}

void loop()
{
  valorLido = analogRead(LDR);
  Serial.print("valor lido");
  Serial.println(valorLido);
  delay(200);
  
  if ( valorLido < 400)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
