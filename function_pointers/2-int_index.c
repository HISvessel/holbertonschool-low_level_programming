#include "function_pointers.h"

/**
 * int_index - finding an index inside of an array
 * @array: the pointer to an array
 * @size: size of the array
 * @cmp: pointer to a function comparison
 * Return: the amount of index in array, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || size <= 0 || !array)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
