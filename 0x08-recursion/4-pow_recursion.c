#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: param multiple
 * @y: param multiplier
 *
 * Return: -1 (error)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		return (x * _pow_recursion(x, y - 1));
	}
}
