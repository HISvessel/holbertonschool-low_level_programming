#ifndef "function_pointer.h"
#define "function_pointer.h"
void print_name(char *name, void(*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *aray, int size, int(*cmp)(int));
int _putchar(char c);
#endif
