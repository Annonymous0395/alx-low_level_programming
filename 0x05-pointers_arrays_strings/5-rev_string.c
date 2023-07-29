#include "main.h"

/**
 * rev_string - Entry point
 * @s: param to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int counter = 0;
	int *c = *s;

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter = counter - 1;
	for (i = 0; i <= counter; i++)
	{
		s[i] = c[counter];
		counter--;
	}
}
