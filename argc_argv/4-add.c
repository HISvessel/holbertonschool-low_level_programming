#include <stdio.h>
#include <stdlib.h>
/**
 * is_number - this function checks for a positive integer
 * @s: the string to check
 * Return: 1 if num, else 0
 */
int is_number(char *s)
{
	int i = 0;

	if (s[0] == '\0')
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		s[i]++;
	}
	return (1);
}

/**
 * main - this function adds the arguments passed to command line
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 upon failure to add, else 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
