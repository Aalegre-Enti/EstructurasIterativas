// e30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    float capital;       // initial money
    float baseRate;      // initial annual interest (%)
    int years;           // number of years to simulate
    int minVar, maxVar;  // min and max variation in percentage points

    std::cout << "Enter the initial amount of money: ";
    std::cin >> capital;

    std::cout << "Enter the starting annual interest rate (in %): ";
    std::cin >> baseRate;

    std::cout << "Enter the number of years to simulate: ";
    std::cin >> years;

    std::cout << "Enter the minimum variation for interest (in %): ";
    std::cin >> minVar;

    std::cout << "Enter the maximum variation for interest (in %): ";
    std::cin >> maxVar;

    std::srand(std::time(0)); // random seed

    float currentCapital = capital;
    float totalProfit = 0.0f;
    float currentRate = baseRate;
    float prevRate = baseRate;

    for (int i = 1; i <= years; i++) {
        // random variation between minVar and maxVar
        int variation = minVar + (std::rand() % (maxVar - minVar + 1));

        // apply variation (could be negative if minVar < 0)
        currentRate = prevRate + variation;

        // calculate profits
        float annualProfit = currentCapital * (currentRate / 100.0f);
        totalProfit += annualProfit;
        currentCapital += annualProfit;

        // output
        std::cout << "Year " << i
            << ": Annual profit = " << annualProfit
            << ", Total profit = " << totalProfit
            << ", Interest rate = " << currentRate << "%"
            << " (variation = " << variation << "%)"
            << std::endl;

        // update previous rate
        prevRate = currentRate;
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
