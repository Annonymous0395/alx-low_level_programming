#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: void
 */


void print_alphabet(void);

void print_alphabet(void)
{
	for (char a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		putchar('\n');
		return;
	}
}
