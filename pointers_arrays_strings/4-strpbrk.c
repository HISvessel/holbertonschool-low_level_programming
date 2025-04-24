#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - this function searches for the first similar string element
 * @s: string being evaluated
 * @accept: bytes being searched for
 * Return: a string pointed to, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int string;

	for (string = 0; s[string] != '\0'; string++)
	{
		int substring = 0;

		while (accept[substring] != '\0')
		{
			if (s[string] == accept[substring])
			{
				return (s + string);
			}
			substring++;
		}
	}
	return (NULL);
}
