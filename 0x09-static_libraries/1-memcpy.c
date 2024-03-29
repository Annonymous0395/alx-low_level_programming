#include "main.h"

/**
 *_memcpy - Entry point
 *@dest: param to be copied
 *@src: param to be copied
 *@n: number
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

