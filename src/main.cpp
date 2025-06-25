#include <iostream>

// Function to be tested
int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hello, CMake C++ Project!" << std::endl;
    std::cout << "2 + 3 = " << add(2, 3) << std::endl;
    return 0;
}