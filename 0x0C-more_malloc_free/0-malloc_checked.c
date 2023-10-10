#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: param of bytes
 *
 * Return: s if success, else 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		return (98);
	}

	return (s);
}
