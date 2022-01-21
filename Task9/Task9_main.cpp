#include "func1.h"



int main()
{
	
	setlocale(LC_ALL, "ru");
	Kazina::f();
	std::cout << Kazina::x << std::endl;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	std::cout << "f = " << Kazina::result << std::endl;
	//для исходных произвольных данных
	std::cout << "Введите значение x: " << std::endl;
	std::cout << "x = ";
	std::cin >> Kazina::x;
	Kazina::f();
	std::cout << "f = " << Kazina::result << std::endl;
}