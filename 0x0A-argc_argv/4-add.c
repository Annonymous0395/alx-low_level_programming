#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of argc
 *
 * Return: 0 if success, else 1
 */

int main(int argc, char *argv[])
{
	int i;

	int j = 0;

	int s = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			j = atoi(argv[i]);
			s = s + j;
		}
		else
		{
			printf("Error\n");

			return (1);
		}
	}
	printf("%d\n", s);

	return (0);
}
