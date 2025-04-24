#include "main.h"

/**
 * string_nconcat - this function concats a malloc'ed string
 * @s1: the first string
 * @s2: the second string
 * @n: size of the strings
 * Return: the strings concatenated, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *concat;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
	{
		n = len2;
	}

	concat = malloc(len1 + n + 1 * sizeof(char));

	if (!concat)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';
	return (concat);
}
