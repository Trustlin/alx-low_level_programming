#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning
 * @head: pointer to head
 * @n: integer for nodes
 * Return: NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
