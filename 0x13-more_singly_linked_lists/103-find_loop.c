#include "lists.h"


/**
 * find_listint_loop - finds the loop in a linked list.
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 * @head: linked list pointer to search
 * Return:  The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		/** check if the end pointer points to itself, which indicates a loop. */
		if (end == end->next)
			return (end);

		/* iterates from the head of the list up to the current end pointer.*/
		for (ptr = head; ptr != end; ptr = ptr->next)
		{
			/**
			 * If the ptr pointer becomes equal to the end->next,
			 * it also indicates a loop.
			*/
			if (ptr == end->next)
				return (end->next);
		}
	}

	return (NULL);
}

