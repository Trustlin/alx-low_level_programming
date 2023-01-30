#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to address of head
 */

void free_listint2(listint_t **head)
{
	listint_t *rety;

	if (head == NULL)
		return;

	while (*head)
	{
		rety = (*head)->next;
		free(*head);
		*head = rety;
	}

	head = NULL;
}
