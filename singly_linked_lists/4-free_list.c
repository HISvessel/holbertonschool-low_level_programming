#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - this function frees nodes that were alloc'ed dynamically
 * @head: the pointer to the structure
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *new;

	current = head;
	while (current != NULL)
	{
		new = current->next;
		free(current->str);
		free(current);
		current = new;
	}
}
