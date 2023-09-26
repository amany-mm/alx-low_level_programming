#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * The function sets the head to NULL.
 * @head: pointer of head pointer of linked list
 * Return: NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL) /* empty linked list */
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;

		free(ptr); /* This means free and set the head to NULL */
	}
}

