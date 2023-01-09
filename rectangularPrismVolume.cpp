// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Nov 2022
// This program calculates the volume of a rectangular prism

#include <iostream>
#include <iomanip>
#include <string>

float Volume(float length, float width, float height) {
    float volumeRectangularPrism;

    // process
    volumeRectangularPrism = length * width * height;

    return volumeRectangularPrism;
    }

int main() {
    std::string stringLength;
    std::string stringWidth;
    std::string stringHeight;
    float volumeRectangularPrism;
    float length;
    float width;
    float height;

    // input

    std::cout << "Enter the length of the rectangular prism (cm): ";
    std::cin >> stringLength;
    std::cout << "Enter the width of the rectangular prism (cm): ";
    std::cin >> stringWidth;
    std::cout << "Enter the height of the rectangular prism (cm): ";
    std::cin >> stringHeight;

    // process and output
    try {
        length = std::stoi(stringLength);
        width = std::stoi(stringWidth);
        height = std::stoi(stringHeight);
        // call functions
        volumeRectangularPrism = Volume(length, width, height);

        std::cout << std::endl;
        std::cout << "The volume of the rectangular prism is: ";
        std::cout << volumeRectangularPrism << std::setprecision(2) << " cm³.";
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid input.";
    }

    std::cout << "\nDone." << std::endl;
}
