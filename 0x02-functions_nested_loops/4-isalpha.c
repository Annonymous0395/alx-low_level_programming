#include <stdlib.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c: to be checked
 *
 * Return: 1 if c is lowercase. 0 if otherwise
 */

int _islower(int c)
{

	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
