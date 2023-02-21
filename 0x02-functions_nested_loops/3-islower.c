#include "main.h"
/**
 * _islower - check if c is lowercase
 *
 * @c: passed char
 * Return: 1 if lower, 0 if its not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
	_putchar('\n');
}
