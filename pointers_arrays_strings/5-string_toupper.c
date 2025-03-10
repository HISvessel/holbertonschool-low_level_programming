#include "main.h"
/**
 * string_toupper - this prints all lower to upper
 * @str: string to turn lowers into uppers
 *Return: str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		{
			if (str[i]  >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] -'a' + 'A';
			}
			i++;
		}
	return (str);
}
