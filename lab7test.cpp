#include <iostream>
#include <cassert>

// A simple function to test
int add(int a, int b) {
    return a + b;
}

// A simple boolean function to test
bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    std::cout << "=============================" << std::endl;
    std::cout << "Running C++ Test Program..." << std::endl;
    std::cout << "=============================" << std::endl;

    // Test Case 1: Verify the add function
    std::cout << "Test 1: Checking add(5, 7)... ";
    if (add(5, 7) == 12) {
        std::cout << "PASSED" << std::endl;
    } else {
        std::cout << "FAILED" << std::endl;
    }

    // Test Case 2: Verify the isEven function with an even number
    std::cout << "Test 2: Checking isEven(4)... ";
    if (isEven(4) == true) {
        std::cout << "PASSED" << std::endl;
    } else {
        std::cout << "FAILED" << std::endl;
    }

    // Test Case 3: Verify the isEven function with an odd number
    std::cout << "Test 3: Checking isEven(7)... ";
    if (isEven(7) == false) {
        std::cout << "PASSED" << std::endl;
    } else {
        std::cout << "FAILED" << std::endl;
    }

    // Optional: Using strict assertions (will crash the program if it fails)
    assert(add(10, 20) == 30);
    assert(isEven(0) == true);

    std::cout << "=============================" << std::endl;
    std::cout << "All built-in tests completed!" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "=======A new change has been made======================" << std::endl;
    // I have added this line as a meaningful change
    return 0;
}
