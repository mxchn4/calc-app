# Include FetchContent to download Google Test
include(FetchContent)

# Define Google Test content and fetch it
FetchContent_Declare(
  googletest
  URL [https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip](https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip) # Use a specific release version
  URL_HASH SHA256=11d7393437b0d9e89d87178a22129e9514f777174e92b3a0b5a6c1742467d93d
)
FetchContent_MakeAvailable(googletest)

# Add unit test executable
add_executable(my_cpp_project_test test.cpp)

# Link Google Test libraries to the test executable
target_link_libraries(my_cpp_project_test GTest::gtest_main)

# Add the tests to CTest
gtest_discover_tests(my_cpp_project_test)