/*
 * ESP32-S3 BLE OBD Client - Ford Fiesta ST Optimized
 * Main Application File
 * 
 * FIXED FOR: 2020 Ford Fiesta ST (ISO 15765-4 CAN)
 * Target: IOS-Vlink (d2:e0:2f:8d:4f:93)
 * 
 * Simple 3-file structure:
 * - main.ino (this file) - Clean main application
 * - ford_obd.h - All declarations and PID configuration
 * - ford_obd.cpp - All implementation code
 */

#include <Arduino.h>
#include <ford_obd.h>

void setup() {
  Serial.begin(115200);
  delay(2000);
  
  // Initialize the Ford OBD system
  fordOBD.begin();
  
  // Show configuration
  fordOBD.printStatus();
}

void loop() {
  // Run the Ford OBD system
  fordOBD.update();
  
  delay(10);
}