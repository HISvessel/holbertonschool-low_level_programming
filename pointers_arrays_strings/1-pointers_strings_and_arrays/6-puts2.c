#include "main.h"
/**
 * puts2 - this function prints every other character of a string
 *@str: string to modulate
 */
void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
		{
		if (s % 2 == 0)
			{
			_putchar(str[s]);
			}
		}
	_putchar('\n');
}
