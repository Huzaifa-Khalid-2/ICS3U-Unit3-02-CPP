// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huzaifa Khalid
// Created on: March 2022
// This function takes a random integer between 0-9
// and tells the user if they guessed corretly

#include <iostream>

int main() {
    // This function takes a random integer between 0-9
    // and tells the user if they guessed corretly
    const int HIDDEN_NUMBER = 5;
    int user_guess;

    // input
    std::cout << "Enter a random number between 0-9 (integer): ";
    std::cin >> user_guess;
    std::cout << "" << std::endl;

    // process
    if (user_guess == 5) {
    // output
    std::cout << "Hooray you guessed correctly !! :)" << std::endl;
}
    // process
    if (user_guess != 5) {
    // output
    std::cout << "Oh No!!! you guessed incorrectly :(" << std::endl;
}
    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
