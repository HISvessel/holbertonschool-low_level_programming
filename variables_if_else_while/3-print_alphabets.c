#include <stdio.h>

/**
* main -Entry point
*Return: 0
*/
int main(void)
{
	char a = 65;
	char b = 97;
		while (b <= 122)
		{
			putchar(b);
		a++;
		}
		while (a <= 90)
		{
			putchar(a);
		a++;
		}
		putchar('\n');

		return (0);
}
