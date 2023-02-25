#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i = 0, space = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			while (space < i)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');

			_putchar('\n');
		}
	}
	_putchar('\n')
}
