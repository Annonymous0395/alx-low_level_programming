#include "main.h"

/**
 * _pow_recursion - Entry point
 * @j: param multiple
 * @k: used multiplier
 *
 * Return: -1 (error)
 */

int _pow_recursion(int j, int k)
{
	if (k < 0)
	{
		return (-1);
	}
	else
	{
		if (k == 0)
		{
			return (1);
		}
		return (j * _pow_recursion(j, k - 1));
	}
}
