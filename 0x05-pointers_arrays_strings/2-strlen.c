#include "main.h"

/**
 * _strlen - Entry point
 * @s: param to be checked
 *
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	char i;
	int counter = 0;

	for (i = '0'; i < *s; i++) 
	{
		counter++;
	}

	return (counter);
}	
