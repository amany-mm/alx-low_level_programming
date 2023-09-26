#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head pointer of linked list
 * Return: NULL
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL) /* empty linked list */
		return;

	while (head != NULL) /* ptr to keep track of head and free it */
	{
		ptr = head;
		head = head->next; /* move to next node while ptr frees prior */

		free(ptr);
	}
}

