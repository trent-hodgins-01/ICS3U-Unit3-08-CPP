// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/27/2021
// This is a Leap Year program
// The user enters in the year
// The program tells the user if it's a leap year

#include <iostream>

int main() {
    // this function checks to see if the year is a leap year
    std::string year_string;
    int year_as_int;

    // input
    std::cout << "Enter in the year: ";
    std::cin >> year_string;
    std::cout << "" << std::endl;

    // process and output
    try {
        // convert string to int
        year_as_int = std::stoi(year_string);

        if (year_as_int % 4 == 0) {
            if (year_as_int % 100 == 0) {
                if (year_as_int % 400 == 0) {
                    std::cout << year_string;
                    std::cout << " is a leap year" << std::endl;
                } else {
                    std::cout << year_string;
                    std::cout << " is a common year" << std::endl;
                }
            } else {
                std::cout << year_string;
                std::cout << " is a leap year" << std::endl;
            }
        } else {
            std::cout << year_string;
            std::cout << " is a common year" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "You didn’t enter in a integer" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
