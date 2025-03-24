#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - this function prints a name
 * @f: pointer to a function
 * @name: variable to a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
