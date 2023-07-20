#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * @c: to be checked
 *
 * Return: 1 if c is lowercase or uppercase. 0 if otherwise
 */

int _isalpha(int c)
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
