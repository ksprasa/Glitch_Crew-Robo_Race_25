#define SENSORPIN1 A0
#define SENSORPIN2 A1
#define DELAY 500

int IRvalue1,IRvalue2;
void setup() {
  pinMode(SENSORPIN1,INPUT);
  pinMode(SENSORPIN2,INPUT);

  Serial.begin(9600);
}

void loop() {
  IRvalue1 = analogRead(SENSORPIN1);
  IRvalue2 = analogRead(SENSORPIN2);

  Serial.print("IR Reading 1 is ");
  Serial.println(IRvalue1);
  Serial.print("IR Reading 2 is ");
  Serial.println(IRvalue2);
  delay(DELAY);
}
