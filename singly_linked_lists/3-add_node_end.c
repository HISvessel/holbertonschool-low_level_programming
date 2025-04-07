#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node_end - this function adds a node to the end of a linked list
 * @head: a pointer to the pointer of a struct
 * @str: the string to duplicate
 * Return: the structure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end;
	list_t *temp;
	unsigned int counter = 0;

	node_end = malloc(sizeof(list_t));
	if (node_end == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		node_end->str = NULL;
		node_end->len = 0;
	}
	else
	{
		node_end->str = strdup(str);
		while (str[counter] != '\0')
		{
			counter++;
		}
		node_end->len = counter;
	}
	node_end->next = NULL;
	if (*head == NULL)
	{
		*head = node_end;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node_end;
	}

	return (node_end);
}
