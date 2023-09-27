#include "lists.h"


/**
 * find_listint_loop - finds a loop in listint_t linked list
 * @head: linked list pointer to search
 * Return: the address of the node where loop starts/returns, NULL if no loop
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


/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head pointer of linked list.
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int loop = 1;
	listint_t *loop_node;

	loop_node = find_listint_loop((listint_t *) head);

	/* A loop was found */
	while (head != NULL && (head != loop_node || loop))
	{
		printf("[%p] %d\n", (void *) head, head->n);

		/* current node matches loop_node (the node where the loop starts) */
		if (head == loop_node)
			loop = 0; /* indicate that the loop has been printed */

		head = head->next;

		len++;
	}

	if (loop_node != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);

	return (len);
}
