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

	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}

	if (n > 98)
	{
		for (i = n; i >=98; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
