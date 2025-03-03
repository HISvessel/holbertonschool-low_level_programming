#include "main.h"
/**
 * print_line - this function is to print number of lines
 *@n: number of lines to print
 *Return: void
 */
void print_line(int n)
{
	int u;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (u = 0; u < n; u++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
