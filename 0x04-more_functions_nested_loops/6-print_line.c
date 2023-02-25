#include "main.h"
/**
 * print_line - print _ as line
 * @n: number of _ to be printed
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
