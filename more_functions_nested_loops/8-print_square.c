#include "main.h"
/**
 * print_square - this function prints a square
 *@size: variable of square
 *Return: void
 */
void print_square(int size)
{
	int l, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (w = 0; w < size; w++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
