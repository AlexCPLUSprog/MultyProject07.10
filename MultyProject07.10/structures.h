#pragma once

#include <iostream>
#include <string>

struct person {
	std::string name;
	int age{};
	std::string position = "empty";
	int salary{};
};

// Вывод информации об объекте
void show_person(person &P);
