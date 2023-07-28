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

	for (i = s; i < *s; i++) 
	{
		counter++;
	}

	return (counter);
}	
