#include "main.h"
#include <stdlib.h>
/**
* int _islower - prints true value if lower
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
