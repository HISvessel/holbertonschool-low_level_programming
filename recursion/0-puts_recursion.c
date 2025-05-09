#include "main.h"
/**
 * _puts_recursion - this function prints a string
 *@s: the string that will be printed
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
