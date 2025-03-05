#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - this function prints a string in reverse
 *@s: variable to print
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0')
		i++;
	i--;
	j = 0;

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
