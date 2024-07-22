Overview
This project controls two servo motors based on color detection using a TCS3200 color sensor. The servos move to specific angles when a certain color is detected.

Hardware Required
2 Servo Motors
TCS3200 Color Sensor
Arduino Board
Jumper Wires
Breadboard (optional)
Circuit Connections
Servo Motors
Servo 1: Signal to Pin 9, VCC to 5V, GND to GND
Servo 2: Signal to Pin 10, VCC to 5V, GND to GND
TCS3200 Color Sensor
S0: Pin 4
S1: Pin 5
S2: Pin 7
S3: Pin 6
OUT: Pin 8
VCC: 5V
GND: GND
Important Notes
Adjust Color Thresholds: Modify the threshold values in the code to detect different colors based on your needs.
Serial Monitoring: Use the Serial Monitor to observe color values and adjust thresholds for detecting additional colors.
Power Supply: Ensure a stable power supply for the Arduino and connected components.
Usage
Connect the hardware as per the circuit connections.
Upload the code to your Arduino board.
Open the Serial Monitor to observe the detected color values.
Adjust the servo movements based on the color detected.
Cautions
Handle Components Carefully: Ensure all connections are secure and components are handled gently.
Monitor Serial Output: Use the Serial Monitor to fine-tune color detection by observing the values.
