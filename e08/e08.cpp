// e08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    char letter;
    int count = 0;
    int lastType = -1; // -1 = none, 0 = vowel, 1 = consonant
    bool keepGoing = true;

    while (keepGoing) {
        std::cout << "Enter a letter: ";
        std::cin >> letter;

        // Check if it's a vowel
        bool isVowel = (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u' ||
            letter == 'A' || letter == 'E' || letter == 'I' ||
            letter == 'O' || letter == 'U');

        if (lastType == -1) {
            // First letter
            count++;
            if (isVowel) lastType = 0;
            else lastType = 1;
        }
        else {
            if ((isVowel && lastType == 1) || (!isVowel && lastType == 0)) {
                // Correct alternation
                count++;
                if (isVowel) lastType = 0;
                else lastType = 1;
            }
            else {
                // Wrong alternation ? stop
                keepGoing = false;
            }
        }
    }

    std::cout << "You alternated " << count << " letters correctly." << std::endl;

    return 0;
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
