#include "main.h"

void _rev_putsn(char *s, int n);
int _strlen(char *s, int n);

/**
 * _print_rev_recursion - Entry point
 * @s: param to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (s[0] !=  '\0')
	{
		if (s[32] == '\0')
		{
			int n = 32;
			_putchar(s[n]);
			_rev_putsn(s, n -1);
	}
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
	if (s[n] != '\n')
	{
		_putchar(s[n]);
		_rev_putsn(s, n - 1);
	}
}

/**
 * _strlen - Entry point
 * @s: param to be counted
 * @n: counter for param
 *
 * Return: j if successful
 */

int _strlen(char *s, int n)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	if (s[n] != '\0')
	{
		n = _strlen(s, n + 1);
	}
	n--;
	return (n);
}
