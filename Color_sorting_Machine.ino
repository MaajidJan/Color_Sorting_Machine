#include <Servo.h>

Servo servo1;  // create servo object to control the first servo
Servo servo2;  // create servo object to control the second servo

const int servoPin1 = 9;
const int servoPin2 = 10;

// Color sensor pins
const int S0 = 4;
const int S1 = 5;
const int S2 = 7;
const int S3 = 6;
const int sensorOut = 8;



void setup() {
  servo1.attach(servoPin1);  // attach first servo
  servo2.attach(servoPin2);
  servo1.write(90);
  servo2.write(90);  // attach second servo
  
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
  
  Serial.begin(9600);  // initialize serial communication
}

void loop() {
  // Move servos to 90 degrees

  servo1.write(105);
  delay(1000);
  
  // Move servos to 130 degrees
  servo1.write(37);
  delay(1000);
  
  // Detect color
  int red = getColorReading(LOW, LOW);
  int green = getColorReading(HIGH, HIGH);
  int blue = getColorReading(LOW, HIGH);



  Serial.print("Red: ");
  Serial.print(red);
  Serial.print(" Green: ");
  Serial.print(green);
  Serial.print(" Blue: ");
  Serial.println(blue);

  // Move servos to 180 degrees if a specific color is detected
  if (red < 60 ) {
    servo1.write(0);
    delay(200);
    servo2.write(90);  // Move servos to 180 degrees for red
    Serial.println("Red detected");
  } else if (green <90) {
    servo1.write(0);
    delay(200);
    servo2.write(30);  // Move servos to 180 degrees for green
    
  } else if (blue < 85) {
    servo1.write(0);
    delay(200);
    servo2.write(160);  // Move servos to 180 degrees for orange
    
  } else {
    servo1.write(0); 
    delay(200);  // Default position if no specific color detected
    
  }


}

int getColorReading(int S2State, int S3State) {
  digitalWrite(S2, S2State);
  digitalWrite(S3, S3State);
  return pulseIn(sensorOut, LOW);
}


