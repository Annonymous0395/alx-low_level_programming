#include "main.h"

/**
 * puts2 - Entry point
 * @str: param to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}

	counter = counter - 1;
	while (i < counter)
	{
		if (i % 2 == 0)
		{
			char c = str[i];

			_putchar(c);
		}
		i++;
	}
	_putchar('\n');
}
