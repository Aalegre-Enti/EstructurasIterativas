// e09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string user = "Admin";
std::string password = "Password123";
std::string inputUser;
std::string inputPassword;
int main()
{
	bool run = true;
	while (run) {
		std::cout << "Enter username: ";
		std::cin >> inputUser;
		std::cout << "Enter password: ";
		std::cin >> inputPassword;
		if (inputUser == user && inputPassword == password) {
			std::cout << "Access granted.\n";
			run = false;
		}
		else if (inputUser != user && inputPassword != password) {
			std::cout << "Error: Invalid username and password.\n";
		}
		else if (inputPassword != password) {
			std::cout << "Error: Invalid password.\n";
		}
		else {
			std::cout << "Error: Invalid username.\n";
		}
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
