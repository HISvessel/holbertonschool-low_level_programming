#include "main.h"
/**
 * _strlen_recursion - this function returns the string length
 *@s: the string to measure size of
 *Return: size of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
