#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: number to be printed to
 *
 * Return: Void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i == 98)
		{
			printf("%d", i);
			break;
		}
		printf("%d, ", i);
	}

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			printf("%d, ", i);
		}
	}
	printf("\n");
}
