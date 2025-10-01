// e18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int number;          // variable to store each number entered
    int sum = 0;         // variable to store the sum of all numbers
    int count = 0;       // variable to count how many numbers were entered
    char option = 'y';   // variable to control whether the user continues

    std::cout << "This program calculates the average of numbers you enter." << std::endl;

    while (option == 'y' || option == 'Y') {
        std::cout << "Enter a number: ";
        std::cin >> number;

        sum = sum + number;   // add the number to the sum
        count = count + 1;    // increase the count of numbers

        std::cout << "Do you want to enter another number? (y/n): ";
        std::cin >> option;
    }

    if (count > 0) {
        int average = sum / count;   // integer division
        std::cout << "The average of the numbers is: " << average << std::endl;
    }
    else {
        std::cout << "No numbers were entered." << std::endl;
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
