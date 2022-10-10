// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Date: Oct 10, 2022
// Number guessing program, this random numbers being generated.


#include <iostream>
#include <random>

int main() {
    // Initializing variables
    int guessGenerated, guessAnswer;

    // Generating a number from 0-9
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    guessGenerated = idist(rgen);

    // Requesting the user's guess
    std::cout << "The secret number is within the range of 0-9 \n";
    std::cout << "Enter your guess: ";
    std::cin >> guessAnswer;
    std::cout << "\n";

    // If the user guessed correctly:
    if (guessGenerated == guessAnswer) {
        std::cout << "You guessed correctly!";

        // If the user guessed incorrectly:
    } else {
        std::cout << "You guessed incorrectly. ";
        std::cout << guessGenerated << " was the correct number. \n";
    }
}
