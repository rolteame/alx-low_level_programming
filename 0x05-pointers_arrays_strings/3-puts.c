#include "main.h"
/**
 * _puts - return string
 * @s: input string
 * Return: sting
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\n')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}