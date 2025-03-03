#include "main.h"
/**
 * more_numbers - this is to print 10 lines of numbers
 *Return: void
 */
void more_numbers(void)
{
	int y, x;
		for (y = 0; y < 10; y++)
		{
			for (x = 0; x <= 14; x++)
			{
				if (x >= 10)
				{
					_putchar((x / 10) + '0');
				}
				_putchar((x % 10) + '0');
			}
			_putchar('\n');
		}
}
