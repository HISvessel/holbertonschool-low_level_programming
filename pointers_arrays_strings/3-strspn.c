#include "main.h"
#include "2-strchr.c"
/**
 * _strspn - this function gets the length of a string
 * @s: pointer to a string
 * @accept: the string to take bytes from
 * Return: the size of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && _strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}

