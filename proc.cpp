#include "proc.h"
double n(double a, double b)
{
	if (a >= b)
	{
		return double(pow(a - b, 1 / 3));
	}
	if (sin(a * b) == 0)
	{
		cout << "error" << endl;
		return -1000000;
	}
	return double(a * a + (a - b) / sin(a * b));
}
double m(double a, double b)
{
	double k = n(a, b);
	if (k == -1000000)
		return 0;
	if (k < b)
		return ((k + a) / (-b));
	if (k == b)
	{

		
		return b * b + tan(k * a);
	}
	return b * b * b + k * a * a;
}


double y(double a, double x)
{
	if (a <= x)
	{
		return a + log(a + x);
	}
	if (a > x)
	{
		return sqrt(sin(a * x));
	}
}
double t(double a,double x)
{
	double k = y(a, x);
	if (a > k)
	{
		return k / (a - x);
	}
	if (a == k)
	{
		return k / (a - x) + (a + x) / (k * k);
	}
	return tan(a * x) + cos(2 * a * k);
}

