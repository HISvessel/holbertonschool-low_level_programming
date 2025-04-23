#include <stdio.h>

double multiply(double a, double b)
{
	return a * b;
}

int main()
{
	double (*op)(double a, double b);
	op = &multiply;

	printf("%.2f\n", op(4.5, 2.0));
	return (0);
}
