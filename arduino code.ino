const int ena_1 = 2;
const int ena_2 = 3;
const int ena_3 = 4;
const int ena_4 = 5;
const int sensor = 6;

void setup() {
  Serial.begin(9600);
  pinMode(ena_1, OUTPUT);
  pinMode(ena_2, OUTPUT);
  pinMode(ena_3, OUTPUT);
  pinMode(ena_4, OUTPUT);
  pinMode(sensor, INPUT_PULLUP);
}

void loop() {
  int sensorVal = digitalRead(sensor);
  Serial.println(sensorVal);
  if (sensorVal == HIGH) {
    digitalWrite(ena_1, LOW);
    digitalWrite(ena_2, HIGH);
    digitalWrite(ena_3, LOW);
    digitalWrite(ena_4, HIGH);
  } 
  else {
    digitalWrite(ena_1, HIGH);
    digitalWrite(ena_2, LOW);
    digitalWrite(ena_3, HIGH);
    digitalWrite(ena_4, LOW);  }
}
