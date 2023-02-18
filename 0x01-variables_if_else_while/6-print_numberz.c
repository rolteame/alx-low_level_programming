#include <stdio.h>
/**
 * main - print all base 10 numbers
 *
 * Return: 0
 */
int main(void)
{
	long int i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
