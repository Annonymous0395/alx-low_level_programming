#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Entry point
 * @head: param to be removed
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
