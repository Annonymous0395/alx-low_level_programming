#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Entry point
 * @head: param that points to the list_t
 * @str: param of type string
 *
 * Return: address of the new var, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *recent;
	list_t *x = *head;
	unsigned int n = 0;


	while (str[n])
	{
		n++;
	}
	recent = malloc(sizeof(list_t));
	if (!recent)
	{
		return (NULL);
	}
	recent->str = strdup(str);
	recent->len = n;
	recent->next = NULL;

	if (*head == NULL)
	{
		*head = recent;
		return (recent);
	}

	while (x->next)
	{
		x = x->next;
	}
	x->next = recent;

	return (recent);
}
