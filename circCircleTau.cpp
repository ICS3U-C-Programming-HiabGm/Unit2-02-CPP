// Created by: Hiab G
// Date: Wed, Feb. 28th
// This program asks the user for the radius and then calculates the circumference of a circle using tau.
import constants
#include <iostream>

int main() {
// Declare the constant
const float TAU = 6.28;

// Declare a variable
float radius, circumference;

// Get the radius from the user
std::cout << "Enter the radius (mm): ";
std::cin >> radius;

// Calculate the circumference using TAU
circumference = TAU * radius;

// Display the circumference
std::cout << "\nCircumference = " << circumference << " mm" << std::endl;

return 0;
}