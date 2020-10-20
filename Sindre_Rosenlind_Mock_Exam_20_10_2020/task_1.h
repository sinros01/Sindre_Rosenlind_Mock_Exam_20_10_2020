#pragma once
#include <vector>
#include <iostream>
#include <random>

void task_1() {
	int dices[1000]{};
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 6);
	for (int i = 0; i < 1000; i++) {
		dices[i] = dis(gen);
	}
	std::vector<int> one(1000, 0);
	std::vector<int> two(1000, 0);
	std::vector<int> three(1000, 0);
	std::vector<int> four(1000, 0);
	std::vector<int> five(1000, 0);
	std::vector<int> six(1000, 0);
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	for (int i = 0; i < 1000; i++) {
		if (dices[i] == 1) {
			one[a] = 1;
			a++;
		}
		if (dices[i] == 2) {
			two[b] = 1;
			b++;
		}
		if (dices[i] == 3) {
			three[c] = 1;
			c++;
		}
		if (dices[i] == 4) {
			four[d] = 1;
			d++;
		}
		if (dices[i] == 5) {
			five[e] = 1;
			e++;
		}
		if (dices[i] == 6) {
			six[f] = 1;
			f++;
		}
	}
	std::cout << "1: " << std::count(one.begin(), one.end(), 1) << " times" << std::endl;
	std::cout << "2: " << std::count(two.begin(), two.end(), 1) << " times" << std::endl;
	std::cout << "3: " << std::count(three.begin(), three.end(), 1) << " times" << std::endl;
	std::cout << "4: " << std::count(four.begin(), four.end(), 1) << " times" << std::endl;
	std::cout << "5: " << std::count(five.begin(), five.end(), 1) << " times" << std::endl;
	std::cout << "6: " << std::count(six.begin(), six.end(), 1) << " times" << std::endl;
}

