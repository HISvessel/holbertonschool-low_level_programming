#include "lists.h"

/**
 * free_dlistint - the function frees a doubly linked list
 * @head: pointer to a node
 * Return: NULL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
