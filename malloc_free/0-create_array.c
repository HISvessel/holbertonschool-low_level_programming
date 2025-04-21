#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - this function allocates memory for an array
 * @size: size of the array
 * @c: char of an array
 * Return: chars of an array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
