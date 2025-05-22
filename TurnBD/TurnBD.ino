const int LedC = 1, LeftLedA = 12, RightLedA = 4, LeftLedB = 13, RightLedB = 5;

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
}

void loop() {

  Go();
  delay(5000);
  GoRight();
  delay(500);
  Go();
  delay(3000);
  GoLeft();
  delay(500);
  Go();


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

void Go(){

  // Left motor forward
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  analogWrite(enableMotor1, 255); 

  // Right Motor forward
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(enableMotor2, 255);
}

void Reverse(){
  
  // Left motor reverse
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  analogWrite(enableMotor1, 200); 

  // Right Motor reverse
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(enableMotor2, 200);
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

