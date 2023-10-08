#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int cents(int checker);

/**
 * main - Entry point
 * @argc: number of cmd args
 * @argv: array of argc
 *
 * Return: 0 if success, else 1
 */

int main(int argc, char *argv[])
{
	int checker;

	int count = 0;

	if (argc > 2)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		if (atoi(argv[1]) <= 0)
		{
			printf("0\n");

			return (1);
		}
		else
		{
			checker = atoi(argv[1]);
			count = cents(checker);
		}
	}
	printf("%d\n", count);

	return (0);
}

/**
 * cents - Entry point
 * @checker: change
 *
 * Return: counter
 */

int cents(int checker)
{
	int count = 0;

	while (checker >= 25)
	{
		checker = checker - 25;
		count++;
	}
	while (checker >= 10)
	{
		checker = checker - 10;
		count++;
	}
	while (checker >= 5)
	{
		checker = checker - 5;
		count++;
	}
	while (checker >= 2)
	{
		checker = checker - 2;
		count++;
	}
	while (checker >= 1)
	{
		checker = checker - 1;
		count++;
	}

	return (count);
}
