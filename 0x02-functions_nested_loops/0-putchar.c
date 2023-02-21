#include "main.h"
/**
 * print_putchar - print _putchar
 *
 * Return: Always 0
 */

int print_putchar (void)
{
	char input[] = "_putchar";
	int size_lenght = 9;
	int i = 0;

	while (i < size_length)
	{
		_putchar(input[i]);
		i++;
	}
	_putchar("\n")
}
