#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - this function duplicates a string
 * @str: poiinter to a string
 * return: the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *dupe;

	if (!str)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;

	dupe = malloc(sizeof(char) * len + 1);
	if (!dupe)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		dupe[i] = str[i];
	}
	dupe[len] = '\0';
	return (dupe);
}
