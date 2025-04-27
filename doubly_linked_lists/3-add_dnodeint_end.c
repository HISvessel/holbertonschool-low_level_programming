#include "lists.h"

/**
 * add_dnodeint_end - this function adds a node at the end of DLL
 * @head: pointer to a pointer of node
 * @n: value of a new node
 * Return: node at index, else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!h)
		return (NULL);

	h->n = n;
	h->prev = NULL;
	h->next = NULL;

	if (!*head)
	{
		*head = h;
		return (h);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = h;
	h->prev = temp;
	return (h);
}
