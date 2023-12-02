#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 *  dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 * Return: nth node, or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
