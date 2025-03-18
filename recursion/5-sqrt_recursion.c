#include "main.h"
int _another_sqrt_recursion(int n, int p);
/**
 * _sqrt_recursion - this function finds the square root of n
 * @n: integer to calculate
 * Return: -1 if no square root, else n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n / _another_sqrt_recursion(n, 0));
}

/**
 * _another_sqrt_recursion - this function returns the square root of a num
 *@n: the base number
 *@p: the index
 *Return: square root
 */
int _another_sqrt_recursion(int n, int p)
{
	if (p * p > n)
	{
		return (-n);
	}
	else if (p * p == n)
	{
		return (p);
	}
		return (_another_sqrt_recursion(n, p + 1));
}
