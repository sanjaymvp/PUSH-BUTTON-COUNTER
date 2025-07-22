# PUSH-BUTTON-COUNTER

COMPANY:CODTECH IT SOLUTIONS

INTERN ID : CT04DH8046

DOMAIN : EMBEDDED SYSTEMS

DURATION : 4 WEEKS

MENTOR:NEELA SANTHOSH

TASK DESCRIPTION:
The objective of this project is to build a simple digital counter that counts the number of times a push button is pressed. The count is displayed in real-time on a 16x2 LCD module connected via I2C interface to an Arduino UNO. This project demonstrates the integration of input (push button) and output (LCD display) components with a microcontroller to build an interactive embedded system. It is suitable for beginners to understand digital input reading, debouncing, and I2C communication with displays.
WORKING PRINCIPLE:
The circuit uses a 4-pin tactile push button connected to one of the digital input pins of the Arduino. The button is configured with an internal pull-up resistor, so it reads HIGH when unpressed and LOW when pressed. The Arduino continuously monitors the button state and increments a counter each time it detects a valid press (i.e., a transition from HIGH to LOW). The updated count is then displayed on the I2C-based 16x2 LCD, which communicates with the Arduino using only two wires (SDA and SCL), reducing the need for multiple digital pins. A simple software debounce delay is implemented to ensure accurate counting by avoiding false triggers from button bounce.
