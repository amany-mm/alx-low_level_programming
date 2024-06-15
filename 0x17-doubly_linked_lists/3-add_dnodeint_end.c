#include "lists.h"

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (head == NULL)
		return (NULL);

	/* malloc and set new node data */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	/* account for empty linked list */
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	/* traverse to last node and insert */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new;

	new->next = NULL;
	new->prev = last;

	return (new);
}
