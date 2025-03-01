#include "main.h"
/**
 * times_table - prints the output of a number x 9
 *Return: void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
		int table = x * y;

		if (table < 10)
		{
			if (y > 0)
			{
			_putchar(' ');
			}
		_putchar(table + '0');
		}
		else
		{
			_putchar(table / 10 + '0');
			_putchar(table % 10 + '0');
		}
		if (y < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
