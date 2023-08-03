#include "main.h"

/**
 * factorial - Entry point
 * @n: param for calculation
 *
 * Return: -1 (error)
 */

int factorial(int n)
{
	if (n < 0 )
	{
		return (-1);
	}
	else 
	{
		return (n * factorial(n - 1));
	}
}
