#include "main.h"
/**
 * more_numbers - print more numbers
 * Return: No return
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (i <= 9)
	{
		while (j < 15)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j% 10) + '0');
		}
		_putchar('\n');
	}
}
