#include <stdio.h>
#include <string.h>

int array_sum(int *a, int n)
{
	if (n == 0)
	{
		return 0;
	}
	else 
		printf("");
		return a[n-1] + array_sum(a, n-1);
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(a[0]);

	printf("The sum of all array is %d\n", array_sum(a, n));
	return 0;
}
