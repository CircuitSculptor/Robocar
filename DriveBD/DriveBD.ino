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
  LedFwd();
  delay(2000);
  Reverse();
  LedBck();
  delay(2000);
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

void Go(){

  // Left motor reverse
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(enableMotor1, HIGH); 

  // Right Motor reverse
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  digitalWrite(enableMotor2, HIGH);
}

void Reverse(){
  
  // Left motor forward
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(enableMotor1, HIGH); 

  // Right Motor forward
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  digitalWrite(enableMotor2, HIGH);
}



