#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: address of the new element, or NULL if it failed
 */

/*assume the list is empty, add a node then have the newNode point to the previous one*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *current = (*head);

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	

	if ((*head) == NULL)
	{
		*head = newNode;
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	if (current->next == NULL)
	{
		current->next = newNode;
		newNode->next = NULL;
	}

	return (newNode);
}