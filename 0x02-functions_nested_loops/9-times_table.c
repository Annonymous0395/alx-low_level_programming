#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: void 
 */

void times_table(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			t = i * n;
			_putchar(t);
			_putchar(',');
			_putchar(' ');
			if (n == 9)
			{
				_putchar('\n');
			}
		}
	}
}	
