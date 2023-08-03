#include "main.h"

void _putsc(char *s, int n)
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
		_putsc(s, n + 1);
	}
}

/**
 * _putsc - Entry point
 * @s: param to be printed
 * @n: param to be cross-refrenced
 *
 * Return: void
 */

void _putsc(char *s, int n)
{
	if(s[n] != '\0')
	{
		_putchar(s[n]);
		_putsc(s, n + 1);
	}
}
