#include <iostream>

#include "functions.h" // подключение заголовочного файла с прототипами функций
#include "structures.h"
#include "elements.h"


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Functions
	/*std::cout << mean(4, 7) << std::endl;		// 5.5
	std::cout << absolute(-7) << std::endl;		// 7 (модуль числа)	
	const int size = 5;
	int arr[size]{ 1, 2, 3, 4, 5 };
	show_arr(arr, size);*/

	// Structures
	person tom{ "Tom", 20, "manager", 50000 };
	show_person(tom);

	std::cout << _PI << std::endl;

	_ARR[0] = 8;
	std::cout << circle(5) << std::endl;

	return 0;
}