#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the number of elements in a linked list
 * @h:list_t struct
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
    size_t len = 0;

    while (h != NULL)
    {
        len++;
        h = h->next;
    }
    return (len);
}