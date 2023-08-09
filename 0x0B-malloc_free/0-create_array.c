#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Entry point
 * @size: param that determines size of the array
 * @c: character to be assigned
 *
 * Return: pointer p, Null for fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
