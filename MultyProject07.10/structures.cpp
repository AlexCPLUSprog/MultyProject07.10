#include "structures.h"
#include <iostream>

void show_person(person& P){
	std::cout << "���: " << P.name << std::endl;
	std::cout << "�������: " << P.age << std::endl;
	std::cout << "���������: " << P.position << std::endl;
	std::cout << "��������: " << P.salary << std::endl;
}
