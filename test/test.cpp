#include "gtest/gtest.h"

// Include the function from main.cpp that we want to test.
// In a real project, you would include a header file for the function.
// For this example, we'll directly define the function here or assume it's
// accessible from the main.cpp's compilation unit (less common for separate tests).
// For simplicity, let's redefine the 'add' function here or assume it's exposed
// via a header in a real project.
// For this example, we will just include the function from main.cpp directly.
// In a real scenario, you would have a header file (e.g., "my_library.h")
// that declares the 'add' function, and you would include that header here.
// For demonstration, let's just re-declare it or ensure it's linked.
// Let's assume `add` is in a header file called `calculator.h` for better practice.
// Since we don't have a separate header, we'll manually declare it or rely on
// the linker finding it if main.cpp is compiled into a library and linked.
// For the simplest Google Test setup without complex linking, let's define 'add' here
// or explicitly include main.cpp if we must. The better way is to move 'add' to a header.

// Let's create a simple function to test, directly in this file for simplicity.
// In a real project, this would be in a separate .h/.cpp pair.
int add(int a, int b) {
    return a + b;
}

// Test case for the add function
TEST(AdditionTest, BasicAssertions) {
    // Expect two integers to be equal.
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(10, -5), 5);
}

// Another test case
TEST(AdditionTest, LargeNumbers) {
    EXPECT_EQ(add(1000, 2000), 3000);
    EXPECT_EQ(add(-1000, -2000), -3000);
}