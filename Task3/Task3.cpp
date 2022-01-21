#include <iostream>
#include <cmath>

double f(double x);

int main()
{
	setlocale(LC_ALL, "ru");
	double x;
	x = 4;
	std::cout << x << std::endl;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	std::cout << "f = " << f(x) << std::endl;

	//для исходных произвольных данных
	std::cout << "Введите значение x: " << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "f = " << f(x) << std::endl;
}
double f(double x)
{
	double pi = 3.14159265358979323846;
	double f = (sin(pi / 2 + 3 * x)) / (1 - sin(3 * x - pi));
	return f;
}
