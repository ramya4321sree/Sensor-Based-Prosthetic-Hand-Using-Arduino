# Sensor-Based Prosthetic Hand Using Arduino

## Project Overview

The Sensor-Based Prosthetic Hand is an embedded systems project designed to replicate human finger movements using flex sensors, servo motors, and an Arduino Uno microcontroller.

The system captures finger bending motions through flex sensors mounted on a glove and converts them into corresponding servo motor movements, enabling a prosthetic hand to mimic real-time human gestures.

This project demonstrates the integration of sensors, actuators, signal processing, and embedded programming for assistive technology applications.

---

## Problem Statement

Conventional prosthetic devices are often expensive and inaccessible to many individuals.

This project aims to develop a low-cost prototype capable of translating human hand movements into mechanical motion using readily available electronic components.

---

## Objectives

* Capture finger movement using flex sensors
* Process sensor data using Arduino Uno
* Control servo motors based on sensor readings
* Replicate human hand gestures on a prosthetic hand
* Develop a cost-effective assistive technology solution

---

## Hardware Components

| Component    | Quantity |
| ------------ | -------- |
| Arduino Uno  | 1        |
| Flex Sensors | 4        |
| Servo Motors | 4        |
| Glove        | 1        |
| Jumper Wires | Multiple |
| Power Supply | 1        |

---

## Software Used

* Arduino IDE
* Embedded C / Arduino Programming
* Serial Monitor for Sensor Analysis

---

## Working Principle

1. Flex sensors attached to the glove detect finger bending.
2. Arduino Uno continuously reads analog values from the sensors.
3. Sensor values are mapped to servo motor rotation angles.
4. Corresponding servo motors rotate according to finger movement.
5. The prosthetic hand reproduces finger flexion and extension in real time.

---

## Project Structure

```text
Sensor-Based-Prosthetic-Hand-Using-Arduino
│
├── Arduino_Code
│   └── prosthetic_hand.ino
│
├── Images
│   ├── circuit_diagram.jpeg
│   ├── prototype.jpeg
│   ├── finger_flexion.jpeg
│   ├── finger_extension.jpeg
│   └── flex_sensor_readings.jpeg
│
└── README.md
```

---

## Circuit Diagram

View Circuit Diagram:

[Images/circuit_diagram.jpeg](Images/circuit_diagram.jpeg)

---

## Arduino Implementation

The system uses analog sensor acquisition and PWM-based servo motor control.

### Key Functionalities

* Real-time sensor monitoring
* Analog-to-angle conversion
* Servo motor actuation
* Gesture replication
* Serial monitoring for debugging and calibration

Source Code:

```text
Arduino_Code/prosthetic_hand.ino
```

---

## Experimental Results

### Prototype Setup

View Image:

[Images/prototype.jpeg](Images/prototype.jpeg)

The hardware prototype successfully integrates flex sensors, Arduino Uno, and servo motors for real-time gesture control.

### Finger Flexion

View Image:

[Images/finger_flexion.jpeg](Images/finger_flexion.jpeg)

The prosthetic fingers bend according to the user's finger movements.

### Finger Extension

View Image:

[Images/finger_extension.jpeg](Images/finger_extension.jpeg)

The prosthetic fingers return to their initial position when the user's fingers are extended.

### Flex Sensor Readings

View Image:

[Images/flex_sensor_readings.jpeg](Images/flex_sensor_readings.jpeg)

Real-time sensor values are monitored through the Arduino Serial Monitor and converted into servo motor rotation angles.

---

## Performance Highlights

* Real-time gesture replication
* Smooth servo motor control
* Accurate flex sensor tracking
* Low-cost hardware implementation
* Modular and scalable design

---

## Applications

* Prosthetic Assistive Devices
* Rehabilitation Engineering
* Biomedical Systems
* Human Machine Interaction
* Robotics and Automation
* Gesture Controlled Systems

---

## Future Enhancements

* Wireless Communication (Bluetooth/Wi-Fi)
* Machine Learning Based Gesture Recognition
* Additional Finger Degrees of Freedom
* 3D Printed Prosthetic Structure
* Battery Powered Portable Design

---

## Skills Demonstrated

* Embedded Systems
* Arduino Programming
* Sensor Interfacing
* Servo Motor Control
* Hardware Prototyping
* Signal Processing
* Circuit Design
* Real-Time Systems

---

## Author

**Ramya Sree**

Electronics and Communication Engineering (ECE)

G. Narayanamma Institute of Technology and Science (GNITS)

Hyderabad, India
