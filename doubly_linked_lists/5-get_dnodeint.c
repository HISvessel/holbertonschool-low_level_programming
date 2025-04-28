#include "lists.h"

/**
 * get_dnodeint_at_index - this function gets the value of an nth node
 * @head: the pointer to a node
 * @index: the index of the node to return
 * Return: the value of the nth node, else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int counter = 0;

	while (temp)
	{
		if (counter == index)
		{
			return (temp);
		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
