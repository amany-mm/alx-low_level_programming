#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: linked list head
 * @str: needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->len = _strlen(str);
	new_node->str = strdup(str);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head; /* set new node next next points to head */

	*head = new_node; /* set head pointer points to new node */

	return (new_node);
}
