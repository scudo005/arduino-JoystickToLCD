# arduino-JoystickToLCD

This little sketch allows you to see in real time the status of a connected analog joystick to an LCD display instead of the serial console.

# Circuit

The circuit is specified in the JoystickToLCD.ino sketch file itself.

# Known bugs

  - On my setup, the LCD shows some corrupted text after the Y-axis value; this is partially mitigated in the code, but I don't know what causes this bug.
  - Sometimes the LCD freaks out and displays random pixels on the first row; just reupload the sketch in case.
