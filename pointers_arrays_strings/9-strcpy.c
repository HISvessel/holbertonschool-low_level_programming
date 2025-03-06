#include "main.h"
/**
 * _strcpy - this function copies string to buffer
 *@src: var that holds the string
 *@dest: var that points to the buffer
 *Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';
		return (dest);
}
