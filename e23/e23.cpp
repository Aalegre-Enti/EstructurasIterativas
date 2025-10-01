// e23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int playerScore = 0;
    int computerScore = 0;
    int roundsToWin = 3;   // best of 5 -> first to 3 wins
    int choice;
    int computerChoice;

    std::srand(std::time(0)); // initialize random seed

    std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
    std::cout << "Enter your choice: 1 = Rock, 2 = Paper, 3 = Scissors" << std::endl;

    while (playerScore < roundsToWin && computerScore < roundsToWin) {
        std::cout << "\nYour choice: ";
        std::cin >> choice;

        if (choice < 1 || choice > 3) {
            std::cout << "Invalid choice. Please choose 1, 2, or 3." << std::endl;
            continue;
        }

        computerChoice = std::rand() % 3 + 1; // random number 1-3

        // Show computer choice
        std::cout << "Computer chose: ";
        if (computerChoice == 1) std::cout << "Rock";
        else if (computerChoice == 2) std::cout << "Paper";
        else std::cout << "Scissors";
        std::cout << std::endl;

        // Determine winner of this round
        if (choice == computerChoice) {
            std::cout << "It's a tie!" << std::endl;
        }
        else if ((choice == 1 && computerChoice == 3) ||
            (choice == 2 && computerChoice == 1) ||
            (choice == 3 && computerChoice == 2)) {
            std::cout << "You win this round!" << std::endl;
            playerScore = playerScore + 1;
        }
        else {
            std::cout << "Computer wins this round!" << std::endl;
            computerScore = computerScore + 1;
        }

        // Show score
        std::cout << "Score ? You: " << playerScore
            << " | Computer: " << computerScore << std::endl;
    }

    // Final result
    if (playerScore == roundsToWin) {
        std::cout << "\nCongratulations! You won the game!" << std::endl;
    }
    else {
        std::cout << "\nComputer won the game. Better luck next time!" << std::endl;
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
