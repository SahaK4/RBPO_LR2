
#include "func.h"
#include <cmath>
double x = 4;
double result;

void f()
{
	double pi = 3.14159265358979323846;
	result = (sin(pi / 2 + 3 * x)) / (1 - sin(3 * x - pi));
}
