#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: param to be checked
 *
 * Return: Always 0 (success)
 */

int _strlen_recursion(char *s)
{
	int n = 0;
	if (*s == "")
	{
		return (0);
	}

	if (s[n] != '\0')
	{
		n++;
	}
}

#include "main.h"

/**
 * _strlen - Entry point
 * @s: param to be checked
 * @n: counter
 * Return: Always 0 (success)
 */

int _strlen(char *s, int n)
{
	if (s[n] != '\0')
	{
		n++;
	}
}
