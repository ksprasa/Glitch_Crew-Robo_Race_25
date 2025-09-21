const int L_1 = 3;
const int L_2 = 4;
const int ENA = 9;
const int R_1 = 5;
const int R_2 = 6;
const int ENB = 10;
const int Time_Delay = 500;
void setup() {
  pinMode(L_1,OUTPUT);
  pinMode(L_2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(R_1,OUTPUT);
  pinMode(R_2,OUTPUT);
  pinMode(ENB,OUTPUT);
}

void RightForward(){
  digitalWrite(ENA,HIGH);
  digitalWrite(R_1,HIGH);
  digitalWrite(R_2,LOW);
}
void RightStop(){
  digitalWrite(ENA,LOW);
  digitalWrite(R_1,LOW);
  digitalWrite(R_2,LOW);
}
void RightBackward(){
  digitalWrite(ENA,HIGH);
  digitalWrite(R_1,LOW);
  digitalWrite(R_2,HIGH);
}
void LeftForward(){
  digitalWrite(ENB,HIGH);
  digitalWrite(L_1,HIGH);
  digitalWrite(L_2,LOW);
}
void LeftStop(){
  digitalWrite(ENB,LOW);
  digitalWrite(L_1,LOW);
  digitalWrite(L_2,LOW);
}
void LeftBackward(){
  digitalWrite(ENB,HIGH);
  digitalWrite(L_1,LOW);
  digitalWrite(L_2,HIGH);
}
void loop() {
  LeftForward();
  RightForward();

  delay(Time_Delay);

  LeftStop();
  RightStop();

  delay(Time_Delay);

  LeftBackward();
  RightBackward();

  delay(Time_Delay);

  LeftForward();
  RightStop();

  delay(Time_Delay);

  LeftStop();
  RightForward();

  delay(Time_Delay);

  LeftBackward();
  RightStop();

  delay(Time_Delay);

  LeftForward();
  RightBackward();

  delay(Time_Delay);

  LeftStop();
  RightBackward();

  delay(Time_Delay);

  LeftBackward();
  RightForward();

  delay(Time_Delay);
}
