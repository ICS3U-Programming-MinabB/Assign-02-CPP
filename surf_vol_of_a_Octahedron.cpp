// Copyright (c) 2022 Minab Berhane All rights reserved
//
// Created by: Minab Berhane
// Created on: Oct 5, 2022
// This program is used to calculate the surface area and volume of a Octahedron
#include <cmath>
#include <iomanip>
#include <iostream>
// declare variable
float surfaceArea, volume, userChoice, userUnit, userInput;

int main() {
    // get input from user
    std::cout << "Hello user, welcome to virtual calculator \n";
    std::cout << "We will be calculating the surface area and volume of an Octahedron \n";
    std::string units;
    std::cout << "Enter units: ";
    std::cin >> units;
    std::cout << "Please input the length of the side: ";
    std::cin >> userInput;
    std::cout << "Please input 1 if you would like to find area, 2 for volume and 3 for both: ";
    std::cin >> userChoice;

    if (userChoice == 1) {
        surfaceArea = 2 * sqrt(3) * pow(userInput, 2);
        std::cout << std::endl;
        std::cout << "\033[1;32;38mSurface Area = " << std::fixed;
        std::cout << std::setprecision(2) << surfaceArea << units << " ^2.\n";
    } else if (userChoice == 2) {
        volume = sqrt(2) / 3 * pow(userInput, 3);
        std::cout << std::endl;
        std::cout << "\033[0;32;38mVolume = " << std::fixed;
        std::cout << std::setprecision(2) << volume << units << "^3.\n";
    } else if (userChoice == 3) {
        surfaceArea = 2 * sqrt(3) * pow(userInput, 2);
        volume = sqrt(2) / 3 * pow(userInput, 3);
        // display the results to the user
        std::cout << std::endl;
        std::cout << "\033[1;32;38mSurface Area = " << std::fixed;
        std::cout << std::setprecision(2) << surfaceArea << units << " ^2.\n";
        std::cout << "\033[1;32;38mVolume = " << std::fixed;
        std::cout << std::setprecision(2) << volume << units << "^3.\n";
    } else {
        std::cout << "Sorry" << userChoice << " is not an option try again";
    }
}