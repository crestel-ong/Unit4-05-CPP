// Copyright (c) Crestel Ong All rights reserved
//
// Created by: Crestel
// Created on: October 2021
// This adding with a loop program

#include <iostream>
#include <string>

int main() {
    // declaring
    std::string numberOfLoopsAsString;
    std::string addedNumberAsString;
    int whileLoop = 0;
    int total = 0;
    int numberOfLoops;
    int addedNumber;

    // the first line: how many #s do you want to add aka how many loops
    std::cout << "How many numbers do you want to add: ";
    std::cin >> numberOfLoopsAsString;

    try {
        // convert # of loops wanted to integer
        numberOfLoops = std::stoi(numberOfLoopsAsString);

        while (whileLoop < numberOfLoops) {
            std::cout << "Enter a number to add: ";
            std::cin >> addedNumberAsString;
            addedNumber = std::stoi(addedNumberAsString);

            try {
                if (addedNumber < 0) {
                    whileLoop = whileLoop + 1;
                    continue;
                } else {
                    whileLoop = whileLoop + 1;
                    total = total + addedNumber;
                }
                if (whileLoop == numberOfLoops) {
                    std::cout << "The sum of all the positive numbers is = "
                    << total << "." << std::fixed << std::endl;
                }
        } catch (std::invalid_argument) {
            std::cout <<  "Invalid input." << std::endl;
        }
        }
    } catch (std::invalid_argument) {
            std::cout <<  "Invalid input." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
