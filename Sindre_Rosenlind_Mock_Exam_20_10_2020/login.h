#pragma once
#include <iostream>
#include <conio.h>
int login_page(int) {
	int attempts = 3;
	bool code = false;

	std::cout << "Use W-A-S-D keys to insert the right 4 moves pattern password" << std::endl;
	do {
		char grid[9] = { '*', '2', '3', '4', '5', '6', '7', '8', '9' };
		int position = 0;
		int counter = 0;
		char c[4] = { ' ', ' ', ' ', ' ' };
		std::cout << "attempts: " << attempts << std::endl;
		std::cout << "|" << grid[0] << "|" << grid[1] << "|" << grid[2] << "|" << std::endl;
		std::cout << "|" << grid[3] << "|" << grid[4] << "|" << grid[5] << "|" << std::endl;
		std::cout << "|" << grid[6] << "|" << grid[7] << "|" << grid[8] << "|" << std::endl;
		do {
			for (int i = 0; i < 4; i++) {
				c[i] = _getch();
				if (c[i] == 'w' || c[i] == 'W') {
					if (position != 0 && position != 1 && position != 2) {
						position = position - 3;
						grid[position] = '*';
					}
				}
				if (c[i] == 'A' || c[i] == 'a') {
					if (position != 0 && position != 3 && position != 6) {
						position = position - 1;
						grid[position] = '*';
					}
				}
				if (c[i] == 'S' || c[i] == 's') {
					if (position != 6 && position != 7 && position != 8) {
						position = position + 3;
						grid[position] = '*';
					}
				}
				if (c[i] == 'D' || c[i] == 'd') {
					if (position != 2 && position != 5 && position != 8) {
						position = position + 1;
						grid[position] = '*';
					}
				}
				counter++;
				std::cout << "|" << grid[0] << "|" << grid[1] << "|" << grid[2] << "|" << std::endl;
				std::cout << "|" << grid[3] << "|" << grid[4] << "|" << grid[5] << "|" << std::endl;
				std::cout << "|" << grid[6] << "|" << grid[7] << "|" << grid[8] << "|" << std::endl;
			}
		} while (counter < 4);
		attempts = attempts - 1;
		bool c_1 = false;
		bool c_2 = false;
		bool c_3 = false;
		bool c_4 = false;
		if (c[0] == 's' || c[0] == 'S') {
			c_1 = true;
		}
		if (c[1] == 'd' || c[1] == 'D') {
			c_2 = true;
		}
		if (c[2] == 'w' || c[2] == 'W') {
			c_3 = true;
		}
		if (c[3] == 'd' || c[3] == 'D') {
			c_4 = true;
		}
		if (c_1 == true && c_2 == true && c_3 == true && c_4 == true) {
			code = true;
		}
		else if (code == false && attempts != 0) {
			std::cout << "Try again!" << std::endl;
		}
		else {
			std::cout << "You have entered the wrong pattern too many times!" << std::endl;
		}
	} while (code == false && attempts != 0);
	if (code == true) {
		return 1;
	}
	else {
		return 0;
	}
}