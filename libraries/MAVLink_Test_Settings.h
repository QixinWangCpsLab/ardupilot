// Description: This file is used to enable and disable tests in the ArduCopter,GCS_MAVLINK code.

// Test: Enable and disable tests in the ArduCopter,GCS_MAVLINK code. (This should always be ENABLED)
#define TEST 1


// Test1: RPI requests data from the Pixhawk.
// #define TEST1 DISABLED

// Test2: Pixhawk sends the data to the RPI.
// #define TEST2 DISABLED

// Test3: Pixhawk requests data from the RPI, and RPI replies.
// #define TEST3 DISABLED

// Test4: RPI sends data to the Pixhawk.
// #define TEST4 DISABLED

// Test5: GCS requests data from the Pixhawk.
// #define TEST5 DISABLED

// Test6: Pixhawk sends data to the GCS.
// #define TEST6 DISABLED

// Test7: Pixhawk requests data from the GCS, and GCS replies.
// #define TEST7 DISABLED

// Test8: GCS sends data to the Pixhawk.
// #define TEST8 DISABLED

// Test -1: To test other mavlink messages
// #define TEST-1 DISABLED