#include "main.h"
#include <stddef.h>
/**
 * _strchr - this function that looks for the first print of a char
 * @s: string to find char
 * @c: char to find
 * Return: to c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
