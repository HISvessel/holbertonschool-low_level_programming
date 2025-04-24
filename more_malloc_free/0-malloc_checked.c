#include "main.h"

/**
 * malloc_checked - this function allocates memory with malloc
 *@b: this points to the integer
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
	{
		exit(98);
	}
	return (check);
}
