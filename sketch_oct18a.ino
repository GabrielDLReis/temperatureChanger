void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  float valor = analogRead(0);
  float temperatura = valor/2.04;
  Serial.println(temperatura);
  delay(1000);

  if(temperatura >=21) {
    digitalWrite(13, HIGH);

  } else {
    digitalWrite(13, LOW);
  }
}
