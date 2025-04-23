#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - this function iterates through an array
 * @size: variable size of array
 * @array: function to be pointed to
 * @action: this points to our functions
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
