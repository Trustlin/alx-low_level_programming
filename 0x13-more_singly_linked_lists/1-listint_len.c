#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the number of elements
 * @h: pointer to head of the listint_t list
 * Return: number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
