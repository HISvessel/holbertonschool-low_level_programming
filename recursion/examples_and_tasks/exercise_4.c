#include <stdio.h>
#include "main.h"

void add_odd()
{
	int n = 1;

	if (n <= 10)
	{
		printf("%d",n+1); //prints the number and adds 1 to the first value//
		n++;//go to the next value//
		substract_even(); //after the first condition was met, go to this function//
	}
	return;
}

void substract_even()
{
	int n = 1;
	if (n <= 10)
	{
		printf("%d", n-1); //while the mext mumber is < 10, prints the next number and substract 1//
		n++;//go to the next value//
		add_odd(); //moves to this recursive function//
	}
	return;
}

int main()
{
	void add_odd();
	void substract_even();
}
