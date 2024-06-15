#include "lists.h"

/**
 * add_dnodeint - add node to front of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	/* malloc and set new node data */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* account for empty linked list */
	if (*head == NULL)
	{
		*head = new_node;

		new_node->next = NULL;
		new_node->prev = NULL;

		return (new_node);
	}

	/* account for regular linked list */
	new_node->next = *head;
	new_node->prev = NULL;

	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);

}
