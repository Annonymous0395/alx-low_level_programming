#include "lists.h"

/**
 * free_list - Entry point
 * @head: head of the linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *now;

	while ((now = head) != NULL)
	{
		head = head->next;
		free(now->str);
		free(now);
	}
}
