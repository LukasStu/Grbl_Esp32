#pragma once
// clang-format off

/*
        robot2eggbot.h
        Part of Grbl_ESP32

        Machine profile for converting the Kidbuild Balancing Robot
        wiring to the Bluino Eggbot wiring defined in Robot2Eggbot/plan.md.
*/

#define MACHINE_NAME "ROBOT2EGGBOT"

// Motor GPIO mapping from conversion plan
#define X_STEP_PIN              GPIO_NUM_14
#define X_DIRECTION_PIN         GPIO_NUM_25

#define Y_STEP_PIN              GPIO_NUM_12
#define Y_DIRECTION_PIN         GPIO_NUM_26

// Keep stepper enable on a dedicated pin
#define STEPPERS_DISABLE_PIN    GPIO_NUM_13

// Endstops (same defaults as pen_laser profile)
#define X_LIMIT_PIN             GPIO_NUM_15
#define Y_LIMIT_PIN             GPIO_NUM_4

// Pen servo GPIO mapping from conversion plan
#define USING_SERVO
#ifdef USING_SERVO
    #define Z_SERVO_PIN         GPIO_NUM_27
#endif

// SPI pin remap for Micro SD (from conversion plan)
#define GRBL_SPI_SCK            GPIO_NUM_22
#define GRBL_SPI_MISO           GPIO_NUM_19
#define GRBL_SPI_MOSI           GPIO_NUM_21
#define GRBL_SPI_SS             GPIO_NUM_33

#define SPINDLE_TYPE SpindleType::NONE

// defaults
#define DEFAULT_STEP_PULSE_MICROSECONDS 3
#define DEFAULT_STEPPER_IDLE_LOCK_TIME 250 // stay on

#define DEFAULT_STEPPING_INVERT_MASK 0 // uint8_t
#define DEFAULT_DIRECTION_INVERT_MASK 0 // uint8_t
#define DEFAULT_INVERT_ST_ENABLE 0 // boolean
#define DEFAULT_INVERT_LIMIT_PINS 1 // boolean
#define DEFAULT_INVERT_PROBE_PIN 0 // boolean

#define DEFAULT_STATUS_REPORT_MASK 1

#define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
#define DEFAULT_ARC_TOLERANCE 0.002 // mm
#define DEFAULT_REPORT_INCHES 0 // false

#define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
#define DEFAULT_HARD_LIMIT_ENABLE 0  // false

#define DEFAULT_HOMING_ENABLE 0
#define DEFAULT_HOMING_DIR_MASK 0 // move positive dir Z, negative X,Y
#define DEFAULT_HOMING_FEED_RATE 200.0 // mm/min
#define DEFAULT_HOMING_SEEK_RATE 1000.0 // mm/min
#define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
#define DEFAULT_HOMING_PULLOFF 3.0 // mm

#define DEFAULT_SPINDLE_RPM_MAX 1000.0 // rpm
#define DEFAULT_SPINDLE_RPM_MIN 0.0 // rpm

#define DEFAULT_LASER_MODE 0 // false

#define DEFAULT_X_STEPS_PER_MM 80.0
#define DEFAULT_Y_STEPS_PER_MM 80.0
#define DEFAULT_Z_STEPS_PER_MM 100.0 // percent in servo mode; used for calibration

#define DEFAULT_X_MAX_RATE 5000.0 // mm/min
#define DEFAULT_Y_MAX_RATE 5000.0 // mm/min
#define DEFAULT_Z_MAX_RATE 5000.0 // mm/min

#define DEFAULT_X_ACCELERATION 50.0 // mm/sec^2
#define DEFAULT_Y_ACCELERATION 50.0 // mm/sec^2
#define DEFAULT_Z_ACCELERATION 50.0 // mm/sec^2

#define DEFAULT_X_MAX_TRAVEL 300.0 // mm
#define DEFAULT_Y_MAX_TRAVEL 300.0 // mm
#define DEFAULT_Z_MAX_TRAVEL 100.0 // percent in servo mode; used for calibration
