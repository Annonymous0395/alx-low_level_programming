#include "list.h"
#include <stdio.h>

/**
 * print_list - Entry point
 * @h: param meter that points to list_t
 *
 * Return: the number of nodes (success)
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
