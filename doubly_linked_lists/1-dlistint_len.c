#include "lists.h"

/**
 * dlistint_len - this function prints the number of nodes
 * @h: the pointer to a node
 * Return: the size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		/* count++; */
		h = h->next;
		count++;
	}
	return (count);
}
