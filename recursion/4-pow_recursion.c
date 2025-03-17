#include "main.h"
/**
 * _pow_recursion - this function returns the power of x to y
 *@x: the base integer
 *@y: the power integer
 *Return: -1 for negatives, else return x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
