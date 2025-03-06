#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - this prints a string in reverse
 *@s: var to print
 */
void print_rev(char *s)
{
	int i, j;

	i = _strlen(s);
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
