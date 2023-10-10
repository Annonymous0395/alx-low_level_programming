#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry poin
 * @s1: param  first string.
 * @s2: param second string.
 * @n: param of bytes.
 *
 * Return: pointer, else 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l, k , ls, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l] != '\0')
	{
		l++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	if (n > k)
		n = k;

	ls = l + n;

	s = malloc(ls + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ls; i++)
		if (i < i)
			s[i] = s1[i];
		else
			s[i] = s2[i - l];

	s[i] = '\0';

	return (s);
}
