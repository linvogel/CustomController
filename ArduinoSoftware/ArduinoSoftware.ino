void setup() {
  Serial.begin(115200);
  Serial.setTimeout(0x7FFFFFFF);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

bool on = false;

void loop() {
  String str = Serial.readStringUntil('\n');
  if (on) digitalWrite(13, LOW);
  else digitalWrite(13, HIGH);
  on = !on;
  Serial.println(str);
}
