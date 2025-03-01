#include "main.h"
/**
 * jack_bauer - playing 24 hours emom
 *Return: void
 */
void jack_bauer(void)
{
	int m, h;

	for (h = 0; h <= 23; h++)
	{
	for (m = 0; m <= 59; m++)
		{
	_putchar('0' + h / 10);
	_putchar('0' + h % 10);
	_putchar(':');
	_putchar('0' + m / 10);
	_putchar('0' + m % 10);
	_putchar('\n');
		}
	}
}
