# arduino-JoystickToLCD

This little sketch allows you to see in real time the status of a connected analog joystick (X-axis, Y-axis and the digital switch) to an LCD display.

# Circuit

The circuit is specified in the JoystickToLCD.ino sketch file itself.

# Notes

Remember to import the "LiquidCrystal.h" library in the IDE (Sketch -> Import library -> Add library and select directly the LiquidCrystal.zip file)

# Known bugs

  - On my setup, the LCD shows some corrupted text after the Y-axis value; this is partially mitigated in the code, but I don't know what causes this bug.
  - Sometimes the LCD freaks out and displays random pixels on the first row; just reupload the sketch in case.
