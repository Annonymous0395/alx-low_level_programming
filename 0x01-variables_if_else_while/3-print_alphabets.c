#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = 'a';
	char b = 'B';

	for (a = 'a'; a <= 'z'; a = a + 2)
	{
		putchar(a);
		putchar(b);
		b = b + 2;
	}
	putchar('\n');
	return (0);
}
