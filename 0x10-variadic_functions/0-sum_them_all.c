#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * @n: number of args
 *
 * Return: j
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int j = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
		j += va_arg(list, int);

	va_end(list);

	return (j);
}
