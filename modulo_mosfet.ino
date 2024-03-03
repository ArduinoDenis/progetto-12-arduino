/*
  This example demonstrates how to control the speed of a DC motor using a MOSFET module.
*/

int motorSpeed = 0; // Initialize the motor speed variable
int speedIncrement = 1; // Define the amount by which the speed will be incremented or decremented

unsigned long currentTime;
unsigned long previousTime;

void setup() {
  pinMode(9, OUTPUT); // Set pin 9 as an output for controlling the MOSFET module
  currentTime = millis(); // Initialize the current time
  previousTime = currentTime; // Set the previous time equal to the current time
}

void loop() {
  currentTime = millis(); // Update the current time

  // Execute the following code every 20 milliseconds (50 times per second)
  if (currentTime >= (previousTime + 20)) {
    analogWrite(9, motorSpeed); // Set the motor speed using PWM on pin 9
    motorSpeed += speedIncrement; // Increment or decrement the motor speed

    // If the motor speed reaches maximum or minimum, change the direction of speed change
    if (motorSpeed == 0 || motorSpeed == 255) {
      speedIncrement = -speedIncrement;
    }

    // If the motor speed reaches 0, pause for 5 seconds
    if (motorSpeed == 0) {
      delay(5000);
    }

    previousTime = currentTime; // Update the previous time for the next loop iteration
  }
}
