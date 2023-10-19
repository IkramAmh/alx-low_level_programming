#include <stdio.h>
#include "lists.h"

/**
 * list_len - list
 * @h: const list_t pointer argument
 * Description: returns the number of elements in a linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
