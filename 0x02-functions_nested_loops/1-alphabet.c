#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (success)
 */


void print_alphabet(void);

void print_alphabet(void)
{
	for (char a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		putchar('\n');
	}
}
