int current = 190;

void setup() {
  TCCR1B=TCCR1B&0b11111000|0x01;
  //pinMode(2, OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(30000);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(2, HIGH);
  delay(1000);
  Serial.write("ZHOPA1");
  digitalWrite(2, LOW);
  delay(1000);
  Serial.write("ZHOP2");*/
  analogWrite(9,current);
  Serial.print(String("\nCurrent: ") + String(current) + String("\n"));
  current = Serial.parseInt();
}
