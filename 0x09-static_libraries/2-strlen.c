#include "main.h"
/**
 * _strlen - Entry point
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
