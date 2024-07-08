#include <iostream>

int main() {
    // Read the current year as input
    int current_year;
    std::cout << "Enter the current year: ";
    std::cin >> current_year;

    // Form the latest phone model
    std::cout << "The latest phone model launched by Kitchen Telecom is: K";

    // Handle the edge case of the year 2000
    if (current_year == 2000) {
        std::cout << "00";
    } else {
        // Determine the last two digits of the current year
        int last_two_digits = current_year % 100;

        // Add leading zero if necessary
        if (last_two_digits < 10) {
            std::cout << "0";
        }

        std::cout << last_two_digits;
    }

    std::cout << std::endl;

    return 0;
}
