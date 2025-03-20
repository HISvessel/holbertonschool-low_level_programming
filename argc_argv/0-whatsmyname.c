#include <stdio.h>
#include <string.h>

/**
 * main - printing the program name
 * @argc: argument number passed
 * @argv: array of arguments
 *Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
