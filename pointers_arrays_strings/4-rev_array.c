#include "main.h"
/**
 * reverse_array - this function prints an array in reverse
 *@a: an array of numbers
 *@n: the number of elements in an array
 */
void reverse_array(int *a, int n)
{
	int i = 0, b, temp;

	for (b =  n - 1; b > i; b--)
	{
		temp = a[b];
		a[b] = a[i];
		a[i] = temp;
		i++;
	}
}
