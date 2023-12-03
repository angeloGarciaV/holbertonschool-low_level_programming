#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - function that deletes the node at index of a
 * dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			temp = current;
			current->prev->next = current->next;
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			free(temp);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
