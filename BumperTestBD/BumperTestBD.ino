const int LedC = 1, LeftLedA = 12, RightLedA = 4, LeftLedB = 13, RightLedB = 5, LeftBmpr = 2, RightBmpr = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedC, OUTPUT);
  pinMode(LeftLedA, OUTPUT);
  pinMode(RightLedA, OUTPUT);
  pinMode(LeftLedB, OUTPUT);
  pinMode(RightLedB, OUTPUT);
  pinMode(LeftBmpr, INPUT);
  pinMode(RightBmpr, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(LeftBmpr) == LOW){
    digitalWrite(LeftLedA, HIGH);
    digitalWrite(LeftLedB, HIGH);
  }
  if(digitalRead(LeftBmpr) == HIGH){
    digitalWrite(LeftLedA, LOW);
    digitalWrite(LeftLedB, LOW);
  }

  if(digitalRead(RightBmpr) == LOW){
    digitalWrite(RightLedA, HIGH);
    digitalWrite(RightLedB, HIGH);
  }

  if(digitalRead(RightBmpr) == HIGH){
    digitalWrite(RightLedA, LOW);
    digitalWrite(RightLedB, LOW);
  }
}
