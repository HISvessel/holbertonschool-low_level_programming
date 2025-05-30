#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to the character to be printed.
 */
void print_char(va_list arg)
{
	char letter = va_arg(arg, int);

	printf("%c", letter);
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to the integer to be printed.
 */
void print_int(va_list arg)
{
	int num = va_arg(arg, int);

	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to the float to be printed.
 */
void print_float(va_list arg)
{
	float num = va_arg(arg, double);

	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to the string to be printed.
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 *
 * Description: c - char, i - integer, f - float, s - string.
 * If the string is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(funcs[j].symbol))
			{
				printf("%s", separator);
				funcs[j].print(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
