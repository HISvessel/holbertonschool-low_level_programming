#include <stdio.h>
/**
 * print_to_98 - this is to printall natural nums  up to the number of 98
 *@n: int var
 *Return: n to 98
 */
int print_to_98(int n)
{
	if (n <= 98)
	{
		for  (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
			printf(", ");
			}
		}
		printf("\n");
	}
	else if	(n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
		printf("98");
	return (98);
}
