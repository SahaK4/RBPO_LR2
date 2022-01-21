#include <iostream>
#include <cmath>

void f(const double &x, double &f);

int main()
{
	setlocale(LC_ALL, "ru");
	double x,f1;
	x = 4;
	f(x, f1);
	std::cout << x << std::endl;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	std::cout << "f = " << f1 << std::endl;
	//для исходных произвольных данных
	std::cout << "Введите значение x: " << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f(x, f1);
	std::cout << "f = " << f1 << std::endl;
}
void f(const double& x, double& f)
{
	double pi = 3.14159265358979323846;
	f = (sin(pi / 2 + 3 * x)) / (1 - sin(3 * x - pi));

}
