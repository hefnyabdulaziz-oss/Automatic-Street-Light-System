Automatic Street Light System (Embedded & IoT)
Overview

This project presents the design and implementation of an Automatic Street Light System that intelligently controls street lighting based on ambient light conditions and time scheduling, with optional IoT connectivity for monitoring and control. The system is designed to reduce power consumption while ensuring reliable illumination during night hours, making it suitable for smart city and energy-efficient infrastructure applications.

The project was developed as part of an Embedded Real-Time Systems course, focusing on practical embedded design, sensor interfacing, and system-level integration.

Problem Statement

Traditional street lighting systems operate manually or remain ON for long periods regardless of actual lighting needs. This leads to:

Unnecessary energy consumption

Increased operational costs

Reduced lamp lifetime

The goal of this project is to automate street lighting, ensuring lights operate only when needed and at appropriate brightness levels, while enabling future scalability through IoT.

System Objectives

Automatically detect day and night conditions

Adjust light intensity dynamically to save energy

Maintain accurate time-based control

Provide real-time system status locally and remotely

Demonstrate a scalable smart lighting solution

System Architecture

The system is built around an ATmega32 microcontroller, which acts as the central controller and interfaces with multiple peripherals:

LDR Sensor: Measures ambient light intensity

RTC (DS3231): Provides accurate timekeeping for scheduling

LED / Street Lamp Model: Represents street lighting

PWM Control: Adjusts brightness levels smoothly

ESP8266 Wi-Fi Module: Enables IoT connectivity

16×2 I²C LCD: Displays system status, time, and operating mode

Operating Modes

The system operates in three main modes:

Day Mode

Ambient light is high

Street lights are turned OFF

Dim Mode

Low ambient light (evening)

Lights operate at reduced brightness using PWM

Night Mode

Very low ambient light (night)

Lights operate at full brightness

Mode selection is based on LDR readings combined with RTC time, ensuring reliable operation even in varying weather conditions.

Hardware Components

ATmega32 Microcontroller

LDR (Light Dependent Resistor)

RTC DS3231

ESP8266 Wi-Fi Module

16×2 LCD with I²C Interface

LEDs / Street Light Model

Resistors, transistors, and supporting circuitry

Software Implementation

Embedded C is used for firmware development

ADC is used to read LDR values

PWM is used for brightness control

I²C communication is used for RTC and LCD

UART is used to communicate with the ESP8266

System logic handles mode switching, time validation, and data display

IoT Features

Using the ESP8266 module, the system supports:

Remote monitoring of light status

Time and mode visualization via cloud/dashboard

Potential manual override and data logging

Future integration with smart city platforms

Power Efficiency & Analysis

The project includes:

Power consumption calculations for each operating mode

Estimated energy savings compared to traditional systems

Battery life estimation for off-grid scenarios

Applications

Smart city street lighting

Campus and residential roads

Parking areas and pathways

Energy-efficient public infrastructure

Future Enhancements

Motion detection for adaptive lighting

Solar panel integration

Mobile application control

Centralized cloud dashboard

AI-based adaptive brightness control

Conclusion

This project demonstrates a complete embedded and IoT-based smart street lighting solution, combining hardware design, firmware development, and system optimization. It highlights practical embedded engineering skills while addressing real-world energy efficiency challenges.
