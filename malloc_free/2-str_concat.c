#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - this function concatenates two strings together
 * @s1: source string to append to
 * @s2: dest string to append
 * Return: the two strings together
 */

char *str_concat(char *s1, char *s2)
{
	int len_1 = 0, len_2 = 0, i;
	char *concat;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len_1++;

	for (i = 0; s2[i] != '\0'; i++)
		len_2++;

	concat = malloc(sizeof(char) * (len_1 + len_2) + 1);

	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concat[len_1 + i] = s2[i];
	return (concat);
}
