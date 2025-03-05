// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: Mar 5th, 2025
// This program asks the user for the diameter of the
// pizza.It then calculates and displays the total cost
// of the pizza with tax.
#include <iomanip>
#include <iostream>
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.50;
const float HST = 0.13;

int main() {
    float diameter, finalCost;
    // Input
    std::cout << "Enter the diameter of the pizza (inches):";
    std::cin >> diameter;
    // Process
    float subtotal = LABOUR_COST + RENTAL_COST +
                     INGRED_COST * diameter;
    float tax = subtotal * HST;
    finalCost = subtotal + tax;

    // Output
    std::cout << std::fixed <<
    std::setprecision(2) <<
    std::setfill('0') << finalCost << "\n";
}
