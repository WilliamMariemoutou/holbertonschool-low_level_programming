#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in the linked list
 * @h: header of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
