#include "main.h"
/**
 * print_line - print _ as line
 * @n: number of _ to be printed
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
