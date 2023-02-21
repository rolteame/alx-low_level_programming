#include "main.h"
/**
 * print_sign - pring number symbol
 *
 * @n: number passed
 * Return: 1 if +, 0 if 0, -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}else if (n == 0)
	{
		return (0);
	}else
	{
		return (-1);
	}
	_putchar('\n');
}
