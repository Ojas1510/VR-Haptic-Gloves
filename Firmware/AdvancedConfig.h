#define LOOP_TIME 4
#define CALIBRATION_LOOPS -1

#define COMM_SERIAL 0   
#define COMM_BTSERIAL 1 

#define ENCODING 1
#define ENCODE_LEGACY 0
#define ENCODE_ALPHA  1

#define PINKY_IND 4
#define RING_IND 3
#define MIDDLE_IND 2
#define INDEX_IND 1
#define THUMB_IND 0

#if defined(__AVR__)
#define ANALOG_MAX 1023
#elif defined(ESP32)
#define ANALOG_MAX 4095 
#endif

//#define ANALOG_MAX 4095 

#ifndef ANALOG_MAX
#error "This board doesn't have an auto ANALOG_MAX assignment, please set it manually by uncommenting ANALOG_MAX OVERRIDE!"
#endif

#define CLAMP_ANALOG_MAP true

#define CLAMP_FLEXION false
#define CLAMP_MIN 0
#define CLAMP_MAX ANALOG_MAX

#define ENABLE_MEDIAN_FILTER false
#define MEDIAN_SAMPLES 20
