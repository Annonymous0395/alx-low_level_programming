#include "main.h"
#include <stdio.h>

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
			int t = i * n;

			if (i == 0)
			{
				printf("%d", t);
			}
			if (n < 9 && t > 9)
			{
				printf(",");
				printf(" ");
			}
			if (n < 9 && t <= 9)
			{
				printf(",");
				printf("  ");
			}
			if (i > 0)
			{
				printf("%d", t);
			}
		}
		printf("\n");
	}
}
