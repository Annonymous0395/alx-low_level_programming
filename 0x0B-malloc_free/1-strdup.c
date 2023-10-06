#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Entry point
 * @str: param to be duplicated
 * Return: 0 or any
 */

char *_strdup(char *str)
{
	char *any;
	int j, i = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	any = malloc(sizeof(char) * (j + 1));

	if (any == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		any[i] = str[i];

	return (any);
}
