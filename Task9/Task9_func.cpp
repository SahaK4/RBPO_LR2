#include "func1.h"
#include <cmath>
double Kazina::x = 4;
double Kazina::result;
void Kazina::f()
{
	double pi = 3.14159265358979323846;
	result = (sin(pi / 2 + 3 * x)) / (1 - sin(3 * x - pi));
}