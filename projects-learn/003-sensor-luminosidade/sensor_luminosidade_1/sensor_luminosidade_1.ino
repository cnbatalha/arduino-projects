// sensor luminosidade

const int LDR = 0;
int ValorLido = 0;

void setup()
{
  Serial.begin(9600);  
}

void loop()
{
  ValorLido = analogRead(LDR);
  Serial.print("valor lido");
  Serial.println(ValorLido);
  delay(500);
}
