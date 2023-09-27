#include "lists.h"


/**
 * find_listint_loop_fl - finds a loop in listint_t linked list
 * @head: linked list pointer to search
 * Return: the address of the node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
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


/**
 * free_listint_safe -  frees a listint_t list.
 * It sets the head to NULL
 * This function can free lists with a loop
 * You should go though the list only once
 * @h: pointer to head pointer of linked list.
 * Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop_node;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop_node = find_listint_loop_fl(*h);
	for (len = 0; (*h != loop_node || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loop_node && loop)
		{
			if (loop_node == loop_node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
