// e22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int secretNumber;     // the number to guess
    int guess;            // user input
    int attempts = 0;     // number of tries
    int maxAttempts = 5;  // maximum tries allowed

    // initialize random seed
    std::srand(std::time(0));
    secretNumber = std::rand() % 21;  // random number between 0 and 20

    std::cout << "Guess the secret number between 0 and 20." << std::endl;
    std::cout << "You have " << maxAttempts << " attempts." << std::endl;

    while (attempts < maxAttempts) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        attempts = attempts + 1;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the number in "
                << attempts << " attempts." << std::endl;
            break;
        }
        else if (guess < secretNumber) {
            std::cout << "The secret number is higher." << std::endl;
        }
        else {
            std::cout << "The secret number is lower." << std::endl;
        }
    }

    if (guess != secretNumber) {
        std::cout << "Sorry, you did not guess the number." << std::endl;
        std::cout << "The secret number was: " << secretNumber << std::endl;
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
