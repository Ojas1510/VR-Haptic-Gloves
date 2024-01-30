
#include "AdvancedConfig.h"

//CONFIGURATION SETTINGS:
#define COMMUNICATION COMM_SERIAL //Which communication protocol to use
//serial over USB
  #define SERIAL_BAUD_RATE 115200
  
//serial over Bluetooth
  #define BTSERIAL_DEVICE_NAME "lucidgloves-left"

//ANALOG INPUT CONFIG
#define FLIP_POTS  true  //Flip values from potentiometers (for fingers!) if they are backwards

#define TRIGGER_GESTURE true
#define GRAB_GESTURE    true
#define PINCH_GESTURE   true



#define INVERT_A false
#define INVERT_B false
#define INVERT_JOY false
#define INVERT_MENU false
#define INVERT_CALIB false

//These only apply with gesture button override:
#define INVERT_TRIGGER false
#define INVERT_GRAB false
#define INVERT_PINCH false


//joystick configuration
#define JOYSTICK_BLANK true 
#define JOY_FLIP_X false
#define JOY_FLIP_Y false
#define JOYSTICK_DEADZONE 10 

#define NO_THUMB false //If for some reason you don't want to track the thumb

#define USING_CALIB_PIN true //When PIN_CALIB is shorted (or it's button pushed) it will reset calibration if this is on.

#define USING_FORCE_FEEDBACK true //Force feedback haptics allow you to feel the solid objects you hold
#define SERVO_SCALING true //dynamic scaling of servo motors

# define ESP32
  #define PIN_PINKY     34                                                                                                                                                                                                                                                                                                                   
  #define PIN_RING      35
  #define PIN_MIDDLE    32
  #define PIN_INDEX     33
  #define PIN_THUMB     30
  #define PIN_JOY_X     33
  #define PIN_JOY_Y     97 
  #define PIN_JOY_BTN   26
  #define PIN_A_BTN     27 
  #define PIN_B_BTN     14
  #define PIN_TRIG_BTN  12 //unused if gesture set
  #define PIN_GRAB_BTN  13 //unused if gesture set
  #define PIN_PNCH_BTN  23 //unused if gesture set
  #define PIN_CALIB     12 //button for recalibration (You can set this to GPIO0 to use the BOOT button, but only when using Bluetooth.)
  #define DEBUG_LED 2
  #define PIN_PINKY_MOTOR     5  //used for force feedback
  #define PIN_RING_MOTOR      18 //^
  #define PIN_MIDDLE_MOTOR    19 //^
  #define PIN_INDEX_MOTOR     21 //^
  #define PIN_THUMB_MOTOR     15 //^
  #define PIN_MENU_BTN        27
  