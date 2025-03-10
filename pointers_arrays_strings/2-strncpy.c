#include "main.h"
/**
 * _strncpy - this function copies a string
 *@src: the string to copy
 *@dest: destination buffer
 *@n: variable indicating max number of index
 *Return: to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
