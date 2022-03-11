#include "proc.h"
double n(double a, double b)
{
	if (a >= b)
		return double(pow(a - b, 1 / 3));
	return double(a * a + (a - b) / sin(a * b));
}
double m(double a, double b,double n)
{
	if (n < b)
	{
		return ((n+a)/(-b))
	}
}