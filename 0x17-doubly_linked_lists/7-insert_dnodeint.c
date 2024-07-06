#include "lists.h"

/**
 * insert_dnodeint_at_index - create and insert node at nth index
 * @h: pointer to head of list
 * @idx: index
 * @n: node data
 * Return: address of inserted node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head;
	unsigned int i;

	new = NULL;
	/* Insert at beginning if empty or existing linked list */
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev; /* till he beginning */
		while (head != NULL)
		{
			if (i == idx)
			{	/* insert at the end of list */
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else/* insert elsewhere */
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{/* link it correctly between current head node & node following head.*/

						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new);
}
