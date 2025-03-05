#include <stdio.h>
#include "main.h"
/**
 * print_array - this function prints an array
 * @a: var of array
 * @n: var of size
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m < n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
