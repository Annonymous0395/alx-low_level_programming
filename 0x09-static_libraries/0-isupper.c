#include "main.h"

/**
 * _isupper - Entry point
 * @c: param to be checked
 *
 * Return: 0 or 1 if success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
