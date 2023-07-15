#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = 'a';
	char b = '0';

	for (b = '0'; b <= '9'; a++)
	{
		putchar(b);
	}

	for (a = 'a'; a <= 'f'; a++)

	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
