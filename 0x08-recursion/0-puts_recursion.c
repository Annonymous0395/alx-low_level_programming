#include "main.h"

void _putsn(char *s, int n);

/**
 * _puts_recursion - Entry point
 * @s: param to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		_putchar(s[n]);
		_putsn(s, n + 1);
	}
	_putchar('\n');
}

/**
 * _putsn - Entry point
 * @s: param to be printed
 * @n: counter for param
 *
 * Return: void
 */

void _putsn(char *s, int n)
{
	if (s[n] != '\0')
	{
		_putchar(s[n]);
		_putsn(s, n + 1);
	}
}
