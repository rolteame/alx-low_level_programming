#include "main.h"
/**
 * _strlen - return length of string
 * @s: passed string to count
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
