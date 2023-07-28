#include "main.h"

/**
 * swap_int - Entry point
 * @a: first param
 * @b: second param
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
