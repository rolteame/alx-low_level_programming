#include <stdio.h>
/**
 * main - list natural numbers
 *
 * Return: Always 0
 */
int main (void)
{
	int n = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			int num += n;
		}
	}
	printf("%d\n", num);
}
