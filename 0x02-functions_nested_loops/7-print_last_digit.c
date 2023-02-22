#include "main.h"
/**
 * print_last_digit - Print last digit
 *
 * @n: number
 * Return: return last_digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

       	_putchar('0' + (n % 10));

	return (n % 10);
}
