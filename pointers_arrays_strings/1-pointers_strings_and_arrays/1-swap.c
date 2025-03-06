#include "main.h"
/**
 * swap_int - this fucntion is going to swap ints
 *@a: int to swap
 *@b: int to swap
 */
void swap_int(int *a, int *b)
{
	int seg;

	seg = *a;
	*a = *b;
	*b = seg;
}
