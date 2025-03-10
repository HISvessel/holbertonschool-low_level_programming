#include "main.h"
/**
 * _strncat - function to concatenate two strings
 * @src: string to append to dest
 * @dest: string which will recieve appending
 * @n: array variable 
 * Return: to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	{
		while  (src[j] != '\0')
		{
		
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	 return (dest);
}
