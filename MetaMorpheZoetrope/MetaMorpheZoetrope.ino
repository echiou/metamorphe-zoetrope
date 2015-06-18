/*
  Turntable Stroboscope
  Controls the strobe light for a modified turntable to act as a stroboscope.
  Can accomodate 10 and 15 frame "records".
 */

const int switch33 = 2; //Pin number to detect if running at 33 (15 frames)
int lightSwitch = 7; //Pin num to turn strobe on and off
const int strobe = 12; //Pin number of the strobe
//const int ledPin = 13; //LED on Arduino (debugging)

int lightOn;
boolean fifteenFrames = false; //Whether or not we are using 15 or 10 frames
int delayTime = 37; //delay between 

void setup() {
  pinMode(switch33, INPUT);
  pinMode(lightSwitch, INPUT);
//  pinMode(ledPin, OUTPUT);
  pinMode(strobe, OUTPUT);
//  Serial.begin(9600);
}

void loop() {
  if (!fifteenFrames && digitalRead(switch33) == 1) { //Running at 15 frames but it hasn't been set
    fifteenFrames = true;
    delayTime = 35;
  }
  else if (fifteenFrames && digitalRead(switch33) == 0) { //Running at 10 frames but it hasn't been set
    fifteenFrames = false;
    delayTime = 37;
  }

  // read the state of the switch:
  lightOn = digitalRead(lightSwitch);

  // if switch on, lightOn is HIGH:
  if (lightOn == HIGH) {         
//    digitalWrite(ledPin, HIGH); 
    //Flash strobe
    digitalWrite(strobe, HIGH);
    delay(1); // wait for a millisecond
    digitalWrite(strobe, LOW);
  } 
//  else {
//    digitalWrite(ledPin, LOW); 
//  }

  delay(delayTime); //wait proper amount of time before flashing again
}
