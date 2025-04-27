#include "lists.h"

/**
 * add_dnodeint - this function adds a node at the begining
 * @head: the pointer to a head of list
 * @n: value of a node
 * Return: value of node at position
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = malloc(sizeof(dlistint_t));

	if (!h)
		return (NULL);

	h->n = n;
	h->prev = NULL;
	h->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = h;
	}
	*head = h;
	return (h);
}
