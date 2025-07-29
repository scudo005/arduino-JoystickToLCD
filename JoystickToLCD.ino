//www.elegoo.com
//2016.12.9

/*
  The circuit:
 * LCD RS pin to digital pin 7
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 12
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K potentiometer: ends on 5V, ground and wiper to LCD VO pin (pin 3)
 * Joystick pin VCC to ground
 * Joystick pin +5V to 5V
 * Joystick pin VRx on pin A1
 * Joystick pin VRy on pin A0
 * Joystick pin SW on pin 2
 
 Taken from the examples from the official Arduino IDE.
 Edit date: 5 Mar 2022
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = A0; // analog pin connected to X output
const int Y_pin = A1; // analog pin connected to Y output

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(SW_pin, INPUT); //initialize the SW pin
  digitalWrite(SW_pin, HIGH);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  lcd.print("Switch: ");
  lcd.print(digitalRead(SW_pin)); //prints the status of the switch (0 if pressed, either 1)
  lcd.setCursor(10, 0);
  lcd.print("X: "); 
  lcd.print(analogRead(X_pin)); //prints the status of the X-axis
  lcd.setCursor(0,1);
  lcd.print("Y: "); 
  lcd.println(analogRead(Y_pin)); //prints the status of the Y-axis
  lcd.setCursor(6,6);
  lcd.print("  "); //countermeasure for a potential graphical glitch
 
}

