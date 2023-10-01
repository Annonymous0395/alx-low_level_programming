#include "main.h"

void _strlens(char *s, int n);
/**
 * _strlen_recursion - Entry point
 * @s: param to be checked
 *
 * Return: Always 0 (success)
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (s[0] == '\0')
	{
		return (0);
	}

	if (s[n] != '\0')
	{
		_strlens(s, n + 1);
	}
	return (n);
}

#include "main.h"

/**
 * _strlens - Entry point
 * @s: param to be checked
 * @n: counter
 *
 * Return: void
 */

void _strlens(char *s, int n)
{
	if (s[n] != '\0')
	{
		n++;
	}
}
