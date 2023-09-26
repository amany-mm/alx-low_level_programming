#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to head pointer of linked list
 * @n: data to add to the new node
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /* if empty list, make head points to the new node */
		*head = new_node;

	else
	{
		tmp = *head; /* set tmp pointer to iterate without moving head ptr*/

		while (tmp->next != NULL) /* iterate till the last node */
			tmp = tmp->next;

		tmp->next = new_node; /* link last node to the new node */
	}
	return (new_node);
}

