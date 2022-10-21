// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 21, 2022
// This program asks for a year
// and tells the user if the year
// is a leap year or not

#include <iostream>
#include <cmath>
#include <string>

int main() {
    // Declaring variables
    int userYear;
    std::string userYearString;

    // Introductory paragraph
    std::cout << "This program asks for a year\n";
    std::cout << "and tells the user if the year\n";
    std::cout << "is a leap year or not\n";
    std::cout << "\n";

    // Input
    // Getting userYearString
    std::cout << "Enter a year: ";
    std::cin >> userYearString;

    // Process
    // Checking that userYearString is an integer
    try {
        userYear = std::stoi(userYearString);
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number. ";
        std::cout << userYear;
        std::cout << " is not valid.\n";
    }

    // Checking if userYear is a leap year
    if (userYear % 4 == 0) {
        if (userYear % 100 == 0) {
            if (userYear % 400 == 0) {
                std::cout << userYear;
                std::cout << " is a leap year!";
            } else {
                std::cout << userYear;
                std::cout << " is not a leap year.";
            }
        } else {
            std::cout << userYear;
            std::cout << " is a leap year!";
        }
    } else {
        std::cout << userYear;
        std::cout << " is not a leap year.";
    }
}
