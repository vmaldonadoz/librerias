#include <Arduino.h>
#include <L293D.h>

#define MOTOR_A      25   // motor pin a
#define MOTOR_B      26   // motor pin b
#define MOTOR_ENABLE 33   // Enable (also PWM pin)

// Create motor object using given pins
L293D motor(MOTOR_A, MOTOR_B, MOTOR_ENABLE);

void setup() {  
    // begin --> true false, enables disables PWM
    motor.begin(true);
    // Speed -100%...0..100%
    motor.SetMotorSpeed(100);
}

void loop() {
}
