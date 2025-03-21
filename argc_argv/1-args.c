#include <stdio.h>
/**
 * main - this function prints the number of arguments passed
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
