#include "structures.h"
#include <iostream>

void show_person(person& P){
	std::cout << "Имя: " << P.name << std::endl;
	std::cout << "Возраст: " << P.age << std::endl;
	std::cout << "Должность: " << P.position << std::endl;
	std::cout << "Зарплата: " << P.salary << std::endl;
}
