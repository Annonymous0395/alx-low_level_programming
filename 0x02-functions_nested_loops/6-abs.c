#include "main.h"

/**
 * _abs - Entry point
 * @n: value to be checked
 *
 * Return: n (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	return (n);
}
