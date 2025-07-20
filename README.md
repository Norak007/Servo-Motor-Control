# Servo-Motor-Control
This project demonstrates how to control four servo motors using an Arduino UNO. The motors perform a synchronized sweeping motion for 2 seconds, and then stop at a fixed position of 90 degrees.

# How It Works
All four servo motors are connected to digital pins 3, 5, 6, and 9.

Each motor performs a back-and-forth motion from 0° to 180° and back.

After running this motion for 2 seconds, all motors are set to hold at 90°.

# Circuit Diagram
<img width="1269" height="666" alt="image" src="https://github.com/user-attachments/assets/228ce859-b8e8-4f7b-ac54-ea85ceb9c366" />

The diagram shows how the four servo motors are connected to the Arduino UNO through a breadboard.

# Components Used
Arduino UNO

4x Servo Motors

Breadboard

Jumper Wires

# Simple Walking Algorithm

We have 4 servo motors:

Servo 1 → Left leg

Servo 2 → Right leg

Servo 3 → Moves the body forward (like the hip)

Servo 4 → Helps with balance or acts like an arm


Steps:

Lift the right leg a little by moving Servo 2 to 60°.

Tilt the body forward using Servo 3 (for example, move it to 100°).

Move the right leg forward (Servo 2 to 120°).

Lower the right leg back to 90°.

Now do the same steps with the left leg using Servo 1.

Use Servo 4 to make small moves to help with balance.

Repeat these steps again and again to make the robot walk.



Each step = lift leg → move body → move leg forward → put leg down → switch legs.
