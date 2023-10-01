#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s: param to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	if (s[n] == '\0')
	{
		n--;

		_putchar(s[n]);
		_rev_putsn(s, n - 1);
	}
	_putchar('\n')
}

/**
 * _rev_putsn - Entry point
 * @s: param to be printed
 * @n: counter for param
 *
 * Return: void
 */

void _rev_putsn(char *s, int n)
{
	if (n != 0)
	{
		_putchar(s[n]);
		_rev_putsn(s, n - 1);
	}
}

