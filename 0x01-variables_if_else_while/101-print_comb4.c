#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = '0';

	for (a = '0'; a <= '7'; a++)
	{
		int b = a + 1;

		for (; b <= '8'; b++)
		{
			int c  = b + 1;

			for (; c <= '9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
