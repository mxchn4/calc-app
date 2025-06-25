# Find Google Test. Google Test will be downloaded if not found.
find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

# Add the source directory (to be able to include main.cpp functions if needed)
# Note: For simple unit tests, you might just include the headers directly.
# For this example, we'll expose the add function by including its definition in test.cpp
# which is why we don't link src here.

# Add unit test executable
add_executable(calc_app_test test.cpp)

# Link Google Test libraries to the test executable
target_link_libraries(calc_app_test GTest::gtest_main)

# Add the tests to CTest
gtest_discover_tests(my_cpp_project_test)