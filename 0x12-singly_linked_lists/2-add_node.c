#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Entry point
 * @head: param that points to the list_t
 * @str: param of type string to be added into the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *forward;
	unsigned int n = 0;

	while (str[n])
	{
		n++;
	}
	forward = malloc(sizeof(list_t));
	if (!forward)
	{
		return (NULL);
	}
	forward->str = strdup(str);
	forward->n = n;
	forward->next = (*head);
	(*head) = forward;

	return (*head);
}
