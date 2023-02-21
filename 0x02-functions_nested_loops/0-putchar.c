#include "main.h"
/**
 * main - print _putchar
 *
 * Return: Always 0
 */

int main (void)
{
	char input[] = "_putchar";
	int size_lenght = 9, i = 0;

	while (i < size_length)
	{
		_putchar(input[i]);
		i++;
	}
	_putchar("\n")
}
