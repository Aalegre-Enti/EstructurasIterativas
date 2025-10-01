// e29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    float capital;        // initial amount of money
    float rate;           // annual interest rate in percent
    int years;             // number of years to invest

    std::cout << "Enter the initial amount of money: ";
    std::cin >> capital;

    std::cout << "Enter the annual interest rate (in %): ";
    std::cin >> rate;

    std::cout << "Enter the number of years to invest: ";
    std::cin >> years;

    float totalProfit = 0.0;  // accumulated profit
    float currentCapital = capital;

    for (int i = 1; i <= years; i++) {
        float annualProfit = currentCapital * (rate / 100.0);
        totalProfit = totalProfit + annualProfit;
        currentCapital = currentCapital + annualProfit;

        std::cout << "Year " << i << ": "
            << "Annual profit = " << annualProfit
            << ", Total profit = " << totalProfit
            << std::endl;
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
