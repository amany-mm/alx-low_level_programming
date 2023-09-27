#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 * @head: pointer of head pointer of linked list.
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	/* account for no ptr and empty list */
	if (head == NULL || *head == NULL)
		return (NULL);

	/* iterate through list to reverse linking */
	prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next; /* keep track of next node to move to */

		(*head)->next = prev; /* link current node's ptr to prev node */

		prev = *head; /* update previous node to be current node */

		*head = next; /* move current node to next node */
	}

	(*head) = prev; /* unlink last element from null and point backwards */

	return (*head);
}
