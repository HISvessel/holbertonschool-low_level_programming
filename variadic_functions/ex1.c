#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


int print_numbers(const char *separator, int count, ...)
{
	va_list args;
	int i, num;

	va_start(args, count);
	for (i = 0; i < count; i++)
	{
		int num = va_arg(args, int);
		printf("%d", num);
		if (i < count - 1 && *separator != '\0')
		{
			printf("%s", separator);
		}
	}
	va_end (args);
	return(i);
}


int main()
{

    print_numbers(", ", 4, 10, 20, 30, 40);
    printf("\n");
    print_numbers(" | ", 3, 1, 2, 3);
    printf("\n");
    print_numbers(NULL, 2, 100, 200);  // test with no separator
    printf("\n");

    return (0);
}
