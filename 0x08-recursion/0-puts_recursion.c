#include "main.h"

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
		_putn(s, n + 1);
	}
	putchar('\n');
}

/**
 * _putn - Entry point
 * @s: param to be printed
 * @n: counter for param
 *
 * Return: void
 */

void _putn(char *s, int n)
{
	if (s[n] != '\0')
	{
		_putchar(s[n]);
		_putn(s, n + 1);
	}
}
