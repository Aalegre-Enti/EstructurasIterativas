// e20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int number;           // stores each number entered
    int maxNumber;        // largest number so far
    int minNumber;        // smallest number so far
    bool first = true;    // to detect if it's the first number
    char option = 'y';    // controls if the user wants to continue

    std::cout << "This program shows the largest and smallest number entered so far." << std::endl;

    while (option == 'y' || option == 'Y') {
        std::cout << "Enter a number: ";
        std::cin >> number;

        if (first) {
            // the first number is both the largest and the smallest
            maxNumber = number;
            minNumber = number;
            first = false;
        }
        else {
            if (number > maxNumber) {
                maxNumber = number;
            }
            if (number < minNumber) {
                minNumber = number;
            }
        }

        std::cout << "So far, the largest is: " << maxNumber
            << " and the smallest is: " << minNumber << std::endl;

        std::cout << "Do you want to enter another number? (y/n): ";
        std::cin >> option;
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
