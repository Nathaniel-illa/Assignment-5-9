#include <iostream>

int main() {
    int previous_value, current_value;
    bool first_input = true;
    
    // Read the first input value
    while (std::cin >> current_value) {
        if (first_input) {
            // For the first input, we don't have a previous value to compare with
            std::cout << current_value;
            previous_value = current_value;
            first_input = false;
        } else {
            if (current_value > previous_value) {
                // If current value is greater than previous value, print a newline and stop
                std::cout << std::endl;
                break;
            } else {
                // If current value is less than or equal to previous value, print without newline
                std::cout << " " << current_value;
                previous_value = current_value;
            }
        }
    }

    return 0;
}