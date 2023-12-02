#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;

	newNode->n = n;

	return (newNode);
}
