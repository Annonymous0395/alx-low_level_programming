#include "main.h"

/**
 * _puts - Entry point
 * @str: param to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	_putchar('\n');
}
