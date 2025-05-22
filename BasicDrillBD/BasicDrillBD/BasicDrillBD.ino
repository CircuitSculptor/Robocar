const int LedC = 1, LeftLedA = 12, RightLedA = 4, LeftLedB = 13, RightLedB = 5, LeftBmpr = 2, RightBmpr = 3;

const int motor1Pin1 = 7;
const int motor1Pin2 = 8;
const int enableMotor1 = 6;
const int motor2Pin1 = 9;
const int motor2Pin2 = 10;
const int enableMotor2 = 11;

void setup() {
  pinMode(motor1Pin1, OUTPUT);  //LEFT MOTOR
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enableMotor1, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);   //RIGHT MOTOR
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enableMotor2, OUTPUT);
  pinMode(LedC, OUTPUT);
  pinMode(LeftLedA, OUTPUT);
  pinMode(RightLedA, OUTPUT);
  pinMode(LeftLedB, OUTPUT);
  pinMode(RightLedB, OUTPUT);
  pinMode(LeftBmpr, INPUT);
  pinMode(RightBmpr, INPUT);
  /*GoSlow();
  LedFwd();
  delay(2000);
  GoMedium();
  LedFwd();
  delay(2000);
  Go();
  LedFwd();
  delay(2000);
  Stop();*/
}

void loop() {
  /*
  Functions List:
  Go();
  GoMedium();
  GoSlow();
  Stop();
  GoLeft();
  GoRight();
  Reverse();
  LedFwd();
  LedBck();
  LedTurnLeft();
  LedTurnRight();
  */
  Go();
  delay(100);
  LedFwd();

  if(digitalRead(LeftBmpr) == LOW){
    Reverse();
    delay(40);
    LedBck();
    Stop();
    GoRight();
    delay(500);
    LedTurnRight();
  }

  if(digitalRead(RightBmpr) == LOW){
    Reverse();
    delay(200);
    LedBck();
    Stop();
    GoLeft();
    delay(500);
    LedTurnLeft();
  }
}
void Stop(){
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);
}
void Go(){
  // Left motor forward
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  analogWrite(enableMotor1, 250);  //250n rather than 255 to compensate for the motor speed
  // Right Motor forward
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(enableMotor2, 255);   //255
}
void GoSlow(){
  // Left motor forward
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  analogWrite(enableMotor1, 120);  //250
  // Right Motor forward
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(enableMotor2, 125);   //255
}
void GoMedium(){
  // Left motor forward
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  analogWrite(enableMotor1, 170);  //250
  // Right Motor forward
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(enableMotor2, 175);   //255
}
void GoLeft(){
  // Left motor forward
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  analogWrite(enableMotor1, 0); 
  // Right Motor forward
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(enableMotor2, 255);
}
void GoRight(){
  // Left motor forward
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  analogWrite(enableMotor1, 255); 
  // Right Motor forward
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(enableMotor2, 0);
}
void Reverse(){
  // Left motor reverse
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  analogWrite(enableMotor1, 130); //150
  // Right Motor reverse
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(enableMotor2, 135); //155
}
void LedFwd(){
    digitalWrite(LeftLedA, HIGH);
    digitalWrite(RightLedA, HIGH);
    delay(300);
    digitalWrite(LeftLedA, LOW);
    digitalWrite(RightLedA, LOW);
    delay(300);
    digitalWrite(LeftLedB, HIGH);
    digitalWrite(RightLedB, HIGH);
    delay(300);
    digitalWrite(LeftLedB, LOW);
    digitalWrite(RightLedB, LOW);
    delay(300);
    digitalWrite(LedC, HIGH);
    delay(300);
    digitalWrite(LedC, LOW);
    delay(300);
}
void LedBck(){
    digitalWrite(LedC, HIGH);
    delay(300);
    digitalWrite(LedC, LOW);
    delay(300);
    digitalWrite(LeftLedB, HIGH);
    digitalWrite(RightLedB, HIGH);
    delay(300);
    digitalWrite(LeftLedB, LOW);
    digitalWrite(RightLedB, LOW);
    delay(300);
    digitalWrite(LeftLedA, HIGH);
    digitalWrite(RightLedA, HIGH);
    delay(300);
    digitalWrite(LeftLedA, LOW);
    digitalWrite(RightLedA, LOW);
    delay(300);
}
void LedTurnLeft(){
    digitalWrite(LeftLedA, HIGH);
    digitalWrite(LeftLedB, HIGH);
    digitalWrite(LedC, HIGH);
    delay(300);
    digitalWrite(LeftLedA, LOW);
    digitalWrite(LeftLedB, LOW);
    digitalWrite(LedC, LOW);
    delay(300);
}
void LedTurnRight(){
    digitalWrite(RightLedA, HIGH);
    digitalWrite(RightLedB, HIGH);
    digitalWrite(LedC, HIGH);
    delay(300);
    digitalWrite(RightLedA, LOW);
    digitalWrite(RightLedB, LOW);
    digitalWrite(LedC, LOW);
    delay(300);
}

