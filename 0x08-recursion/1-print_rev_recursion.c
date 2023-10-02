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
	int n = 0;

	int j = 0;

	if (s[n] != '\0')
	{
		j = _strlen(s, n + 1);
	}
	if (s[j] !=  '\0')
	{
		_putchar(s[j]);
		_rev_putsn(s, j - 1);
	}
	_putchar('\n');
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
