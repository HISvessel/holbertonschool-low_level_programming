#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - this function prints a list of nodes
 * @h: the pointer to our node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
			temp = temp->next;
			counter++;
	}
	return (counter);
}
