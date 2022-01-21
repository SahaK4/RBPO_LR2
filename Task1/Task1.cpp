
#include <iostream>
#include <cmath>
int main() 
{
	setlocale(LC_ALL, "ru");
	double x, f,pi;
	pi = 3.14159265358979323846;
	//для исходных данны в виде литералов
	x = 4;
	std::cout << x << std::endl;
	f = (sin(pi/2+3*x)) / (1-sin(3*x-pi));
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	std::cout << "f = " << f << std::endl;

	//для исходных произвольных данных
	std::cout << "Введите значение x: " << std::endl;

	std::cout << "x = ";
	std::cin >> x;
	f = (sin(pi / 2 + 3 * x)) / (1 - sin(3 * x - pi));
	std::cout << "f = " << f << std::endl;
}
