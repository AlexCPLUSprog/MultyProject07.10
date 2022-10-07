#pragma once
#include <iostream>

double mean(int num1, int num2);

int absolute(int num);

template <typename T>
void show_arr(T arr[], const int length) {
	// using std::cout;
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

