#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of commandline arguments
 * @argv: array of argc
 *
 * Return: 0 (successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
