#include "main.h"
/**
 * print_last_digit - this function prints the last digit of the number
 * @r: variable to modulate
 *Return: last digit of an integer
 */
int print_last_digit(int r)
{
	int n = r % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n);
	return (n);
}

