#include <iostream>
#include <cmath>

double f(double x)
{
	double pi = 3.14159265358979323846;
	double f = (sin(pi / 2 + 3 * x)) / (1 - sin(3 * x - pi));
	return f;
}
