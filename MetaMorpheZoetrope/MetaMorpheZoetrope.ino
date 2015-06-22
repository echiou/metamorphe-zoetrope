/*
  MetaMorphe Zoetrope
  Controls the strobe light for a modified turntable to act as a zoetrope/stroboscope.
  Can accomodate 10 and 15 frame "records".
 */

const int switch33 = 2; // Pin number to detect if running at "33 rpm" (15 frames)
const int lightSwitch = 7; // Pin num of the button to turn strobe on and off
const int strobe = 12; // Pin number of the strobe

int lightOn; // Whether or not strobe is on
boolean fifteenFrames = false; // Whether or not we are using 15 or 10 frames
int delayTime = 37; // Delay between strobe flashes

void setup() {
  pinMode(switch33, INPUT);
  pinMode(lightSwitch, INPUT);
  pinMode(strobe, OUTPUT);
}

void loop() {
  // Running at 15 frames but it hasn't been set:
  if (!fifteenFrames && digitalRead(switch33) == 1) {
    fifteenFrames = true;
    delayTime = 35;
  }
  // Running at 10 frames but it hasn't been set:
  else if (fifteenFrames && digitalRead(switch33) == 0) {
    fifteenFrames = false;
    delayTime = 37;
  }

  // Read the state of the switch
  lightOn = digitalRead(lightSwitch);

  // If switch on, lightOn is HIGH:
  if (lightOn == HIGH) {
    // Flash strobe
    digitalWrite(strobe, HIGH);
    delay(1); // Wait for a millisecond
    digitalWrite(strobe, LOW);
  }

  delay(delayTime); // Wait proper amount of time before flashing again
}
