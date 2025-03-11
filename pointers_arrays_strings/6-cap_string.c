#include "main.h"
/**
 * cap_string - this function capitalizes words on a string
 *@str: string pointed to
 *Return: to str
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap = 1;
	char spacers[] = " \t\n,;.!?\"{}[]";

		while (str[i] != '\0')
		{
			int j = 0;
			int is_sep = 0;

			while (spacers[j] != '\0' && !is_sep)
			{
				if (str[i] == spacers[j])
				{
					is_sep = 1;
				}
				j++;
			}
			if (is_sep)
			{
				cap = 1;
			}
			else
			{
				if (cap && str[i] >= 'a' && str[i] <= 'z')
				{
				str[i] = str[i] - 32;
				}
				cap = 0;
			}
		i++;
		}

	return (str);
}
