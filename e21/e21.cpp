// e21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int number;             // current number entered
    int totalCount = 0;     // how many numbers have been entered so far
    int maxOdd = 0;         // largest odd number found
    int posMaxOdd = 0;      // 1-based position where the largest odd first appeared
    bool hasOdd = false;    // whether any odd number has been entered
    char option = 'y';      // continue? (y/n)

    std::cout << "Enter numbers. After each one, choose to continue or exit." << std::endl;

    while (option == 'y' || option == 'Y') {
        std::cout << "Enter a number: ";
        std::cin >> number;

        totalCount = totalCount + 1;  // count every number (even or odd)

        // If it's odd, check if it's the new largest odd (track first occurrence)
        if (number % 2 != 0) {
            if (!hasOdd || number > maxOdd) {
                maxOdd = number;
                hasOdd = true;
                posMaxOdd = totalCount;   // store position (1-based) of this max odd
            }
        }

        std::cout << "Do you want to enter another number? (y/n): ";
        std::cin >> option;
    }

    if (hasOdd) {
        int priorCount = posMaxOdd - 1;   // numbers entered before the first occurrence of the max odd
        std::cout << "Largest odd number: " << maxOdd << std::endl;
        std::cout << "Numbers entered before it: " << priorCount << std::endl;
    }
    else {
        std::cout << "No odd numbers were entered." << std::endl;
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
