#include "main.h"
/**
* print_alphabet_x10 - printing the alphabet 10 times
*Return:(0)
*/
void print_alphabet_x10(void)
{
	int a = 97;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
			_putchar('\n');
	}
}
