#include "main.h"

/**
 * _memset - function to fill memory with c byte
 *@s: location of first element of array
 *@b: var that will fill the array
 *@n: amount of spaces to fill
 *Return: to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int size = 0;

	for (size = 0; size < n; size++)
	{
		s[size] = b;
	}
	return (s);
}
