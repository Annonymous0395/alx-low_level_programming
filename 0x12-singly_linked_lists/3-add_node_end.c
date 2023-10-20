#include "lists.h"

/**
 * add_node_end - Entry point
 * @head: head of the list
 * @str: param string to stored in the list
 *
 * Return: address of the head(head)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i, *fig;
	size_t nstr;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	i->str = strdup(str);

	for (nstr = 0; str[nstr]; nstr++)
		;

	i->len = nstr;
	i->next = NULL;
	fig = *head;

	if (fig == NULL)
	{
		*head = i;
	}
	else
	{
		while (fig->next != NULL)
			fig = fig->next;
		fig->next = i;
	}

	return (*head);
}
