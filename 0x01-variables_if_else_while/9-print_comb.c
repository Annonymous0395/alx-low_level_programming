#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchat(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
