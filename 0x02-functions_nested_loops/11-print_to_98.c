#include "main.h"
/**
 * print_to_98 - print to 98
 *
 * @n: number to start from
 * Return: Always 0
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++
	}

	while (n >= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++
	}
}
