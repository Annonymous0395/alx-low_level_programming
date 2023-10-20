#include "main.h"

/**
 * list_len - Entry point
 * @h: param linked list
 *
 * Return: number of elements in the list (n)
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
