#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: number to be printed to
 *
 * Return: Void
 */

void print_to_98(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
