#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	//declare a function pointer that matches
	//the signature of add() function
	int(*fptr)(int, int);
	
	// Assign to add()
	fptr = &add;

	printf("%d\n", fptr(10, 5));
	return 0;
}
