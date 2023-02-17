#include <stdlib.h>
#include <time.h>
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
	if(n)
	{
		printf(n, "%d is positive");
	}
	else
	{
		printf(n, "%d id negative");
	}
	return (0);
}
