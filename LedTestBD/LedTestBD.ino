const int LedC = 1, LeftLedA = 12, RightLedA =4, LeftLedB = 13, RightLedB = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedC, OUTPUT);
  pinMode(LeftLedA, OUTPUT);
  pinMode(RightLedA, OUTPUT);
  pinMode(LeftLedB, OUTPUT);
  pinMode(RightLedB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LeftLedA, HIGH);
  digitalWrite(RightLedA, HIGH);
  delay(500);
  digitalWrite(LeftLedA, LOW);
  digitalWrite(RightLedA, LOW);
  delay(500);
  
  digitalWrite(LeftLedB, HIGH);
  digitalWrite(RightLedB, HIGH);
  delay(500);
  digitalWrite(LeftLedB, LOW);
  digitalWrite(RightLedB, LOW);
  delay(500);

  digitalWrite(LedC, HIGH);
  delay(500);
  digitalWrite(LedC, LOW);
  delay(500);
}
