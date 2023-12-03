#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 *  position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int count = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			if (current->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
			{
				return (NULL);
			}
			new_node->n = n;
			new_node->next = current->next;
			new_node->prev = current;
			current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
