
# Automatic Street Light System

## 📌 Overview

The **Automatic Street Light System** is an embedded and IoT-based project designed to control street lighting intelligently based on **ambient light conditions** and **time scheduling**. The system reduces energy consumption by automatically switching and dimming lights while maintaining reliable illumination during night hours.

This project demonstrates practical embedded systems concepts including **sensor interfacing, PWM control, real-time clock integration, and IoT communication**, making it suitable for **smart city applications**.

---

## ❓ Problem Statement

Conventional street lighting systems operate manually or remain ON regardless of environmental conditions, resulting in:

* High energy consumption
* Increased maintenance costs
* Reduced lamp lifetime

This project aims to automate street lighting to ensure **efficient, reliable, and smart control**.

---

## 🎯 Project Objectives

* Automatically detect day and night conditions
* Adjust light intensity dynamically using PWM
* Maintain accurate time-based operation
* Enable remote monitoring through IoT
* Improve energy efficiency and scalability

---

## 🧠 System Architecture

The system is centered around an **ATmega32 microcontroller**, which processes sensor data and controls lighting behavior.

**Main components:**

* LDR sensor for ambient light detection
* RTC (DS3231) for accurate timekeeping
* LED / street lamp model
* PWM for brightness control
* ESP8266 Wi-Fi module for IoT connectivity
* 16×2 I²C LCD for local status display

---

## ⚙️ Operating Modes

| Mode       | Condition           | Behavior           |
| ---------- | ------------------- | ------------------ |
| Day Mode   | High ambient light  | Lights OFF         |
| Dim Mode   | Low light (evening) | Reduced brightness |
| Night Mode | Very low light      | Full brightness    |

Mode selection is based on **LDR readings combined with RTC time**.

---

## 🧩 Hardware Components

* ATmega32 Microcontroller
* LDR (Light Dependent Resistor)
* RTC DS3231
* ESP8266 Wi-Fi Module
* 16×2 I²C LCD
* LEDs / street light model
* Supporting resistors and circuitry

---

## 💻 Software Implementation

* Language: **Embedded C**
* ADC for reading LDR values
* PWM for LED brightness control
* I²C for RTC and LCD communication
* UART for ESP8266 communication
* Modular firmware design for scalability

---

## 🌐 IoT Features

* Remote monitoring of lighting status
* Real-time visualization of operating mode
* Cloud-ready architecture
* Support for future manual override and logging

---

## 🔋 Power Efficiency

* Power consumption analysis for each mode
* Energy savings compared to traditional systems
* Battery life estimation for off-grid deployment

---

## 🏙️ Applications

* Smart city street lighting
* Campuses and residential roads
* Parking areas and walkways
* Energy-efficient public infrastructure

---

## 🚀 Future Enhancements

* Motion-based adaptive lighting
* Solar panel integration
* Mobile application control
* Centralized cloud dashboard
* AI-based brightness optimization

---

## ✅ Conclusion

This project provides a complete **smart street lighting solution** by integrating embedded hardware, real-time control, and IoT communication. It showcases practical engineering skills while addressing real-world energy efficiency challenges.

---

## 🛠️ Technologies Used

* ATmega32
* ESP8266
* Embedded C
* ADC, PWM, UART, I²C
