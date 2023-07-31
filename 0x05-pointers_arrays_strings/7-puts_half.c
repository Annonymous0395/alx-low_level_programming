#include "main.h"

/**
 * puts_half - Entry point
 * @str: param to be cut
 *
 * Return: void
 */

void puts_half(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	if (counter % 2 == 0)
	{
		int n = counter / 2;

		while (n != counter)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		int n = (counter) / 2;

		while (n != counter)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}

