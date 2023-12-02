#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = h;
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
