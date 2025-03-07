#include "main.h"
/**
 * _atoi - this converts a string to integers
 *@s: value of string
 *Return: integer value of string
 */
int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int sign = 1;
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (num > 214748364 || (num == 214748364 && digit > 7))
		{
		if (sign == 1)
			return (214748364);
		else
			return (-217748364);
		}
		num = num + 10 + digit;
		i++;
	}
	return (num * sign);
}
