#pragma once

#include <iostream>
#include <string>

struct person {
	std::string name;
	int age{};
	std::string position = "empty";
	int salary{};
};

// ����� ���������� �� �������
void show_person(person &P);
