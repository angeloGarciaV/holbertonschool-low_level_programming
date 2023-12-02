#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = newNode;
	newNode->prev = current;

	return (newNode);
}
