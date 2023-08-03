#include "main.h"

int _sqrt(int i, int n);

/**
 * _sqrt_recursion - Entry point
 * @n: param to be sqrt
 *
 * Return: -1 (error)
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(i, n));
	}
}

/**
 * _sqrt - Entry point
 * @i: param to be multiplied
 * @n: param to be sqrt
 *
 * Return: i if successful
 */

int _sqrt(int i, int n)
{
	if (i == 1)
	{
		return (1);
	}
	if (i > n / 2)
	{
		return (-1);
	}
	else
	{
		if (i * i == n)
		{
			return (i);
		}
		return (_sqrt(i + 1, n));
	}
}
