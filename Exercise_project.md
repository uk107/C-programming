### **Exercise Project: Car Hardkey Event Handling program**

#### **Objective:**
Design and implement a C program that simulates handling different car hardkey events using the Observer and Strategy design patterns. Students will extend the basic example provided and create a modular, extendable system that can be adapted for additional hardkeys and handlers.

#### **Project Requirements:**

1. **Design Patterns Implementation:**
   - **Observer Pattern**: Use to manage and notify multiple handlers for different hardkey events.
   - **Strategy Pattern**: Use to define and manage a family of event handlers.

2. **System Overview:**
   - Implement an event system that allows registering, handling, and notifying different hardkey events.
   - Extend the system to handle more complex interactions between handlers.

#### **Project Tasks:**

1. **Define Key Identifiers:**
   - Update the `HardKey` enum to include additional hardkeys (e.g., `GPS`, `Park Assist`, `Adaptive Cruise Control`).

2. **Handler Functions:**
   - Implement new handler functions for each hardkey. For example:
     - `void handleGPS(void);`
     - `void handleParkAssist(void);`
     - `void handleAdaptiveCruiseControl(void);`

3. **Observer List Management:**
   - Implement the logic to manage the list of observers (handlers) for each key.
   - Ensure that handlers are correctly added, notified, and removed.

4. **Event Handling:**
   - Simulate handling events for different hardkeys.
   - Implement and demonstrate handling of multiple simultaneous events.

5. **Dynamic Handler Registration:**
   - Allow dynamic registration and deregistration of handlers. Create functions to:
     - Register a handler.
     - Unregister a handler.
     - Notify all registered handlers for a specific event.

6. **Command-Line Interface:**
   - Create a simple command-line interface to interact with the system. This could allow the user to:
     - Register new handlers.
     - Trigger specific hardkey events.
     - Display the status of registered handlers.

7. **Testing:**
   - Write test cases to verify the functionality of the event handling system. Ensure that all handlers are correctly invoked and that the system behaves as expected.

8. **Documentation:**
   - Provide clear documentation for the design and implementation of the system.
   - Include comments in the code to explain the purpose of different functions and structures.

#### **Example Structure:**

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_KEYS 40 // Extend as needed

typedef enum {
    IGNITION,
    HORN,
    HEADLIGHTS,
    // Add new hardkeys here
    GPS,
    PARK_ASSIST,
    ADAPTIVE_CRUISE_CONTROL
    // Add other hardkeys as needed
} HardKey;

typedef void (*Handler)(void);

typedef struct Observer {
    Handler handler;
    struct Observer* next;
} Observer;

Observer* observers[NUM_KEYS];

void registerHandler(HardKey key, Handler handler);
void unregisterHandler(HardKey key, Handler handler);
void notifyHandlers(HardKey key);
void handleKeyEvent(HardKey key);
void initialize();

void handleGPS(void);
void handleParkAssist(void);
void handleAdaptiveCruiseControl(void);
// Implement other handler functions

int main() {
    initialize();
    // Register handlers
    registerHandler(GPS, handleGPS);
    registerHandler(PARK_ASSIST, handleParkAssist);
    registerHandler(ADAPTIVE_CRUISE_CONTROL, handleAdaptiveCruiseControl);
    // Simulate key events
    handleKeyEvent(GPS);
    handleKeyEvent(PARK_ASSIST);
    handleKeyEvent(ADAPTIVE_CRUISE_CONTROL);
    // Unregister handlers and clean up
    unregisterHandler(GPS, handleGPS);
    unregisterHandler(PARK_ASSIST, handleParkAssist);
    unregisterHandler(ADAPTIVE_CRUISE_CONTROL, handleAdaptiveCruiseControl);
    return 0;
}

// Implement the rest of the functions here
```

#### **Deliverables:**
- **Source Code**: Complete C code implementing the system.
- **Documentation**: Explanation of the design, implementation details, and usage instructions.
- **Testing Report**: Results and observations from testing the system.

#### **Evaluation Criteria:**
- Correct implementation of the Observer and Strategy patterns.
- Proper handling of dynamic registration and notification of handlers.
- Functionality of the command-line interface.
- Code quality, including modularity, readability, and documentation.

---

### Enum List for Car Hardkey Events

```c
typedef enum {
    IGNITION,            // Start/Stop engine
    HORN,                // Activate horn
    HEADLIGHTS,          // Toggle headlights
    TURN_SIGNALS,        // Activate turn signals
    WINDSHIELD_WIPERS,   // Operate windshield wipers
    HAZARD_LIGHTS,       // Toggle hazard lights
    CRUISE_CONTROL,      // Enable/Disable cruise control
    RADIO_VOLUME,        // Adjust radio volume
    RADIO_TUNING,        // Change radio station or track
    RADIO_SOURCE,        // Switch radio source (AM/FM/Bluetooth/etc.)
    CLIMATE_TEMP,        // Adjust climate control temperature
    CLIMATE_FAN,         // Adjust climate control fan speed
    CLIMATE_AIRFLOW,     // Set climate control airflow direction
    DEFROST,             // Activate defrost
    POWER_WINDOWS,       // Operate power windows
    WINDOW_LOCK,         // Lock/unlock power windows
    DOOR_LOCKS,          // Lock/unlock doors
    MIRROR_ADJUST,       // Adjust side mirrors
    SEAT_ADJUST,         // Adjust seat position and lumbar support
    SUNROOF_CONTROL,     // Open/close sunroof
    TRUNK_RELEASE,       // Release trunk
    FUEL_CAP_RELEASE,    // Release fuel cap
    PARKING_BRAKE,       // Engage/disengage parking brake
    DRIVE_MODE,          // Change drive mode (e.g., Eco, Sport)
    TRACTION_CONTROL,    // Enable/Disable traction control
    HEATED_SEATS,        // Activate heated seats
    COOLED_SEATS,        // Activate cooled seats
    STEERING_ADJUST,     // Adjust steering wheel position
    INTERIOR_LIGHT,      // Control interior lighting
    REAR_DEFROST,        // Activate rear window defrost
    CHILD_LOCK,          // Engage/disengage child lock
    MUTE_BUTTON,         // Mute/unmute audio
    VOICE_COMMAND,       // Activate voice command system
    PHONE_ANSWER,        // Answer incoming phone call
    PHONE_END_CALL,      // End phone call
    NAVIGATION,          // Activate navigation system
    LANE_ASSIST,         // Enable/Disable lane assist
    PARKING_ASSIST,      // Enable/Disable parking assist
    HILL_DESCENT,        // Enable/Disable hill descent control
    HUD_ADJUST,          // Adjust head-up display
    GLOVE_BOX_RELEASE,   // Open glove box
    FOG_LIGHTS,          // Toggle fog lights
    EMERGENCY_BRAKE,     // Activate emergency braking
    TRAILER_CONTROL,     // Control trailer (if equipped)
    AUTO_HOLD,           // Enable/Disable auto hold feature
    HANDS_FREE,          // Activate hands-free mode
    SEAT_HEATER,         // Activate seat heater (individual seat)
    SEAT_COOLER          // Activate seat cooler (individual seat)
} HardKey;
```

### Explanation:
1. **Ignition**: Start or stop the engine.
2. **Horn**: Activate the horn.
3. **Headlights**: Control the headlights.
4. **Turn Signals**: Activate turn signals for lane changes.
5. **Windshield Wipers**: Operate the windshield wipers.
6. **Hazard Lights**: Toggle hazard lights on/off.
7. **Cruise Control**: Enable or disable cruise control.
8. **Radio Volume**: Adjust the volume of the radio.
9. **Radio Tuning**: Change the radio station or track.
10. **Radio Source**: Switch between different audio sources.
11. **Climate Temp**: Adjust the temperature of the climate control system.
12. **Climate Fan**: Adjust the fan speed for climate control.
13. **Climate Airflow**: Set the direction of airflow (e.g., face, feet).
14. **Defrost**: Activate the defrost function for the windshield.
15. **Power Windows**: Operate power windows up or down.
16. **Window Lock**: Lock or unlock the power windows.
17. **Door Locks**: Lock or unlock the doors.
18. **Mirror Adjust**: Adjust the side mirrors.
19. **Seat Adjust**: Adjust the seat position and lumbar support.
20. **Sunroof Control**: Open or close the sunroof.
21. **Trunk Release**: Release the trunk.
22. **Fuel Cap Release**: Release the fuel cap.
23. **Parking Brake**: Engage or disengage the parking brake.
24. **Drive Mode**: Change the drive mode (e.g., Eco, Sport).
25. **Traction Control**: Enable or disable traction control.
26. **Heated Seats**: Activate heated seats.
27. **Cooled Seats**: Activate cooled seats.
28. **Steering Adjust**: Adjust the steering wheel position.
29. **Interior Light**: Control the interior lighting.
30. **Rear Defrost**: Activate the rear window defrost.
31. **Child Lock**: Engage or disengage the child lock.
32. **Mute Button**: Mute or unmute the audio system.
33. **Voice Command**: Activate the voice command system.
34. **Phone Answer**: Answer an incoming phone call.
35. **Phone End Call**: End an ongoing phone call.
36. **Navigation**: Activate the navigation system.
37. **Lane Assist**: Enable or disable lane assist.
38. **Parking Assist**: Enable or disable parking assist.
39. **Hill Descent**: Enable or disable hill descent control.
40. **HUD Adjust**: Adjust the head-up display settings.
41. **Glove Box Release**: Open the glove box.
42. **Fog Lights**: Toggle the fog lights.
43. **Emergency Brake**: Activate the emergency braking system.
44. **Trailer Control**: Control the trailer (if equipped).
45. **Auto Hold**: Enable or disable the auto hold feature.
46. **Hands-Free**: Activate hands-free mode.
47. **Seat Heater**: Activate the heater for individual seats.
48. **Seat Cooler**: Activate the cooler for individual seats.

This extended enum list includes various features that can be found in modern vehicles.

---

### Functional Requirements for Each Hardkey

#### 1. **IGNITION**
   - **Data Required:** 
     - Ignition state (On/Off)
   - **Description:**
     - Toggle the ignition state to start or stop the engine.
     - Ensure safety checks are performed before starting the engine.

#### 2. **HORN**
   - **Data Required:** None
   - **Description:**
     - Activate the horn to alert other drivers or pedestrians.

#### 3. **HEADLIGHTS**
   - **Data Required:** 
     - Headlight state (Off/Low/High)
   - **Description:**
     - Toggle between off, low beam, and high beam headlights.

#### 4. **TURN_SIGNALS**
   - **Data Required:** 
     - Direction (Left/Right)
   - **Description:**
     - Activate the left or right turn signal.

#### 5. **WINDSHIELD_WIPERS**
   - **Data Required:** 
     - Wiper speed (Off/Low/High)
   - **Description:**
     - Control the windshield wipers’ speed.

#### 6. **HAZARD_LIGHTS**
   - **Data Required:** None
   - **Description:**
     - Toggle the hazard lights on or off.

#### 7. **CRUISE_CONTROL**
   - **Data Required:** 
     - Cruise control state (On/Off)
     - Speed setting
   - **Description:**
     - Enable or disable cruise control and set the desired speed.

#### 8. **RADIO_VOLUME**
   - **Data Required:** 
     - Volume level (0-100)
   - **Description:**
     - Adjust the radio volume to the specified level.

#### 9. **RADIO_TUNING**
   - **Data Required:** 
     - Radio station frequency
   - **Description:**
     - Change the radio station to the specified frequency.

#### 10. **RADIO_SOURCE**
   - **Data Required:** 
     - Source type (AM/FM/Bluetooth/etc.)
   - **Description:**
     - Switch the audio source.

#### 11. **CLIMATE_TEMP**
   - **Data Required:** 
     - Desired temperature
   - **Description:**
     - Adjust the climate control temperature to the specified setting.

#### 12. **CLIMATE_FAN**
   - **Data Required:** 
     - Fan speed level (0-5)
   - **Description:**
     - Adjust the climate control fan speed.

#### 13. **CLIMATE_AIRFLOW**
   - **Data Required:** 
     - Airflow direction (Face/Feet/Defrost/etc.)
   - **Description:**
     - Set the climate control airflow direction.

#### 14. **DEFROST**
   - **Data Required:** None
   - **Description:**
     - Activate the windshield defrost.

#### 15. **POWER_WINDOWS**
   - **Data Required:** 
     - Window identifier (FrontLeft/FrontRight/RearLeft/RearRight)
     - Action (Up/Down)
   - **Description:**
     - Control the specified power window.

#### 16. **WINDOW_LOCK**
   - **Data Required:** 
     - Lock state (Lock/Unlock)
   - **Description:**
     - Lock or unlock the power windows.

#### 17. **DOOR_LOCKS**
   - **Data Required:** 
     - Lock state (Lock/Unlock)
   - **Description:**
     - Lock or unlock the car doors.

#### 18. **MIRROR_ADJUST**
   - **Data Required:** 
     - Mirror identifier (Left/Right)
     - Adjustment direction (Up/Down/Left/Right)
   - **Description:**
     - Adjust the specified side mirror.

#### 19. **SEAT_ADJUST**
   - **Data Required:** 
     - Seat identifier (Driver/Passenger)
     - Adjustment type (Position/Recline/Lumbar)
   - **Description:**
     - Adjust the specified seat’s position, recline, or lumbar support.

#### 20. **SUNROOF_CONTROL**
   - **Data Required:** 
     - Action (Open/Close/Tilt)
   - **Description:**
     - Control the sunroof’s state.

#### 21. **TRUNK_RELEASE**
   - **Data Required:** None
   - **Description:**
     - Release the trunk latch.

#### 22. **FUEL_CAP_RELEASE**
   - **Data Required:** None
   - **Description:**
     - Release the fuel cap latch.

#### 23. **PARKING_BRAKE**
   - **Data Required:** 
     - Brake state (Engage/Disengage)
   - **Description:**
     - Engage or disengage the parking brake.

#### 24. **DRIVE_MODE**
   - **Data Required:** 
     - Drive mode (Eco/Sport/Normal)
   - **Description:**
     - Change the vehicle’s drive mode.

#### 25. **TRACTION_CONTROL**
   - **Data Required:** 
     - Control state (On/Off)
   - **Description:**
     - Enable or disable traction control.

#### 26. **HEATED_SEATS**
   - **Data Required:** 
     - Seat identifier (Driver/Passenger)
     - Heat level (0-3)
   - **Description:**
     - Activate and set the level of heated seats.

#### 27. **COOLED_SEATS**
   - **Data Required:** 
     - Seat identifier (Driver/Passenger)
     - Cooling level (0-3)
   - **Description:**
     - Activate and set the level of cooled seats.

#### 28. **STEERING_ADJUST**
   - **Data Required:** 
     - Adjustment direction (Up/Down/In/Out)
   - **Description:**
     - Adjust the steering wheel position.

#### 29. **INTERIOR_LIGHT**
   - **Data Required:** 
     - Light state (On/Off)
   - **Description:**
     - Control the interior lighting.

#### 30. **REAR_DEFROST**
   - **Data Required:** 
     - Defrost state (On/Off)
   - **Description:**
     - Activate the rear window defrost.

#### 31. **CHILD_LOCK**
   - **Data Required:** 
     - Lock state (Engage/Disengage)
   - **Description:**
     - Engage or disengage the child lock.

#### 32. **MUTE_BUTTON**
   - **Data Required:** None
   - **Description:**
     - Mute or unmute the audio system.

#### 33. **VOICE_COMMAND**
   - **Data Required:** None
   - **Description:**
     - Activate the voice command system.

#### 34. **PHONE_ANSWER**
   - **Data Required:** None
   - **Description:**
     - Answer an incoming phone call.

#### 35. **PHONE_END_CALL**
   - **Data Required:** None
   - **Description:**
     - End the ongoing phone call.

#### 36. **NAVIGATION**
   - **Data Required:** 
     - Destination coordinates
   - **Description:**


     - Activate the navigation system and set a destination.

#### 37. **LANE_ASSIST**
   - **Data Required:** 
     - Assist state (On/Off)
   - **Description:**
     - Enable or disable lane assist.

#### 38. **PARKING_ASSIST**
   - **Data Required:** 
     - Assist state (On/Off)
   - **Description:**
     - Enable or disable parking assist.

#### 39. **HILL_DESCENT**
   - **Data Required:** 
     - Control state (On/Off)
   - **Description:**
     - Enable or disable hill descent control.

#### 40. **HUD_ADJUST**
   - **Data Required:** 
     - Display setting
   - **Description:**
     - Adjust the head-up display settings.

#### 41. **GLOVE_BOX_RELEASE**
   - **Data Required:** None
   - **Description:**
     - Release the glove box latch.

#### 42. **FOG_LIGHTS**
   - **Data Required:** 
     - Light state (On/Off)
   - **Description:**
     - Toggle the fog lights.

#### 43. **EMERGENCY_BRAKE**
   - **Data Required:** None
   - **Description:**
     - Activate the emergency braking system.

#### 44. **TRAILER_CONTROL**
   - **Data Required:** 
     - Control setting
   - **Description:**
     - Control the trailer if the vehicle is equipped with towing capabilities.

#### 45. **AUTO_HOLD**
   - **Data Required:** 
     - Hold state (On/Off)
   - **Description:**
     - Enable or disable the auto hold feature.

#### 46. **HANDS_FREE**
   - **Data Required:** None
   - **Description:**
     - Activate the hands-free system for phone calls.

#### 47. **SEAT_HEATER**
   - **Data Required:** 
     - Seat identifier (Driver/Passenger)
     - Heat level (0-3)
   - **Description:**
     - Activate and set the level of the seat heater for the specified seat.

#### 48. **SEAT_COOLER**
   - **Data Required:** 
     - Seat identifier (Driver/Passenger)
     - Cooling level (0-3)
   - **Description:**
     - Activate and set the level of the seat cooler for the specified seat.
