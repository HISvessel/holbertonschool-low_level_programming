#include <stdio.h>

int power(int base, int exp)
{
	if (exp == 0)
	{
		return 1;
	}
	else
	{
		return base * power(base, exp - 1);
	}
}

int main()
{
	int base = 2;
	int exp = 3;

	printf("The base of %d to the power of %d is: %d\n", base, exp, power(base, exp));
	return 0;
}
