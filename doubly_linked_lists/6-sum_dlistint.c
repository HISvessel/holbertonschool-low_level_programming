#include "lists.h"

/**
 * sum_dlistint - this sums the values of a DLL
 * @head: pointer to a struct node
 * Return: the sum of all nodes values, else NULL
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int num = 0;

	while (head)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}
