#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer of head pointer of linked list
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL) /* empty linked list */
		return (0);

	ptr = *head;

	data = ptr->n; /* save data to return later */

	*head = ptr->next; /* Set head pinter to next node */

	free(ptr);
	return (data);
}

