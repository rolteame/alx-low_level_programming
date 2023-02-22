#include "main.h"
/**
 * print_times_table - prints times table
 *
 * Return: Always 0
 */
void print_times_table(int n)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = (row * column);

			if (!(n > 15 || n < 0))
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
