#include "main.h"

int _prime(int i, int n);

/**
 * is_prime_number - Entry point
 * @n: param to be checked
 *
 * Return: 1 if n is a prime number. otherwise 0
 */

int is_prime_number(int n)
{
	int i = 1;

	if (n <= 1)
	{
		return (0);
	}
	return (_prime(i, n));
}

/**
 * _prime - Entry point
 * @i: param to be checked
 * @n: param to be checked
 *
 * Return: 1 if n is a prime number otherwise 0
 */

int _prime(int i, int n)
{
	if (i < n)
	{
		if (n % i == 0)
		{
			return (1);
		}
		return (_prime(i + 1, n));
	}
	else
	{
		return (0);
	}
}
