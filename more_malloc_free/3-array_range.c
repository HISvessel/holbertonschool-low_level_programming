#include "main.h"

/**
 * array_range - creates an array of a range of memory
 * @min: the minimum index
 * @max: the maximum index
 * Return: : the array, else NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
