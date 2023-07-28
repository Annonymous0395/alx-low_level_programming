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

			if (t == 0)
			{
				continue;
			}
			else if (t > 9)
			{
				printf(" ");
			}
			else
			{
				printf("  ");
			}
			printf("%d", t);
			if (n < 9)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
