int GREEN_PIN = 8;
int YELLOW_PIN = 3;
int RED_PIN = 2;
int DELAY_GREEN = 1000;
int DELAY_YELLOW = 1000;
int DELAY_RED = 1000;

void setup()
{
  Serial.print("Ky projekt u realizua nga grupi SIGMA @ Kolegji Universum.");
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
}

void loop()
{ 
  greenLight();
  delay(DELAY_GREEN);
  yellowLight();
  delay(DELAY_YELLOW);
  redLight();
  delay(DELAY_RED);
}

void greenLight()
{
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(RED_PIN, LOW);
}

void yellowLight()
{
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  digitalWrite(RED_PIN, LOW);
}

void redLight()
{
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);
}
