#include "main.h"
/**
 * _strcat - this function catenates a string
 *@src: the string to append
 *@dest: the string which will catenate with another
 *@n: maximum number of bytes used from arc
 *Return: to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		{
			i++;
		}

		for (j = 0; j < n && src[j] != '\0'; j++)
			{
		dest[i + j] = src[j];
			}
	dest[i +j] = '\0';
	return (dest);
}

