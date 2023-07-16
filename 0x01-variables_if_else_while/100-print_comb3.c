#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = '0';

	for (a = '0'; a < '9'; a++)
	{	int b = a + 1;
		for (; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if (a == '8' && b == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
