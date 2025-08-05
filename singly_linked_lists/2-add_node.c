#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - adds a new node at the beginning of the list
 *@head: address of the pointer at the start
 *@str: the string to be stored
 *
 *Return: address of the new element or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
		char *dup;

		if (head == NULL || str == NULL)
			return (NULL);

		new = maloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		dup = strdup(str);
		if (dup == NULL)
		{
			free(new);
			return (NULL);
		}

		new->str = dup;
		new ->len = (unsigned int) strle(dup);
		new -> next = *head;
		*head = new;

		return (new);
}
