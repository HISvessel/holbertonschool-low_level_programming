#include "main.h"
/**
 * _isupper - prints and upper case leter
 *@c: int var
 *Return: 0 and 1
 */
int _isupper(int c)
{
	int L;
	for (L = 65; L <= 90; L++)
	{
		if (c == L)
		return (1);
	}
	return (0);
}
