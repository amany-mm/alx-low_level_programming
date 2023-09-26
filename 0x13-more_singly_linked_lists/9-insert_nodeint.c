#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer of head pointer of linked list.
 * @idx: the index of the list where the new node should be added.
 * @n: data of new node
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;
	unsigned int i = 0;

	/* empty linked list */
	if (head == NULL)
		return (NULL);

	/* new node malloc and set values */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* account for idx = 0, insert new node at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* iterate to 1 index before the nth idx to insert before this node */
	ptr = *head;

	while (i < (idx - 1) && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	/* account for idx out of range */
	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* link new node into the list */
	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
