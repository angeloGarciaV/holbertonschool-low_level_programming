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
	dlistint_t *current = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (current == NULL)
	{
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
	} else if (current->next != NULL)
	{
		newNode->next = current->next;
		current->next->prev = newNode;
		newNode->prev = *head;
		(*head)->next = newNode;
		newNode->next = current->next;
		current->next->prev = newNode;
		newNode->prev = *head;
		(*head)->next = newNode;
	}
	newNode->n = n;

	return (newNode);
}
