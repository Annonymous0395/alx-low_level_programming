#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = (n % 10);
	if (n < 0)
	{
		if (l == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, l);
		}
		else
		{

			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
		}
	}
	if (n > 0)
	{
		if (l == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, l);
		}
		else
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, l);
		}
	}
	if (n == 0)
	{
		if (l == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, l);
		}
	}
	return (0);
}
