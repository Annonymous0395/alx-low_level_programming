#include "main.h"

/**
 * _strlen - Entry point
 * @s: param to be checked
 *
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int counter = 0;

	while(s[counter] != '\0')
	{
		counter++;
	}	

	return (counter);
}	
