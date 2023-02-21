#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 9)
	{
		char letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
