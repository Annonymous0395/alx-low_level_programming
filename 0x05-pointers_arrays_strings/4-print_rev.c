#include "main.h"

/**
 * print_rev - Entry point
 * @s: param to be printed backwards
 *
 * Return: void
 */

void print_rev(char *s)
{
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
		i = counter;
	}
	while (counter != 0)
	{
		char c = s[counter];
		_putchar(c);
		counter--;
	}
}	
