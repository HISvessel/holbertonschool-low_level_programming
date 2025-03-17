#include "main.h"
/**
 * factorial - this function returns the factorial of a number
 *@n: int to factor
 *Return: -1 if error, else factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
