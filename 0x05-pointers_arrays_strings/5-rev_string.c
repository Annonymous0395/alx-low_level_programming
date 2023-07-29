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

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter = counter - 1;
	for (i = 0; i <= counter; i++)
	{
		char c = s[i];
		char d = s[counter];

		s[i] = d;
		s[counter] = c;
		counter--;
	}
}
