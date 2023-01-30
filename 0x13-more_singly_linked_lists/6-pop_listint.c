#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t lists
 * @head: pointer to address of head
 * Return: head node's data n
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
