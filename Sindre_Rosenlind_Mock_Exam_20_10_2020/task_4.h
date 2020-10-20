#pragma once
#include <conio.h>
#include <iostream>

void task_4() {
	int score = 0;
	struct map {
		int x = 10;
		int y = 8;
	}position;
	char c;
	std::cout << "Player: E      Exit program: go to H        Taking -: gives you a point" << std::endl;
	char grid[18][32] = {
		 "+#############################+",
		 "|        -    -               |",
		 "|    -   -         -          |",
		 "|## ########### ##   #########|",
		 "|   |    --        -      -   |",
		 "| |-|### |  |           |     |",
		 "|-|   -  |  | |###  |   |  |  |",
		 "|-| #####| -| |      ## |-    |",
		 "| |      - -  |###  |      |  |",
		 "| |#####-###    -    ##     - |",
		 "|          ######  ####### ###|",
		 "|       -        -            |",
		 "|# ### ####      ###   #######|",
		 "|  -        -       -         |",
		 "|      -       -         -    |",
		 "|     -     -       -         |",
		 "|    -         H              |",
		 "+#############################+"
	};
	grid[position.x][position.y] = 'E';
	for (int i = 0; i < 18; i++) {
		for (int j = 0; j < 32; j++) {
			std::cout << grid[i][j];
		}
		std::cout << std::endl;
	}
	do {
		c = _getch();
		if (c == 'W' || c == 'w') {
			if (grid[(position.x) - 1][position.y] != '#' && grid[(position.x) - 1][position.y] != '|') {
				grid[position.x][position.y] = ' ';
				position.x = position.x - 1;
				if (grid[position.x][position.y] == '-') {
					score++;
				}
			}
		}
		if (c == 'S' || c == 's') {
			if (grid[(position.x) + 1][position.y] != '#' && grid[(position.x) + 1][position.y] != '|') {
				grid[position.x][position.y] = ' ';
				position.x = position.x + 1;
				if (grid[position.x][position.y] == '-') {
					score++;
				}
			}
		}
		if (c == 'D' || c == 'd') {
			if (grid[(position.x)][(position.y) + 1] != '#' && grid[(position.x)][(position.y) + 1] != '|') {
				grid[position.x][position.y] = ' ';
				position.y = position.y + 1;
				if (grid[position.x][position.y] == '-') {
					score++;
				}
			}
		}
		if (c == 'A' || c == 'a') {
			if (grid[(position.x)][(position.y) - 1] != '#' && grid[(position.x)][(position.y) - 1] != '|') {
				grid[position.x][position.y] = ' ';
				position.y = position.y - 1;
				if (grid[position.x][position.y] == '-') {
					score++;
				}
			}
		}
		grid[position.x][position.y] = 'E';
		std::cout << "Score:" << score;
		std::cout << std::endl;
		for (int i = 0; i < 18; i++) {
			for (int j = 0; j < 32; j++) {
				std::cout << grid[i][j];
			}
			std::cout << std::endl;
		}
	} while (grid[16][15] == 'H');
}