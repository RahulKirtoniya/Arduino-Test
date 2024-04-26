void setup() {

  pinMode(LED_BUILTIN, OUTPUT); 
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}


void loop() {
  for (int pin = 13; pin >= 7; pin--) {
    digitalWrite(pin, HIGH);
    delay(500); 
    digitalWrite(pin, LOW); 
  }
  delay(1000);
}
