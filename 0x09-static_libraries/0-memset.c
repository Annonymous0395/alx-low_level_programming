#include "main.h"
/**
 * _memset - Entry point
 * @s: address of memory
 * @b: param to be inserted
 * @n: param 
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
