#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function multiplies two argument
 * @argc: argument counter
 * @argv: integers to multiply
 * Return: 1 if no mult, else 0(Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);

		printf("%d\n", n1 * n2);
			return (0);
	}
	else
	{
			printf("Error\n");
			return (1);
	}
}
