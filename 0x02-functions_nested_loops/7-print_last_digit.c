#include "main.h"

/**
 * print_last_digit - Entry point
 * @c: data of the function
 *
 * Return: value of c  (success)
 */

int print_last_digit(int c)
{
	int n = c % 10;

	_putchar(n);
	return (c);
}

