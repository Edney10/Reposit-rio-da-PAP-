/*
*  Teste do Sensor PIR
*/

#define PIR_SENSOR_PIN 10

void setup() {
    Serial.begin(9600);
    pinMode(PIR_SENSOR_PIN, INPUT);
}

void loop() {
    if (digitalRead(P
