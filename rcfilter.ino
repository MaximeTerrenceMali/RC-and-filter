// The purpose of this code is to create a square wave signal and record the readings of how the capacitor in the circuit filters out high frequency components

const int signalPin = 9;

void seteup(){

pinMode(signalPin, OUTPUT); //makes the signal pin an output

}


void loop(){

digitalWrite(signalPin, HIGH);
delayMicroseconds(500); // When signal pin is High,there's a delay of 500 microseconds per reading to create a 1kHz square wave
digitalWrite(signalPin, LOW);
delayMicroseconds(500); //When signal pin is low,there's a delay of 500 microseconds per reading to create a 1kHz square wave
