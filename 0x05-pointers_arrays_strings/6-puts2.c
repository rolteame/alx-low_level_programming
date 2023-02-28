#include "main.h"
/**
 * puts2 - print every other char
 * @str: input string pointer
 * Return: No return
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0 && str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
