#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: command line arg
 * @argv: array of argv
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
