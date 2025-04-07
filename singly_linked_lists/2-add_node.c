#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - this function adds a node to the beginning of a list
 * @head: pointer to a pointer
 * @str : the string to duplicate
 * Return: the string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
	}
	else
	{
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
