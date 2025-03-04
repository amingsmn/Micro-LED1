int led = 13;
int button = 7;
int state = 0;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  state = digitalRead(button);
  if (state == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
