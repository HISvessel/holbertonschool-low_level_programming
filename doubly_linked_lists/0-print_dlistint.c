#include "lists.h"

/**
 * print_dlistint - this prints out a node of double link
 * @h: pointer to a node
 * Return: the values of the node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
