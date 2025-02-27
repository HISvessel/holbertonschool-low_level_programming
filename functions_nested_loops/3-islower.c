#include "main.h"
#include <stdlib.h>
/**
* _islower - prints true value if lower
* @c: variable used for return
*Return: 1 or 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
