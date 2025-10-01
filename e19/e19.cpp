// e19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int number;          
    int sumEven = 0;     
    int sumOdd = 0;      
    char option = 'y';   

    std::cout << "Este programa suma por separado los numeros pares e impares." << std::endl;

    while (option == 'y' || option == 'Y') {
        std::cout << "Ingresa un numero: ";
        std::cin >> number;

        if (number % 2 == 0) {
            sumEven = sumEven + number;   // si es par
        }
        else {
            sumOdd = sumOdd + number;     // si es impar
        }

        std::cout << "¿Quieres ingresar otro numero? (y/n): ";
        std::cin >> option;
    }

    std::cout << "La suma de los numeros pares es: " << sumEven << std::endl;
    std::cout << "La suma de los numeros impares es: " << sumOdd << std::endl;
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
