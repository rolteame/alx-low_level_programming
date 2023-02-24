#include "main.h"

/**
 * print_numbers - print numbers using _putchar
 * Return: Always 0
 */
void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
