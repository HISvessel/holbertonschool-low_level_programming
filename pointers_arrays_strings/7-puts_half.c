#include "main.h"
#include "2-strlen.c"
/**
 *puts_half - this function prints latter half of string
 *@str: char to control
 */
void puts_half(char *str)
{
	int s = _strlen(str);
	int l;

	if (s % 2 == 0)
	{
		for (l = s / 2; l < s; l++)
		{
			_putchar(str[l]);
		}
	}
	else
	{
		for (l = (s + 1) / 2; l < s; l++)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}
