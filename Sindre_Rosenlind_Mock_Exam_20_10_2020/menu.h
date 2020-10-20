#pragma once
#include <iostream>

int menu(int a) {
	do {
		std::cout << std::endl;
		std::cout << "Choose the options from 1 - 5 of what thask you would like to see" << std::endl;
		std::cout << "-----------------------------------------------------------------" << std::endl;
		std::cout << "1. Task 1" << std::endl;
		std::cout << "2. Task 2" << std::endl;
		std::cout << "3. Task 3" << std::endl;
		std::cout << "4. Task 4" << std::endl;
		std::cout << "5. Quit the program" << std::endl;
		std::cout << "-----------------------------------------------------------------" << std::endl;
		std::cout << "Enter number form 1 to 5:";
		std::cin >> a;
		if (a != 1 || a != 2 || a != 3 || a != 4 || a != 5) {
			std::cout << "Invalid Input" << std::endl;
		}
	} while (a < 1 && a > 5);
	return a;
}
