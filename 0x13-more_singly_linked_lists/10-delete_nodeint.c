#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer of head pointer of linked list.
 * @index:  the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *node_to_delete;
	unsigned int i = 0;

	/* account for empty list */
	if (*head == NULL)
		return (-1);

	ptr = *head;

	/* account for deleting the beginning node */
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	/* iterate ptr to index PRIOR node index to be deleted */
	while (i < (index - 1) && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}

	/* account for index out of range, don't delete and return */
	if (i != (index - 1) || ptr->next == NULL)
		return (-1);

	/**
	 * Update the next pointer of the ptr to skip the node to be
	 * deleted and point to the node after it
	 */
	node_to_delete = ptr->next;
	ptr->next = node_to_delete->next;

	free(node_to_delete);

	return (1);
}
