#include "lists.h"

/**
 * print_dlistint - prints all data of doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		no_nodes += 1;
	}

	return (no_nodes);
}
