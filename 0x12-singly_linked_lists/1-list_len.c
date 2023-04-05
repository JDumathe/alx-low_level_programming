#include <stdio.h>
#include "lists.h"

/**
 * list_len - lists all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
