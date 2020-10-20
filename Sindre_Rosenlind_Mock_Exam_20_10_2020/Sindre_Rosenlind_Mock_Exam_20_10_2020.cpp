#include <iostream>
#include "login.h"
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"






int main() {
	if (login_page(0) == 1) {
		int a;
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
			switch (a) {
			case 1:
				std::cout << std::endl;
				task_1();
				std::cout << std::endl;
				break;
			case 2:
				std::cout << std::endl;
				task_2();
				std::cout << std::endl;
				break;
			case 3:
				std::cout << std::endl;
				task_3();
				std::cout << std::endl;
				break;
			case 4:
				std::cout << std::endl;
				task_4();
				std::cout << std::endl;
				break;
			case 5:
				a = 5;
				break;
			default:
				std::cout << "Invalid Input, try again!" << std::endl;
				break;
			}
		} while (a != 5);
	}
}