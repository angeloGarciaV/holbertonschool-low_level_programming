#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	newNode->next = (*head)->next;
	(*head)->next = newNode;
	newNode->str = strdup(str);

	if (newNode == NULL)
	{
		return (NULL);
	}

	return (newNode);
}
