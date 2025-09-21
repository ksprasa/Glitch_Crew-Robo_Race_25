#include <QTRSensors.h>

#define NUM_SENSORS 8
#define TIMEOUT 2500
#define EMITTERPIN 2

QTRSensorsRC qtrrc((unsigned char[]){3,4,5,6,7,8,9,10}, NUM_SENSORS, TIMEOUT, EMITTERPIN);

unsigned int sensorVals[NUM_SENSORS];

void setup() {
  Serial.begin(9600);
  delay(1000);
  // Calibration
  for (int i = 0; i < 250; i++) {
    qtrrc.calibrate();
    delay(20);
  }
  for (uint8_t i = 0; i < NUM_SENSORS; i++) {
    Serial.print(qtrrc.calibratedMinimumOn[i]);
    Serial.print(' ');
  }
  Serial.println();
  for (uint8_t i = 0; i < NUM_SENSORS; i++) {
    Serial.print(qtrrc.calibratedMaximumOn[i]);
    Serial.print(' ');
  }
  Serial.println();
}

void loop() {
  qtrrc.read(sensorVals);
  for (uint8_t i = 0; i < NUM_SENSORS; i++ ) {
    Serial.print(sensorVals[i]);
    Serial.print('\t');
  }
  Serial.println();
  delay(200);
}
