#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Entry point
 * @size: param that determines size of the array
 * @c: character to be assigned
 *
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		str[n] = c;
	return (str);
}
