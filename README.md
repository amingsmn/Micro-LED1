پروژه ۱
در این پروژه با به کمک دستورات مورد نظر led موجود بر روی مدار اردینو را روشن کردیم
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

پروژه ۲ 
در این پروژه با بستن یک مدار ساده که در آن یک دکمه وجود دارد led موجود بر روی اردینو را روشن و خاموش کردیم به این صورت که با فشار دادن دکمه led روشن و با رها کردنش led خاموش شود
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
