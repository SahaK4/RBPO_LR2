#include "func.h"

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
