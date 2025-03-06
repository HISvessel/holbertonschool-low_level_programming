#include "main.h"
/**
 * _puts - this function prints a string s
 *@str: char to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
