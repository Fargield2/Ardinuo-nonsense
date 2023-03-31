int soundSensor = 7;
int fan = 6;
boolean fanStatus = false;

void setup() {
    pinMode(soundSensor, INPUT);
    pinMode(fan, OUTPUT);
}

void loop() {
    int data = digitalRead(soundSensor);
    if (data == 1) {
        if (fanStatus == false) {
            fanStatus = true;
            digitalWrite(fan, HIGH);
        } else {
            fanStatus = false;
            digitalWrite(fan, LOW);
        }
    }
    delay(100);
}
