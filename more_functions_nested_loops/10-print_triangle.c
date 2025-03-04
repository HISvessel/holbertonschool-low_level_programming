#include "main.h"
/**
 * print_triangle - this function prints a triangle
 *@size: var of size
 *Return: void
 */
void print_triangle(int size)
{
	int column, width, depth;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (column = 1; column <= size; column++)
	{
		for (width = 0; width < size - column; width++)
		{
			_putchar(' ');
		}
		for (depth = 0; depth < column; depth++)
		{
			_putchar('#');
		}
		_putchar ('\n');
	}
}
