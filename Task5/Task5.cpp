﻿#include <iostream>
#include <cmath>

double x = 4;
double result;
void f();

int main()
{
	setlocale(LC_ALL, "ru");
	f();
	std::cout << x << std::endl;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	std::cout << "f = " << result << std::endl;
	//для исходных произвольных данных
	std::cout << "Введите значение x: " << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f();
	std::cout << "f = " << result << std::endl;
}
void f()
{
	double pi = 3.14159265358979323846;
	result = (sin(pi / 2 + 3 * x)) / (1 - sin(3 * x - pi));

}
