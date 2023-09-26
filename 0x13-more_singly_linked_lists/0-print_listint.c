#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: singly linked list
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /* if no int value, autofill 0 */

		count++;
		h = h->next;
	}
	return (count);
}

