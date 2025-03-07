#include "main.h"
/**
 * _strcat - this function catenates a string
 *@src: the string to append
 *@dest: the string which will catenate with another
 *Return: to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

