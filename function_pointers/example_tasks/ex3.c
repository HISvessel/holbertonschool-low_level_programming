#include <stdio.h>
#include <stdlib.h>

int  multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

int main()
{
	int (*operator)(int a, int b);

	operator = &multiply;

	printf("The result of this multiplication is %d\n", (operator)(5, 5));

	operator = &divide;
	printf("The result of division is %d\n", (operator)(10, 5));
	return 0;
}
