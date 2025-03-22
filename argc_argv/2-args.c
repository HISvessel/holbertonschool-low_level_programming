#include <stdio.h>

/**
 * main - this function prints one argument per line
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
	{
		printf("%s\n", argv[l]);
	}
		return (0);
}
