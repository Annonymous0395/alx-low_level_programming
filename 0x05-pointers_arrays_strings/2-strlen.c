#include "main.h"

/**
 * _strlen - Entry point
 * @s: param to be checked
 *
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int i;
	int counter = 0;
	char c = *s;

	for (i = 0; i < *s; i++)
	{
		counter++;
	}
	return (counter);
}	
