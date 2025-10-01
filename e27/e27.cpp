// e27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    int width = rows; // first line has 'rows' stars

    for (int i = rows; i >= 1; i--) {
        int stars = i;
        int leftPadding = (width - stars) / 2; // spaces to center

        for (int s = 0; s < leftPadding; s++) {
            std::cout << " ";
        }
        for (int k = 0; k < stars; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
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
