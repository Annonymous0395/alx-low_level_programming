#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: param to be printed
 *
 * Return: void
 */

void _puts_recursion (char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		char r = s[n];

		_putchar(r);
		n++;
	}
}
