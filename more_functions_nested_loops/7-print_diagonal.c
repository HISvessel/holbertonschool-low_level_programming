#include "main.h"
/**
 * print_diagonal - this function prints line
 *@n: var to print
 *Return: void
 */
void print_diagonal(int n)
{
	int l, h;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
		for (l = 0; l < n; l++)
		{
			for (h = 0; h < l; h++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
}
