#include "main.h"
/**
 * print_last_digit - Print last digit
 *
 * @n: number
 * Return: return last_digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}
