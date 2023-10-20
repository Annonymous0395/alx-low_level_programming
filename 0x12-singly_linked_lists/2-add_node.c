#include "lists.h"

/**
 * add_node - Entry point
 * @head: param thats heads the list
 * @str: param of string to stored in the list
 *
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	size_t nstr;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	i->str = strdup(str);

	for (nstr = 0; str[nstr]; nstr++)
		;

	i->len = nchar;
	i->next = *head;
	*head = i;

	return (*head);
}
