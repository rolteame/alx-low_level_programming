#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Print positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d id negative\n", n);
	}
	return (0);
}
