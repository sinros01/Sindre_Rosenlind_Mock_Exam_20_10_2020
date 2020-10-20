#pragma once
#include <iostream>
#include <algorithm>
#include <random>
#include <string>

struct task {
	int number;
	std::string name;
	int value;
};

bool compare(task lhs, task rhs) {
	return lhs.value > rhs.value;
}

void task_2() {

	char health = '*';
	task task[20];
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 19);
	for (int i = 0; i < 20; i++) {
		task[i].value = dis(gen) + 1;
		task[i].number = i + 1;
	}
	task[0].name = " A";
	task[1].name = " B";
	task[2].name = " C";
	task[3].name = " D";
	task[4].name = " E";
	task[5].name = " F";
	task[6].name = " G";
	task[7].name = " H";
	task[8].name = " I";
	task[9].name = "J";
	task[10].name = "K";
	task[11].name = "L";
	task[12].name = "M";
	task[13].name = "N";
	task[14].name = "O";
	task[15].name = "P";
	task[16].name = "Q";
	task[17].name = "R";
	task[18].name = "S";
	task[19].name = "T";
	std::cout << "No        Name        Value       Helth Bar" << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	for (int i = 0; i < 20; i++) {
		if (task[i].value < 10) {
			std::cout << task[i].number << "          " << task[i].name << "          " << task[i].value << "          ";
			for (int j = 0; j < task[i].value; j++) {
				std::cout << health;
			}
			std::cout << std::endl;
		}
		else {
			std::cout << task[i].number << "          " << task[i].name << "          " << task[i].value << "         ";
			for (int j = 0; j < task[i].value; j++) {
				std::cout << health;
			}
			std::cout << std::endl;
		}
	}
	std::sort(task, task + 20, compare);
	std::cout << std::endl;
	std::cout << "No        Name        Value       Helth Bar" << std::endl;
	std::cout << "----------------------------------------------------------------" << std::endl;
	for (int i = 0; i < 20; i++) {
		if (task[i].value < 10) {
			std::cout << task[i].number << "          " << task[i].name << "          " << task[i].value << "          ";
			for (int j = 0; j < task[i].value; j++) {
				std::cout << health;
			}
			std::cout << std::endl;
		}
		else {
			std::cout << task[i].number << "          " << task[i].name << "          " << task[i].value << "         ";
			for (int j = 0; j < task[i].value; j++) {
				std::cout << health;
			}
			std::cout << std::endl;
		}
	}
}
