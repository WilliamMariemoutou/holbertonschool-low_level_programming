#include "list.h"
#include <stddef.h>

/**
 *list_len - returns the number of elements in the list
 *@h: points to the head of the list
 *
 *Description: Counts the number of nodes starting from the head
 *
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
			h = h->next;
	}

	return (count);
}
