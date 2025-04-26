#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_array_numbers(int *array, int size)
{
	int index;

	for (index = 0; index < size; index++)
	{
		printf("%d", array[index]);
	}
	printf("\n");
}

int print_list_var(const char *separator, int numbers, ...)
{
}

int main()
{
	int array[] = {1, 2, 3, 4};
	print_array_numbers(array, 4);
	printf("-------------------");
	printf("\n");
	print_list_var(",", 4, 10, 20, 30, 40);
	return (0);
}
