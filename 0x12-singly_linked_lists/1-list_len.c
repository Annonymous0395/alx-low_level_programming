#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Entry point
 * @h: aram that points to the list_t list
 *
 * Return: number of elements in param
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
