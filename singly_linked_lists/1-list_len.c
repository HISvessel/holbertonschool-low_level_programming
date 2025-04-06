#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - this function returns the amout of nodes in a linked list
 * @h: pointer to a structurre
 * Return: the amount of nodes
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *temp = h;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
		return (counter);
}
